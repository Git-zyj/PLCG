/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 = (max((arr_2 [i_0] [i_0]), ((((arr_2 [i_0 + 1] [i_0]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))))));
        var_11 += (max(((8184299929881415664 ? -8184299929881415664 : 168635137)), ((max((arr_2 [i_0] [i_0 + 1]), var_8)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_12 = var_9;
                        var_13 = ((arr_3 [i_1] [i_1 + 2]) ? var_1 : (arr_3 [i_1] [i_1 + 2]));
                        var_14 = arr_5 [i_4] [i_3] [i_2];

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_15 *= var_0;
                            var_16 = ((var_9 <= (arr_6 [i_1 + 2])));
                            var_17 -= ((((var_0 ? (arr_6 [i_5]) : (arr_5 [i_1] [i_3] [i_4]))) > (arr_10 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_18 = (-8184299929881415664 ^ -8184299929881415665);
                            var_19 = var_6;
                            var_20 = var_2;
                            arr_18 [i_1] [i_2] = var_1;
                        }
                    }
                }
            }
        }
        var_21 = ((5404 ? 208 : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    var_22 = (min(var_4, var_8));
    var_23 = (max(var_23, ((max(4121194358, (max(5396, var_9)))))));
    #pragma endscop
}
