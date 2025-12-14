/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min((max(var_10, (max(var_5, var_12)))), (((max(var_11, var_16)))));
    var_18 = var_3;
    var_19 += ((var_8 || ((max(var_3, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] = ((-5407924618245033672 ? ((((!(arr_0 [i_0 - 3]))))) : (arr_0 [i_1])));
                                var_20 = 1411187116133871865;
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (((arr_1 [i_0 - 3] [i_0 - 2]) ? -5407924618245033672 : (max((arr_1 [i_0 + 1] [i_0 - 3]), (arr_1 [i_0 - 3] [i_0 - 2])))))));
                arr_14 [i_0] [i_0] = ((~(((0 + (arr_10 [i_0 + 1] [i_0 - 1] [i_0] [15] [i_0 + 1] [15]))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_25 [19] [i_0] [i_0] [9] = ((max(var_13, var_13)));
                                arr_26 [9] [i_1] [i_0] [13] [i_7] = (max(var_10, (45215 > var_16)));
                                var_22 = (((((((-(arr_10 [i_0] [i_1] [i_5] [i_5] [i_5] [i_5])))) ? ((-2147483632 + (arr_12 [i_0] [i_0] [i_1] [i_0] [i_7] [i_1]))) : ((-(arr_5 [i_0]))))) - ((-(arr_8 [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
