/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (((min(var_11, ((0 ? -15729 : var_4)))) ^ (((max((arr_5 [i_1 + 1] [i_1 - 3]), (arr_2 [i_0])))))));
                var_13 *= (arr_4 [i_0] [20] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = max(11, (-2147483647 - 1));
                            arr_14 [i_1] [i_2] [i_2] = ((((max(((min((-127 - 1), 0))), (min(var_0, -29247))))) ? 91 : (max(var_8, var_9))));
                            arr_15 [i_0] [i_0] [i_2] [i_2] = (min(var_1, 4094));
                            var_15 *= ((-(max((14836 != 2097150), (arr_7 [i_1 + 1] [i_1 - 1])))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_16 = var_9;
                    arr_19 [i_4] [1] [i_4] = 20;
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_5] [i_1] [i_1] [i_5] = (arr_2 [i_1 - 4]);
                    var_17 *= 32752;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_18 = var_1;
                    arr_26 [i_0] [i_1] [i_6] = (arr_20 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 3]);
                    var_19 = (arr_7 [i_0] [i_0]);
                    var_20 = var_3;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_21 = ((255 ? 592945934 : 4442968116515948061));
                                arr_34 [i_9] [0] [0] [i_9] [i_9] [i_9] = (((arr_11 [i_0] [i_0]) && var_8));
                            }
                        }
                    }
                    var_22 = (((43807 % 7) ? 3754631869 : var_6));
                    var_23 ^= ((-9223372036854775807 - 1) != -125);
                    var_24 = (max(var_24, (((!(arr_4 [i_1 - 2] [10] [i_7]))))));
                }
                var_25 = (max(var_25, ((max(((3670109331 * (arr_0 [i_1 - 2]))), ((max(-43, 225))))))));
            }
        }
    }
    var_26 ^= var_0;
    #pragma endscop
}
