/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (var_8 == var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (((((((((arr_2 [i_0]) | (arr_4 [i_0] [i_1])))) ? 255 : ((min(var_9, var_10)))))) ? (min(3039642843, ((((arr_5 [18] [1] [i_2]) && (arr_6 [i_0])))))) : (((((arr_7 [i_2] [i_1] [i_1 + 2] [i_0]) ? -1047620595 : var_8))))));
                    arr_8 [i_2] [i_2] [i_1] = (max(((arr_0 [i_1] [12]), (arr_4 [i_1] [20]))));
                    arr_9 [i_1] [i_1] [i_1 + 2] [3] = 18037963014612090765;
                    var_20 = (((((+(((arr_6 [i_0]) ? (arr_2 [i_1]) : (arr_4 [i_0] [i_0])))))) ? (arr_7 [i_1] [i_1] [i_1] [i_1]) : (((((~3999126961587033941) == 252))))));
                    arr_10 [2] [i_1] [i_2] = ((((((arr_2 [i_2]) | (arr_2 [i_0])))) ? var_16 : (((arr_0 [i_0] [i_0]) ? var_5 : (arr_2 [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
