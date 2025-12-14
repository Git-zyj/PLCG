/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((0 ? 1 : var_7)) - (var_8 + var_0)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_10 |= 547237900;
                                arr_13 [i_3] &= ((var_9 ^ (!1023)));
                            }
                        }
                    }
                }
                arr_14 [i_0] = ((var_8 >= ((var_8 ? var_8 : (max(var_2, var_5))))));
                arr_15 [i_0] [18] [i_0] = ((((max(var_6, var_8))) ? ((max(var_2, var_9))) : (((0 >> (((min(-127, 4933481925945117242)) + 140)))))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_11 = (max(var_11, var_4));
                                var_12 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (min(var_13, (((-var_4 ? var_9 : ((((((-127 - 1) && var_6))) >> (((var_7 * 547237900) - 365057021)))))))));
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                arr_28 [i_9] = var_2;
                arr_29 [i_9] = ((((((((-127 - 1) ? var_6 : var_7)) >> 1))) ? ((((((4226725514294563185 ? var_0 : var_5)) != ((min(1, var_7))))))) : (max(547237900, 38))));
            }
        }
    }
    #pragma endscop
}
