# Ford-Fulkerson-Algoritması-
Ford Fulkerson Algoritması Örneği
Ford-Fulkerson algoritması, maksimum akış problemlerinin çözümü için kullanılan bir algoritmadır. Algoritmanın çalışma zamanı, ağdaki kenar sayısı, maksimum akış değeri ve artan yol bulma yöntemi gibi faktörlere bağlıdır.

En kötü durumda, Ford-Fulkerson algoritması O(Ef) zaman karmaşıklığına sahiptir, burada E ağdaki kenar sayısını, f maksimum akış değerini ifade eder. Bu durumda, algoritmanın en kötü zaman karmaşıklığı, artan yol bulma yöntemi kullanılarak maksimum akışa ulaşılıncaya kadar tüm artan yolların aranması gerektiği zamanlarda gerçekleşir.

Ancak, algoritmanın en iyi durumda çalışma zamanı O(E^2 log(U/f)) olabilir, burada U ağdaki kenar kapasitelerinin maksimum değerini ifade eder. En iyi durumda, algoritma hızlı bir şekilde maksimum akışı bulabilir ve daha az artan yol araması gerektirebilir.

Ortalama durumda, Ford-Fulkerson algoritmasının çalışma zamanı, ağın yapısına ve maksimum akış değerine bağlı olarak değişir. Ancak, algoritmanın en kötü durumdaki zaman karmaşıklığına yakın bir değerde olması beklenir.

Sonuç olarak, Ford-Fulkerson algoritmasının zaman karmaşıklığı, ağ yapısına, maksimum akış değerine ve artan yol bulma yöntemine bağlıdır. En iyi durumda, algoritma hızlı bir şekilde maksimum akışı bulabilirken, en kötü durumda, tüm artan yolların aranması gerekebilir. Ortalama durumda, algoritmanın zaman karmaşıklığı en kötü duruma yakın bir değerde olması beklenir.
