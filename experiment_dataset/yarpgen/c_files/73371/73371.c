/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = ((min(((max(var_8, (arr_1 [i_0]))), (~var_3)))));
        arr_2 [i_0] = var_14;
        var_17 = max((arr_0 [i_0]), ((max(var_2, (((var_11 < (arr_1 [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_18 = (arr_4 [i_1]);
        arr_5 [i_1] = ((var_14 ? ((var_5 ? 9011847711880796520 : 17117)) : (((((arr_4 [i_1 + 1]) || -1436774188))))));
        var_19 = var_7;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_20 = (arr_1 [i_2]);
        arr_8 [0] = (min((((arr_4 [i_2]) ? ((var_11 ? (arr_1 [i_2]) : (arr_0 [5]))) : 0)), ((((arr_1 [i_2]) ? (!-1436774188) : 1436774188)))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_20 [i_5] [i_5] [0] [i_4] [0] [i_2] [i_5] = 0;
                            arr_21 [i_5] [1] [1] [i_5] = -1436774188;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_28 [i_2] = (arr_22 [2]);
                        arr_29 [i_2] [i_3] [i_7 + 1] [i_8] = arr_24 [i_2] [i_3 + 1] [i_7] [i_8];
                    }
                }
            }
        }
    }
    var_21 = var_7;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_36 [6] [11] = (max((max((((var_14 < (arr_33 [i_9])))), var_11)), (-var_0 || 876443383)));
                var_22 = (max(var_22, ((((3418523912 / -632956766) ? (arr_35 [i_9 + 3] [i_9 + 1]) : 17463991539625804919)))));
            }
        }
    }
    var_23 = ((~((-(var_1 == 31)))));
    #pragma endscop
}
