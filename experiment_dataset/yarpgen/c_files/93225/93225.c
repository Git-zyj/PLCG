/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-1422283566 ? (~var_1) : 805306368)) + var_6));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 = 81;
        var_14 = ((((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : -356444852)))) > (((-197 || (arr_0 [i_0 - 1]))))));
        var_15 = -1526370287;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] [13] = ((~((-1772405785 ? -1772405786 : 1772405766))));
        var_16 = (~(arr_5 [i_1] [i_1]));
        var_17 = (((((arr_4 [i_1] [i_1]) / (arr_5 [i_1] [i_1]))) - 20));
        arr_7 [21] = (arr_5 [i_1] [i_1]);
        var_18 = (((-(arr_3 [i_1]))) / ((-(arr_4 [i_1] [i_1]))));
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_15 [i_2 - 4] [0] = min((min(33, (arr_5 [i_2] [i_3]))), -1772405803);
                var_19 = 126;
            }
        }
    }
    var_20 = 115;
    #pragma endscop
}
