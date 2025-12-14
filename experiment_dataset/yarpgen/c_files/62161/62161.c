/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(((43332 ? ((min(46824, 11928))) : 22253)), var_10));
        var_12 = ((22234 ? 12377 : 56543));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = (min(((max(var_10, (arr_0 [i_1])))), (22252 + var_9)));
        arr_7 [i_1] = ((46824 ? 22253 : 22242));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_14 = ((var_6 > (45 == 43301)));
                        var_15 = (min(((~((var_0 ? var_7 : var_0)))), (max(var_9, ((43301 ? 43302 : 43087))))));
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_19 [7] = -var_6;
        var_16 = var_10;
        var_17 = -var_1;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_18 = (((arr_23 [i_6] [8]) % (arr_20 [i_8])));
                            var_19 = 46824;
                            arr_29 [i_7] = min((arr_25 [i_9]), (max(8971, 47925)));
                            var_20 = (arr_2 [i_9]);
                            arr_30 [i_6] [0] [i_8] [i_9] = 42763;
                        }
                    }
                }
                var_21 = 10420;
            }
        }
    }
    var_22 = ((var_2 ? 59790 : (max(var_2, (~var_9)))));
    #pragma endscop
}
