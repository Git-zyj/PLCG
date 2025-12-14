/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((4092 ? 1424308809 : ((max(-var_3, -118)))));
    var_21 = ((max(2870658486, -29627)));
    var_22 = (((((4091 ? 4104 : 1424308810) / (((224 ? 2146959360 : -4096)))))));
    var_23 = ((7706032901130578123 << (((((~var_9) + 892061986)) - 4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((((((arr_8 [i_2]) ? (arr_11 [i_1] [i_2] [i_3 + 2] [i_4]) : 72))) / (((arr_11 [i_1 + 1] [i_1 + 1] [8] [i_3 + 2]) ? 744190307 : (var_8 * var_10)))));
                                arr_15 [3] [i_1] [1] [i_1] [i_4] [i_1] [i_3] = (arr_10 [i_0] [i_1 + 2]);
                                arr_16 [i_0] [6] [i_2] [6] [i_0] = (!5950139131540507183);
                            }
                        }
                    }
                    arr_17 [5] [i_1] [i_2] = ((~((max((!-703006026), -66)))));
                    arr_18 [8] [8] [i_0] = ((~((min(-66, (arr_2 [i_1 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
