/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 336321543;
        arr_3 [12] [i_0] &= 10960670;
        var_11 = 0;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = ((3178166826180729242 ? 4294967281 : -494380211));
                    var_13 = (((((44519 ? 44507 : 1982811645))) ? (((((131071 ? 0 : 1))) ? 32756 : 44526)) : 6046));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_12 [i_3] = (-127 - 1);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_14 -= 0;
                    var_15 = (1060822159 ? -610444909 : 206);
                }
            }
        }
        arr_18 [i_3] = ((131071 ? 21016 : -118));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            {
                arr_23 [i_7] [i_7 + 2] [3] = 8089995666233102746;
                /* LoopNest 3 */
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_16 += 3076740525;
                                var_17 = -118;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 610444908;
    #pragma endscop
}
