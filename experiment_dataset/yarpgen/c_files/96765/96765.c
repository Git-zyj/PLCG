/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((((var_6 >> var_0) * (max(1342104276457725995, 4340683933424758621))))) ? var_1 : ((~((var_6 ? var_10 : var_3)))))))));
    var_12 ^= var_4;
    var_13 = var_10;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = ((-1 - (min((arr_1 [i_0 + 2] [i_0 + 1]), (arr_1 [i_0 + 2] [i_0 + 2])))));
        arr_4 [i_0] [i_0] = (((((((min((arr_1 [i_0] [i_0 - 1]), (arr_0 [i_0])))) ? (max((arr_0 [i_0 + 2]), 33352)) : ((var_5 >> (14382703324664401142 - 14382703324664401120)))))) ? ((((!(((var_0 - (arr_1 [i_0 + 1] [i_0 + 2])))))))) : (max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_2 [i_0])))));
        arr_5 [i_0] = (min((arr_2 [i_0]), (arr_0 [i_0 + 1])));
        var_14 = -7031;
    }
    var_15 += ((var_0 >> (-102 + 145)));
    #pragma endscop
}
