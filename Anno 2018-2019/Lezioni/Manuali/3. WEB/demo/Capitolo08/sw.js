const cacheUrls = [
  'index.html',
  'main.css',
  'file.js'
]; 

self.addEventListener('install', ev => {
  ev.waitUntil(
    caches.open('myCache')
      .then(cache => cache.addAll(cacheUrls))
      .then(self.skipWaiting())
  );
});

self.addEventListener('fetch', ev => {
  ev.respondWith(
    caches
      .match(ev.request)
      .then(response => {
        if (response) {
          return response;
        }
        return fetch(event.request);
      }
    )
  );
});
