/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(52309, 19767));
    var_12 = 1;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_13 *= (arr_1 [8] [i_0 + 3]);
        var_14 += (((((1009280333 % (arr_0 [0])))) == (((max(4937, -28)) + ((((var_0 < (arr_2 [i_0] [8])))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = ((((((var_5 || -7696982455440262485) ? (max(var_10, 14)) : ((((-84 + 2147483647) << (((((arr_3 [i_1] [i_1]) + 70)) - 21)))))))) ? (((min((var_1 && 3607957424), 65523)))) : ((((32767 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))) & ((min(34, 46)))))));
        arr_5 [0] &= (min(((((!65522) && (!1)))), ((((!(arr_3 [4] [2])))))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] = ((-45 % (min(18446744073709551611, 2404))));
        var_16 = (max((min(13, var_10), (((25806 / (arr_9 [i_2])))))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_17 += (((((1 ? -20658 : 18288))) * (((arr_13 [2] [i_3]) & var_7))));
        var_18 = (max(var_18, (((+((((arr_11 [i_3 - 1]) >= var_3))))))));
        arr_14 [i_3] = (max(((((var_2 >= 19765) < ((min(137, 65535)))))), var_4));
    }
    var_19 = var_10;
    #pragma endscop
}
