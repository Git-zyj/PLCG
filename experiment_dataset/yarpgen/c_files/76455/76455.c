/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 += ((~(max((min(var_5, var_10)), (~var_11)))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] = (-var_8 * (!var_11));
                    var_14 = (((~var_5) == (~var_6)));
                    var_15 -= var_10;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_16 = ((-(min(4161774336, 1))));
                    arr_13 [i_0] = (3579648298443069053 && 194);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_17 = (min((4161774355 < -60), (min((max(var_2, var_2)), (var_11 && var_8)))));
                                arr_20 [i_0] [i_0] [i_1] [i_3] [i_4] [i_5 - 1] = (max((max((min(44, 0)), var_6)), (((~((max(var_12, var_10))))))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_18 = max(var_12, ((var_4 ^ (~var_6))));
                    arr_24 [i_6] |= (max((((var_6 != (var_3 < var_10)))), (min((max(var_9, var_8)), (max(var_7, var_6))))));
                }
                var_19 = (min(((((((max(var_10, var_3)))) != (max(4, 6))))), (max(var_2, var_3))));
            }
        }
    }
    var_20 = var_11;
    var_21 = max((max((var_11 >> var_3), (18446744073709551611 + 1))), (max((var_4 && var_0), (min(var_7, var_7)))));
    #pragma endscop
}
