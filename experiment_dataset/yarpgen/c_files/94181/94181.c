/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((118 ? (var_5 >= var_0) : ((var_1 ? var_6 : var_9)))) * ((-(-67 % -9)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((arr_2 [i_0 - 2]) ? ((((((arr_3 [i_0]) ? var_11 : var_6))) ? -62 : (arr_4 [i_1] [i_1 - 2]))) : (arr_3 [i_0 - 2])));
                arr_6 [i_1] = ((-(((((-13 ^ (arr_1 [i_0] [i_0])))) ? (arr_3 [i_1]) : (arr_4 [i_1] [i_1 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = ((-(((arr_7 [i_1] [i_1] [i_1 + 1]) ? (arr_7 [16] [i_1] [i_1 - 2]) : (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1])))));
                                arr_15 [i_1] [i_1] [i_2] [i_1] [i_4] [i_2] = var_11;
                                arr_16 [i_0 - 1] [i_1] [i_1] [i_3] [2] [i_4] = ((+((((arr_1 [i_1] [i_2]) < (arr_8 [i_0]))))));
                            }
                        }
                    }
                }
                arr_17 [i_1] [i_1] = ((((((var_13 ? var_6 : var_6)))) ? (((arr_2 [i_0 - 1]) % (arr_3 [i_0 - 1]))) : (((max((arr_5 [i_0] [11]), (arr_8 [i_0])))))));
            }
        }
    }
    var_16 = var_11;
    #pragma endscop
}
