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