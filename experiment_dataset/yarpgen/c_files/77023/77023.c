/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 20756;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((((33433 - (arr_3 [i_1 + 1] [12]))) >> 0));
                var_18 *= ((!((min((arr_4 [i_1 - 1] [i_1 + 1]), (arr_4 [i_1 + 2] [i_1 + 2]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (min(-var_7, ((~((min(var_2, var_1)))))));
                            arr_11 [i_0] [i_0] [i_3] = (min(var_10, ((-(max(1613948719, 27021597764222976))))));
                            var_20 = ((((max(65535, (arr_1 [i_0])))) ? -8568692603062775538 : var_7));
                            var_21 &= arr_7 [i_1 - 1];
                            var_22 = var_4;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_5] = (max(((((var_2 ? 287732051 : -27456)))), 18446744073709551604));
                            var_23 -= (min(1688849860263936, ((~(((arr_13 [i_0] [i_0] [i_4]) << (var_13 - 116)))))));
                            var_24 = ((!(arr_15 [i_4])));
                            var_25 -= (arr_2 [i_1]);
                            arr_18 [i_1] = ((((var_1 <= ((var_14 ? (arr_6 [i_0]) : var_5)))) ? (arr_2 [i_4]) : (arr_9 [i_0] [i_1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((((min(var_9, var_14))) == var_4));
    #pragma endscop
}
