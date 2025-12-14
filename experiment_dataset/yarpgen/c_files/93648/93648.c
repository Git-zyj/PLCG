/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 ^= (min(3681787321, (arr_0 [i_0])));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((((min(10511688524834445983, (arr_0 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_2]))) : (max(255, (arr_0 [i_0])))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_2] [i_0] [i_4] = (((arr_8 [i_2] [i_0]) ? (arr_0 [i_2]) : 4419792405630656493));
                            var_12 = (((arr_6 [i_0] [i_3] [12] [i_3]) ? -2744728716938613395 : 8191));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_13 = (max(var_13, ((((arr_6 [i_5 + 1] [i_1] [15] [i_3]) ? 8196 : (arr_5 [i_5] [i_1] [i_1]))))));
                            var_14 ^= (arr_1 [i_0]);
                        }
                        arr_18 [i_0] [i_1] = (arr_5 [i_0] [i_1] [i_2]);
                        var_15 = (arr_4 [i_0] [i_0] [i_2] [i_3]);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_16 = (min(var_16, ((min(((min((arr_8 [i_1] [i_1]), (arr_8 [i_0] [i_1])))), (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_1] [i_1] [i_6] [i_6] [i_2]) : (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                        var_17 *= (arr_17 [i_6] [i_1] [i_6] [i_6]);
                        var_18 = (min(-8212, (arr_17 [9] [1] [i_0] [1])));
                        var_19 += 8194;
                        var_20 = (max((max((((arr_20 [i_0] [1] [i_2] [i_6]) ? 47 : (arr_20 [i_0] [i_0] [i_0] [i_0]))), (arr_2 [i_0] [i_6]))), (((((max(8185, -837340937))) ? 3269 : (arr_19 [i_6] [i_6] [2] [i_1] [i_0] [i_0]))))));
                    }
                }
            }
        }
    }
    var_21 += var_8;
    #pragma endscop
}
