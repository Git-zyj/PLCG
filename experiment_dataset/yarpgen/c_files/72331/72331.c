/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= 14242;
    var_13 |= -14230;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, 14242));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_15 ^= -307351392513886945;
            var_16 = (arr_3 [i_1] [i_1 + 1] [i_1 + 1]);
        }
        var_17 = ((307351392513886945 ? (arr_2 [i_0]) : var_0));
        var_18 = ((!(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_19 = (arr_7 [i_0]);

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_20 -= 9221120237041090560;
                            arr_13 [i_3] [15] [i_0] = 8191;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_21 = 156;
                            var_22 += ((~((~(arr_14 [i_0] [1] [i_3] [14] [i_6])))));
                            var_23 *= (-32767 - 1);
                        }
                        var_24 |= (((arr_16 [i_0]) | (arr_1 [i_4 - 1])));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_19 [i_7] = ((-(arr_16 [i_7])));
        var_25 |= (((arr_9 [i_7] [i_7] [i_7]) ? 9428072243292727401 : ((min(((((arr_8 [i_7] [1] [i_7]) ? 29011 : 0))), var_3)))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_26 = (max(var_26, -8191));
        var_27 = (max(var_27, (((2347690129580895355 ? ((max((((arr_10 [i_8]) ? (arr_10 [i_8]) : 1)), (!var_9)))) : -9221120237041090549)))));
        arr_22 [i_8] = ((2450813257895559236 ? 843500584988415567 : 8323399874865281225));
    }
    #pragma endscop
}
