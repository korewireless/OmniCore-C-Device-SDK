# MQTT client example

This example uses the Omnicore Device SDK for Embedded C to connect a native Linux application to the [Omnicore Core MQTT bridge](https://docs.omnicore.cloud.korewireless.com/docs/Guides/Connect/MQTT%20Device).

## Getting started

Before you begin, generate a [public/private key pair](https://docs.omnicore.cloud.korewireless.com/docs/Guides/Connect/Managing%20Credentials/create-key-pairs), store the private key in the `examples/iot_core_mqtt_client/bin` directory, and name the key `ec_private.pem`.

1. Run `make` in the root directory of the repository.

2. From the root directory, generate the native example application.

```
cd examples/iot_core_mqtt_client \
make
```

3. Run the following commands, substituting in your device and project information.

<pre>
make \
cd bin \
./iot_core_mqtt_client -i <i><b>HOST_IP</b></i> -p <i><b>SUBSCRIPTION_ID</b></i> -d subscriptions/SUBSCRIPTION_ID/registries/REGISTRY_ID/devices/DEVICE_ID -t /devices/<i><b>DEVICE_ID</b></i>/state
</pre>
