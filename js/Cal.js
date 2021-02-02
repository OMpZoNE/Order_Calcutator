var ordCal = document.calculator;

function calByAA() { //AA制计算方式
    let avgPrice;
    let totalPeoNum = ordCal.totalPeoNum;
    let totalPrice = ordCal.totalPrice;
    avgPrice = totalPrice / totalPeoNum;
    document.write(avgPrice);
    //return avgPrice;
}

function calByScale(params) { //按照比例分摊的计算方式

}

function calculatingMethod(userChoice, calMethod) { //计算方式：AA制或是按照比例分摊；
    //calMethod[0]为AA制，calMethod[1]为比例分摊
    if (userChoice == calMethod[0]) { //若用户选择AA制
        calByAA(); //调用AA制计算方法
    } else { //否则按照比例分摊费用
        calByScale(); //调用比例分摊制计算方法
    }
}

class dish {
    constructor () {
        this.dishName = "菜品";
        this.originalPrice = null;
        this.discountedPrice = null;
    }
}

//根据用户输入的菜品数量来生成dish对象，显示”菜品名 原价 折后价“三项，菜品名和原价由客户输入，折后价由系统计算得出