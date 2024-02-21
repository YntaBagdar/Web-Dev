export interface Product {
  id: number;
  name: string;
  price: number;
  description: string;
}

export const products = [
  {
    id: 1,
    name: 'Детское пюре Агуша Яблоко-клубника-малина 90 г',
    price: 299,
    description: 'Теперь пюре можно брать с собой на прогулку или на отдых, чтобы перекусить в любой момент. Малышу надо всего лишь надавливать на пакетик и кушать пюре самостоятельно, не проливая на себя ни капельки. Кроме того, тропические плоды являются источником кальция, калия, железа и фосфора.'
  },
  {
    id: 2,
    name: 'Детское пюре ФрутоНяня Яблоко-банан-творог 6 мес+ 90 г',
    price: 285,
    description: 'ФрутоНяня пюре яблочно-банановое с творогом для питания детей раннего возраста. Фруктовое пюре в мягкой упаковке ФрутоНяня - это вкусный и полезный перекус, который удобно брать с собой, а яркая мягкая упаковка привлечет внимание Вашего малыша и позволит ему есть самостоятельно. Удобно использовать на прогулке, в путешествии или в гостях. Малыш сможет есть сам без ложечки под присмотром взрослых. Без сахара и крахмала.'
  },
  {
    id: 3,
    name: 'Детское пюре ФрутоНяня Яблоко-Банан-Клубника 90 г',
    price: 285,
    description: 'Пюре упаковано в удобную для прогулки мягкую упаковку. Вкусный и нежный десерт богат витаминами и минеральными солями. Содержит органические кислоты и клетчатку, благоприятно воздействующую на работу кишечника. Пектин, содержащийся в яблоках, положительно влияет на деятельность желудочно-кишечного тракта, способствуя процессу пищеварения. Железо, которое содержится в яблоке необходимо для профилактики анемии.'
  },
  {
    id: 4,
    name: 'Детское пюре ФрутоНяня Яблоко-малина-творог 90 г',
    price: 279,
    description: 'ФрутоНяня пюре фруктовое яблоко-малина с творогом для питания детей раннего возраста. Фруктовое пюре с натуральным творогом ФрутоНяня разработано специально для того, чтобы разнообразить рацион вашего малыша. В нём сочетается вкус отборных спелых ягод, фруктов и польза натурального творога, необходимого для гармоничного роста и развития малыша.'
  },
  {
    id: 5,
    name: 'Детское пюре Агуша Яблоко-малина-шиповник 90 г',
    price: 299,
    description: 'Пюре Агуша фруктово-ягодное Яблоко-Малина-Шиповник для детей с 6 месяцев. Пастеризованный продукт в удобной мягкой упаковке. Теперь пюре можно брать с собой на прогулку или на отдых, чтобы перекусить в любой момент. Малышу надо всего лишь надавливать на пакетик и кушать пюре самостоятельно, не проливая на себя ни капельки. Яблоко - источник фруктовых кислот, железа, витамина С. Пектины и фруктовые кислоты в яблоке мягко стимулируют деятельность кишечника. Сочетание витамина С и железа - прекрасная профилактика анемии. Ягоды малины содержат фолиевую кислоту, витамин В6, медь, магний и органические кислоты, необходимые для гармоничного роста и развития ребенка. Фитонциды, содержащиеся в малине, оказывают уничтожающее действие для различных спор грибков и стафилококков. Сок шиповника полезен для нормальной деятельности почек, печени, желудка и желудочно-кишечного тракта, выводит шлаки, нормализует кровообращение, повышает сопротивляемость организма при инфекционных заболеваниях, способствует росту, повышает иммунитет, активизирует обменные процессы в организме. Особенности: 100% натурально, без крахмала, без добавления сахара.'
  },

  {
    id: 6,
    name: 'Детское пюре Агуша Яблоко-ежевика-малина 90 г',
    price: 299,
    description: 'Пастеризованный продукт в удобной мягкой упаковке. Теперь пюре можно брать с собой на прогулку или на отдых, чтобы перекусить в любой момент. Малышу надо всего лишь надавливать на пакетик и кушать пюре самостоятельно, не проливая на себя ни капельки. Яблоко - источник фруктовых кислот, железа, витамина С. Ягоды малины содержат фолиевую кислоту, витамин В6, медь, магний и органические кислоты. Ежевика содержит жирорастворимые витамины (A, бета-каротин, E и K), водорастворимые витамины (C, B1, B2, B3 (PP), B4, B5, B6 и B9), а также макро- и микроэлементы (минералы). Особенности: без сахара и крахмала, без консервантов, красителей, ароматизаторов и ГМО.'
  },
  {
    id: 7,
    name: 'Детское пюре ФрутоНяня Говядина-гречка 100 г',
    price: 487,
    description: 'ФрутоНяня пюре из говядины с гречкой для питания детей раннего возраста. Стерилизованное. Пюреобразное. Консервы мясорастительные.'
  },

  {
    id: 8,
    name: 'Детское пюре Gerber овощное Только цветная капуста первая ступень 80 г',
    price: 586,
    description: 'Без добавления крахмала, соли и сахара. Изготовлено без использования генетически модифицированных ингредиентов, искусственных консервантов, красителей и ароматизаторов.'
  },
  {
    id: 9,
    name: 'Детские влажные салфетки Yokosun Детские Eco 100 шт',
    price: 959,
    description: 'Детские влажные салфетки YokoSun Eco специально разработаны для нежного очищения кожи малыша и одновременного эффективного ухода. Подходят для чувствительной кожи новорожденных.Делают ежедневную гигиену в любых условиях значительно комфортнее. Незаменимы дома, при смене подгузника, на прогулке, в поликлинике и путешествиях.'
  },

  {
    id: 10,
    name: 'Детские влажные салфетки Yokosun Extra Soft 120 шт',
    price: 1424,
    description: 'Влажные салфетки YokoSun 120 шт. Специально разработаны для нежного очищения кожи малыша и одновременного эффективного ухода. Подходят для чувствительной кожи новорожденных. Делают ежедневную гигиену в любых условиях значительно комфортнее. Незаменимы дома, при смене подгузника, на прогулке, в поликлинике и путешествиях.'
  }
  


];


/*
Copyright Google LLC. All Rights Reserved.
Use of this source code is governed by an MIT-style license that
can be found in the LICENSE file at https://angular.io/license
*/