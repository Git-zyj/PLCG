/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_5, var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 *= (max(((~(((arr_9 [i_0 - 2] [i_1] [i_2] [i_3]) ^ 65535)))), (!65535)));
                            var_14 = var_2;
                            arr_10 [i_3] [i_3] [i_3] [i_3 - 2] [i_3] [16] |= (min(((((min(var_10, 7303822090379455793))) ? ((11142921983330095827 ? 4095077577071156657 : -123)) : var_0)), ((max(var_11, var_4)))));
                        }
                    }
                }
                var_15 = (max(((7303822090379455794 ? (-2147483647 - 1) : ((max(146, 47965))))), (((arr_4 [i_0 - 2]) ? var_11 : (arr_8 [i_0] [i_0 - 2] [i_0 - 1] [i_0])))));
                var_16 *= ((3990002138 ? ((~(max(10687, (arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_1]))))) : 9223372036854775796));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((((max(((min(148, var_6))), ((var_7 % (arr_13 [i_0 + 3] [i_1] [i_4] [i_4])))))) ? (((arr_8 [21] [i_1] [i_4 + 1] [i_4 + 1]) / var_11)) : var_5)))));
                            var_18 -= ((!var_1) << ((((((((arr_7 [11] [11] [i_5]) * (arr_3 [i_1] [i_4 - 1] [15])))) ? (min((arr_14 [i_4] [i_4] [i_4] [i_0]), (arr_12 [i_0] [i_1] [i_4] [i_5]))) : ((max(var_0, var_1))))) + 2078488714)));
                            var_19 = (min(var_19, ((((var_4 | (arr_0 [i_5])))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = var_2;
    #pragma endscop
}
