# A Sky Forge

**Hey you! Read This!**
**Thanks for checking out my repository - but unfortunately it's not quite done yet. So if you want to try using this, it's totally cutting edge and might not be fully ready for your amazing creations yet. Just wanted to warn you before you before you dive in. - Dante83**

A-Sky-Forge is a sky dome for [A-Frame Web Framework](https://aframe.io/). It builds upon on the work of [A-Sun-Sky Project](https://github.com/ngokevin/kframe/tree/master/components/sun-sky) to provide a vibrant living sky for your metaverse.

##Prerequisites

This is built for the [A-Frame Web Framework](https://aframe.io/).

It is important, for now, to use version 0.7.0 of A-Frame, as the current build of A-Sky-Forge is refusing to work with the version of THREE JS contained in later versions.

`https://aframe.io/releases/0.7.0/aframe.min.js`

##Installing

When installing A-Sky-Forge, you'll want the code located in js/a-sky-forge/dist.
Copy the minified file, askyforge.v0.1.0.js into your javascripts directory and the images in copy_me_to_image_dir into your image directory.

On your webpage make sure that the script link to ask forge goes below aframe, like so

```html
<script src="https://aframe.io/releases/0.7.0/aframe.min.js"></script>
<script src="../js/a-sky-forge/dist/askyforge.v0.1.0.min.js"></script>
```

Once these references are set up, add the a-sky-forge component into your a-scene-tag, as follows

```html
<a-scene>
  <a-sky-forge material="shader: sky;"></a-sky-forge>
</a-scene>
```

This barebones code will provide you with a sky that moves in real time at the latitude and longitude of San Francisco, California.

A-Sky-Forge also presumes that your images will be located in the directory, ../images. Chances are, this the last place your application put these images. To inform the program where the image data is located, please replace the appropriate directories below and add them in under the sky-time attribute.

```
moonTexture: '../images/moon-dif-512.png';
moonNormalMap: '../images/moon-nor-512-padded.gif';
starMask: '../images/padded-starry-sub-data-0.png';
starRas: '../images/padded-starry-sub-data-1.png';
starDecs: '../images/padded-starry-sub-data-2.png';
starMags: '../images/padded-starry-sub-data-3.png';
starColors: '../images/padded-starry-sub-data-4.png';
```

Your resulting code will probably be a bit more verbose - at least until I can provide a custom directory attribute.

```html
<a-scene>
  <a-sky-forge sky-time="moonTexture: '../custom_dir/stuff/moon-dif-512.png'; moonNormalMap: '../custom_dir/stuff/moon-nor-512-padded.gif'; starMask: '../custom_dir/stuff/padded-starry-sub-data-0.png'; starRas: '../custom_dir/stuff/padded-starry-sub-data-1.png'; starDecs: '../custom_dir/stuff/padded-starry-sub-data-2.png'; starMags: '../custom_dir/stuff/padded-starry-sub-data-3.png'; starColors: '../custom_dir/stuff/padded-starry-sub-data-4.png';" material="shader: sky;"></a-sky-forge>
</a-scene>
```

In addition to adding in all these custom directories (which isn't very fun), you can also change aspects of the time and location. The default location is San Francisco California, but you can change the location using the geo-coordinates attributes lat and long, like so...

**Let's go to tokyo!**
```html
<a-scene>
  <a-sky-forge geo-coordinate="lat: 35.68, long:139.69" material="shader: sky;"></a-sky-forge>
</a-scene>
```

If you do change the location, make sure to also change the time-offset from UTC time in the sky-time attributes, measured in hours.

```html
<a-scene>
  <a-sky-forge a-sky-time="utcOffset: 9;" geo-coordinate="lat: 35.68, long:139.69" material="shader: sky;"></a-sky-forge>
</a-scene>
```

Besides changing your location, you can also change the date and time...
One important caveat is that the time during the day is set in seconds via the *timeOffset* parameter.
There are 86400 seconds in a day, which should help you get to a specific time during any given day.

**Party like it's 1999! @_@**
```html
<a-scene>
  <a-sky-forge a-sky-time="month: 12, day: 31, year: 1999; timeOffset: 86390" material="shader: sky;"></a-sky-forge>
</a-scene>
```

Or more importantly, speed time up (for faster in-game days).

**Time goes 8 times as fast!**
```html
<a-scene>
  <a-sky-forge a-sky-time="timeMultiplier: 8;" material="shader: sky;"></a-sky-forge>
</a-scene>
```

**Or stop time (stars will still twinkle and stuff, but the sky elements won't move.)**
```html
<a-scene>
  <a-sky-forge a-sky-time="timeMultiplier: 0;" material="shader: sky;"></a-sky-forge>
</a-scene>
```

## Authors
* **David Evans / Dante83** - *Initial work*

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details