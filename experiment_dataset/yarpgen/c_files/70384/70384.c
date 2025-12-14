/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (14 > 8128)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 |= -119;
        var_21 = (min(var_21, (arr_0 [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_8 [i_0] [i_2] [i_1 + 2] [i_0] = 32767;
                        var_22 = (((((3040914446 ? 1254052849 : -7739331062707263616))) ? 64 : (((arr_5 [i_3] [i_2] [i_1] [i_0]) ? var_5 : -119523575))));
                        var_23 = ((~((16476 ? (-9223372036854775807 - 1) : (arr_6 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])))));
                        var_24 |= (arr_3 [i_2] [i_2] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_11 [i_4] [2] [2] [8] |= ((((((arr_10 [i_1 - 1]) | (arr_3 [i_0] [7] [i_0 - 2])))) ? (arr_2 [i_2 - 2] [9] [i_0]) : (((((arr_2 [i_4] [i_0] [i_0]) && 16232504835645461359))))));
                        var_25 ^= (((~var_18) > (-7132506170133803446 || -119)));
                    }
                    arr_12 [i_1] [i_1] &= (((~74) ? (((arr_7 [i_2] [i_2 + 1] [i_0 - 1] [i_0 - 1]) ? (arr_3 [8] [8] [8]) : -1436375493)) : -110));
                    var_26 = (min(var_26, (((-(~8388604))))));
                }
            }
        }
    }
    var_27 = var_8;
    #pragma endscop
}
