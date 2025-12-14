/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_7));
    var_20 = (max(var_20, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                var_21 = (max(var_21, var_14));
                                var_22 *= ((var_11 << (var_14 + 3223533169725641815)));
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_4 + 1] |= var_9;
                                var_23 += ((((((var_11 << var_11) % (var_5 - var_7)))) - (var_10 % var_16)));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_24 += (4294967295 <= 1);
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_1] |= var_14;
                                var_25 |= var_18;
                            }
                            var_26 ^= (var_15 - var_0);
                            var_27 *= var_2;
                        }
                    }
                }
                var_28 = (min(var_28, (var_1 ^ var_0)));
            }
        }
    }
    #pragma endscop
}
