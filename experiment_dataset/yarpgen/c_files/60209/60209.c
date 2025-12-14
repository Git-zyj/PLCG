/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (min(var_15, (((((min((3440954748 / -31692), ((((-1 + 2147483647) << (((arr_0 [14]) - 2834176579)))))))) | (~var_14))))));
        var_16 = var_10;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_17 = (min(var_17, (((((var_0 ? var_4 : var_10)))))));
            var_18 ^= (((-var_3 ? (~var_7) : var_1)));
            var_19 *= (((((~(((-27 + 2147483647) << (264491134 - 264491134)))))) & -42));
            var_20 = (~var_1);
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_21 = (arr_10 [i_1] [i_3 + 3]);

            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_22 += (((((var_3 ? var_12 : 0))) % ((var_6 ? 198239396 : var_1))));
                var_23 = (min(var_23, var_3));
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_24 |= ((~(((((4096727899 ? var_6 : 5547573752388450677))) ? ((max(var_6, var_8))) : (arr_3 [5] [1])))));
                                var_25 += var_5;
                                var_26 = var_10;
                            }
                        }
                    }
                    var_27 *= ((((max(9, -1666))) || (arr_15 [i_1] [i_5] [21])));
                }
            }
        }
    }
    var_28 = (max(var_28, var_6));
    #pragma endscop
}
