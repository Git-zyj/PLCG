/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (~var_3);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(var_17, ((min(83, (arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = (~2147483638);
        var_18 = (((((var_9 ? (arr_3 [i_0]) : (arr_0 [i_0] [i_0])))) ? ((-2147483639 ? (arr_0 [i_0] [i_0]) : 184)) : 172));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_19 = (((~(arr_6 [i_1] [i_1 - 2]))) % var_2);

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 = ((~(arr_8 [i_1 - 2])));
            arr_12 [i_1 + 3] [i_2] = 62;
        }
        var_21 = ((93 ? ((((arr_7 [i_1 - 4]) ? 16532 : (arr_7 [i_1 - 4])))) : ((36023 ? 7153661981747930694 : 180))));
        var_22 = 1434683336367227210;
        var_23 *= ((~(((!(arr_11 [i_1 - 4] [i_1 + 1]))))));
    }
    #pragma endscop
}
