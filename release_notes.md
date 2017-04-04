# Release Notes

--------------------------------------------------------------------------------

# Release v0.10.0-rc1

## Brief

**Breaking Changes!**

Support for ESP23 by not assuming any serial ports.

## Details

Introducing NexHardware class as wrapper to main functions such as `nexLoop` and `nexInit`, etc.

```
NexHardware::NexHardware(Stream* hw, Stream* dbSerial = nullptr);
```

Where `hw` is the object of the Nextion serial port and `dbSerial` is stream used for debugging. By default, debugging is disabled.

Every component constructor now should accept pointer to NexHardware instance as the first parameter.

```
// ..

NexHardware nextion(&Serial1, &Serial);
NexButton btn(&nextion, 0, 1, "b0");

// ...
```

# Release v0.9.0

  - version: v0.9.0
  - base: v0.7.0

## Brief


Support all components in Nextion Editor v0.38.

## Details

Added APIs of new attrubutes and components supported by Nextion Editor v0.38.


# Release v0.7.0

  - version: v0.7.0
  - base: no base version
  - author: Wu Pengfei <pengfei.wu@itead.cc>
  - date: 8/20/2015 13:17:20

## Brief

Support all components in Nextion Editor v0.26.

## Details

First release.


--------------------------------------------------------------------------------

# The End!

--------------------------------------------------------------------------------
