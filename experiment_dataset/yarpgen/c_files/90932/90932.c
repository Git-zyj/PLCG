/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~0);
    var_12 = (max((3873878447 % var_4), (-127 - 1)));
    var_13 = (421088848 - 123);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = ((((~(arr_0 [i_0] [i_2]))) - 2147483647));
                    var_15 = (((0 & 4190208) % (max(164, 16932201462970082043))));
                    var_16 = (((((0 | (arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2])))) ? (arr_7 [i_1 + 2] [i_1 + 2]) : (arr_6 [i_1 + 3] [i_1] [i_1 + 3] [i_2])));
                    var_17 = ((370776393 ? ((1 ^ (arr_3 [i_2] [i_1 + 1] [i_0]))) : (12751 <= var_9)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_18 = (max(var_18, ((((((((max(var_6, var_0))) ? (4294967295 - var_0) : ((3873878432 << (var_1 - 7410773883506532809)))))) ? (var_4 | -53) : ((-1329759357 ? (arr_11 [i_3] [i_4] [i_5]) : (arr_9 [i_5]))))))));

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_19 = var_7;
                        var_20 = (((1 >> (14190 - 14184))));
                    }
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        arr_19 [i_4] [i_4] = ((84959863 ? (max(var_8, (arr_15 [i_4]))) : ((max((arr_11 [i_7 - 1] [i_5] [i_3]), (arr_11 [19] [i_4] [i_3]))))));
                        var_21 = ((min((arr_18 [i_7 - 2] [i_7 + 2] [i_7] [i_7 + 1]), -2147483647)));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_22 = (((((421088863 ? 663574359810653752 : 108))) ? var_1 : ((1753224275 - (((~(arr_14 [i_5] [i_5] [i_4] [i_3]))))))));
                        arr_24 [i_4] [i_8] = ((((((!(!var_5))))) > ((15728640 ? (arr_21 [i_3] [i_4] [i_5] [i_8]) : (max(var_10, 1820445598))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
