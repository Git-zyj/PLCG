/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 *= (max((((var_16 * var_14) % ((var_3 ? var_7 : var_17)))), var_1));
                                var_20 = (((max(((-957830238 ? var_10 : var_9)), (!120)))) ? ((((min(-88, 1))))) : (((~-2074520757) % (arr_1 [i_0 + 1]))));
                                var_21 -= (arr_7 [i_0] [i_1] [10] [i_4]);
                                var_22 = ((min(var_2, (arr_0 [i_0 - 1] [i_2 - 2]))));
                            }
                        }
                    }
                    var_23 = 1878549335;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((max((((-(1878549335 * var_1)))), ((~((127 ? (arr_0 [i_0 + 1] [i_1]) : 6862877804961700319)))))))));
                                var_25 = (arr_12 [i_0] [i_1] [i_2] [i_5] [i_0] [i_0] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_26 = ((-(((-9223372036854775807 - 1) ^ 3))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_27 = (!-4078752257451165538);
                            var_28 = (max((((var_16 | var_18) ? 24592 : (~var_3))), (!var_10)));
                        }
                    }
                }
                var_29 ^= 1;
                var_30 |= 1878549348;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_31 *= ((-127 / (((arr_33 [i_7] [i_11 + 1] [i_11]) ? var_15 : (arr_33 [i_7] [i_11 - 1] [i_11 - 1])))));
                            var_32 += (arr_2 [i_7]);
                            var_33 ^= (131071 ^ -25);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
