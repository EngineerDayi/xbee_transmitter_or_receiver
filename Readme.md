---


---

<h1 id="xbee-transmitter-ve-receiver">Xbee Transmitter ve Receiver</h1>
<p>Bu repoda xbee nin alıcı yada verici olarak ayarlanması anlatıldı.</p>
<h2 id="xctu">XCTU</h2>
<p>Bu yazılım Digikey firması tarafından yapılan xbeelerin eşleşmesi için gereken arayüzdür. Bu link ile ulaşabilirsiniz <a href="https://www.digi.com/products/iot-platform/xctu">https://www.digi.com/products/iot-platform/xctu</a></p>
<h2 id="eşleştirme">Eşleştirme</h2>
<p>Cihazların eşleşebilmesi için herhangi bir cihazın "Radio Configuration " sayfasında bulunan "Networking &amp; Security " açılır pencerinde “SH” yani "Serial Number High " adresinin kopyalanıp eşleştirmek istediğimiz cihazın yine aynı açılır penceresinde bulunan "DH " yani "Destination Address High " kısmına yapıştırılması gerekir. Bu ayar aynı şekilde diğer cihaz içinde yapılır. Daha sonra aynı açılır pencerede "SL " yani “Serial Number Low” adresi kopyalanıp diğer cihazın aynı açılır pencerinde "DL " yani “Destination Address Low” kısmına yapıştırılır. Bu ayar diğer cihaz içinde yapılır. Son olarak "Networking &amp; Security " penceresinde "CE " yani "Coordinator Enable " kısmında bir cihaz “Coordinator” , diğer cihaz "End Device " seçilerek ayar bitirilir. En son kısımda ayarları "Write " butonunu kullanarak cihazların üzerine yazmayı unutmayın.</p>

