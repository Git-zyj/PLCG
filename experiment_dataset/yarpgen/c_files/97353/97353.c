/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (-2147483647 - 1);
                var_12 = 62275;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_13 = 24525;
                    var_14 = (max(var_14, 0));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [12] [i_3] [i_3] = 1;

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_15 = 49;
                        var_16 = 1;
                        var_17 = 2432382009;
                        var_18 = 495848841;
                        var_19 = 1918317836;
                    }
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        var_20 = 54;
                        var_21 = 2389423401;
                        arr_18 [i_5] [i_1] [3] = 4294967295;
                    }
                }
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
