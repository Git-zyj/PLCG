/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 &= (arr_2 [i_0]);
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2] = (((arr_6 [i_1] [i_1]) & ((((((arr_5 [i_0] [6]) ? -1319605617 : (arr_9 [i_0] [i_1])))) ^ (arr_11 [i_1] [i_1] [i_1] [i_1])))));
                            var_15 = (min(((((((arr_9 [i_0] [i_0]) ? var_6 : 1)) + var_1))), ((~(min(4665985070659580263, 51641))))));
                            var_16 = (min((arr_7 [i_1] [i_1] [i_2]), ((min(var_2, 237)))));
                            var_17 = (((((arr_4 [i_1] [i_1]) ? 6202431283241526118 : (((-(arr_1 [i_1 + 1] [i_1 + 1])))))) - (!32767)));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_6;
    var_19 |= 53;
    var_20 = (((var_3 + 2345183303) + (356169276 - 64)));
    #pragma endscop
}
