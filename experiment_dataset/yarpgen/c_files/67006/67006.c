/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((!(((~((var_1 ? var_6 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 60;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1691864469;
                            var_11 = (+((max((arr_8 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3 - 1]), (arr_8 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 2])))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_12 -= ((((max(((-6 ? (arr_3 [i_0]) : 14)), (((arr_7 [i_1] [8] [i_4]) ? (arr_6 [i_0]) : var_6))))) ? (!-60) : (max(((var_8 ? (arr_6 [i_0]) : -1339762471)), (((arr_1 [i_0]) ? 0 : 332992704))))));
                                var_13 ^= (((min((arr_13 [i_0] [i_0]), ((-(arr_2 [13] [13]))))) + (((arr_12 [i_0] [i_0] [i_0] [i_0] [4] [i_0]) ? 127 : -1740887481))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_14 = (+(((arr_3 [i_1]) ? 332992712 : (arr_13 [i_1] [i_5]))));
                                var_15 *= (-332992707 / 1740887480);
                            }
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((arr_13 [i_3 - 1] [i_3 - 1]) ? (arr_6 [i_2 + 3]) : (arr_6 [i_2 - 1]))));
                        }
                    }
                }
                var_16 = ((1740887480 ? 0 : ((17696 ? ((-1740887481 ? 1740887480 : -951237899)) : ((73 ? 58 : 576797103))))));
            }
        }
    }
    var_17 = (!-576797103);
    var_18 = 1740887480;
    #pragma endscop
}
