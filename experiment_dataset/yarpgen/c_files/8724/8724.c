/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = (min((((var_15 ? var_14 : 1609909078))), var_11));
                    var_19 = (min(var_19, (((~(min(-1710921904, var_6)))))));
                    var_20 -= (min((((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) % -1710921913)), (((((arr_1 [i_1] [1]) ? (arr_6 [i_1]) : -1609909058))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = (((((((((arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 2] [1] [i_0 + 2]) & var_5))) ? ((var_0 % (arr_11 [i_0] [10] [10] [i_0] [i_0]))) : (((arr_3 [i_0] [i_2 - 2] [i_3]) ? 1609909078 : (arr_4 [i_0 + 1])))))) ? ((((arr_11 [10] [i_1] [i_3 + 2] [i_2 - 2] [i_4]) ? (((arr_12 [8] [8] [i_2] [i_2]) ? -30101 : (arr_2 [i_0]))) : 1710921903))) : (((5977344458987980808 * var_0) ? ((1609909091 ? var_13 : var_11)) : var_3))));
                                var_22 &= ((((!(arr_7 [i_2 + 3] [i_0 + 2]))) ? ((var_13 ? (((var_15 ? 1935656709 : var_10))) : ((var_12 ? 1710921904 : (arr_9 [i_0 + 2] [i_0 + 2] [i_2 + 3] [i_3]))))) : ((max(-1935656729, 4294967292)))));
                                var_23 = (min(var_23, ((((var_4 * var_3) >= (arr_11 [i_2 - 1] [i_1] [i_3 + 2] [i_3 + 2] [i_3 + 2]))))));
                                var_24 = (max((arr_2 [i_3]), (((((11114 ? 0 : -1935656721))) ? ((-11115 ? 11125 : var_13)) : (arr_10 [i_3 + 2] [i_3 - 2] [i_3 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_10;
    var_26 = -23514;
    var_27 = (var_6 && 22);
    #pragma endscop
}
