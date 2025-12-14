/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] = 0;
                                var_18 = ((((((arr_0 [i_3] [i_4]) ? (arr_0 [i_0] [i_2]) : var_10))) ? (~-1725836461) : ((((11956679303326563257 < (arr_4 [i_0] [i_1]))) ? var_8 : ((((4442788553321419621 == (arr_3 [24])))))))));
                                var_19 = (((max((arr_4 [i_0] [i_1]), (arr_1 [i_3]))) - (!-8815927616354806059)));
                                var_20 = (-3355249929159345472 ^ 1273801187);
                            }
                        }
                    }
                }
                var_21 = (max(-var_15, (((-(arr_5 [i_1] [i_1] [i_1] [i_1]))))));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_22 = ((((16193813532175759752 + (arr_4 [i_0] [i_1]))) ^ ((max(((((arr_6 [i_1] [i_0] [8] [i_1]) > 0))), (((arr_7 [i_1]) / 30)))))));
                    var_23 = (max(((-((-86 ? 0 : var_1)))), ((~(arr_8 [i_1] [i_1] [i_5] [i_5])))));
                    var_24 ^= ((60 ? (max((((3021166102 << (var_10 - 12214193106473539109)))), var_8)) : (((((((3021166108 ? (arr_14 [8] [i_1]) : 1024205370))) > var_5))))));
                    var_25 = 18446744073709551610;
                }
                arr_15 [i_1] [i_0] [i_1] = ((-(3021166109 != 72)));
                arr_16 [21] [i_1] = ((!(arr_7 [i_1])));
            }
        }
    }
    #pragma endscop
}
