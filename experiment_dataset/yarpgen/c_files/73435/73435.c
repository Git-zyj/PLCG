/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = 219;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_1] = ((var_8 ? -41 : 81));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_11 = -1823029126;
                                var_12 = var_6;
                                var_13 *= (104 >= 101);
                            }
                        }
                    }
                    var_14 = (max(var_14, (155 >= 107)));
                    var_15 = 149;
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((((9223372036854775807 ? (arr_19 [i_5 - 4] [i_7] [11] [i_5 - 4]) : 26199))) / ((((min(-26199, (arr_21 [i_6])))) ? ((var_3 ? -6052947325286375010 : 8046496200676838019)) : -29)))))));
                                var_17 += var_4;
                                var_18 = 0;
                            }
                        }
                    }
                    var_19 = (arr_20 [i_5 + 2] [i_5 - 3] [i_5 + 2]);
                }
            }
        }
        var_20 = ((((((min(168, var_8)) || (arr_19 [i_5] [i_5 - 2] [i_5 - 4] [i_5]))))));
    }
    var_21 = (min(var_21, ((((max((~2137285778), var_1))) || (((151 ? 1 : (max(163410198, var_0)))))))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            {
                var_22 += ((((min(162, (arr_28 [i_10] [i_11 + 3])))) == -1807690966));
                var_23 += (arr_29 [i_11 - 1] [i_11 - 1]);
                var_24 = (34849 <= 21387);
            }
        }
    }
    var_25 += (-(!var_4));
    #pragma endscop
}
