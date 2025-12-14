/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = (0 && -2302);
                            var_13 = (((-32767 - 1) + (arr_0 [i_0 + 2])));
                            var_14 = ((2 ? 241 : 10));
                            var_15 = 4294967295;
                        }
                    }
                }
                arr_9 [i_0] = 4294967277;
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_16 = ((4294967285 ? var_2 : (arr_5 [i_4] [i_4] [i_4] [i_4])));
        var_17 -= (((arr_6 [i_4] [5] [i_4] [i_4]) ? (arr_8 [i_4]) : 188));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = (118 / -8235290369673488524);
        var_18 -= (~-1);
        arr_17 [i_5] = var_5;
        arr_18 [i_5] [9] = (!1523606565);
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_19 = (min(var_19, -32));
        arr_21 [i_6] [i_6] &= (min(((54526 ^ (arr_10 [i_6]))), -115));
        var_20 -= (1 >= 142);
        var_21 &= -123;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_22 = var_1;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    {
                        var_23 &= ((~((~(arr_14 [i_10] [i_7])))));
                        var_24 -= (18446744073709551615 / 4607405758063411669);
                    }
                }
            }
        }
    }
    var_25 -= var_5;
    #pragma endscop
}
