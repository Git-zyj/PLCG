/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_4));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_14 = (min(var_14, (arr_8 [i_0] [0] [2] [i_2])));
                    var_15 = ((~(min(-8471466687975345426, (arr_6 [1])))));
                    var_16 = (min(var_16, (((~(arr_6 [i_2]))))));
                    var_17 = (max(var_17, (((~((~(arr_8 [i_2] [6] [6] [1]))))))));
                    var_18 ^= (((arr_6 [i_0 - 4]) ? (((((var_4 ? (arr_9 [i_2]) : (arr_1 [10]))) < 1))) : (((((max(var_1, var_12))) || ((((arr_5 [1]) ? (arr_9 [6]) : var_1))))))));
                }
            }
        }
    }
    var_19 *= var_7;
    var_20 ^= ((((((max(var_1, var_1)) ? (!var_3) : var_11))) && ((((510689590001784595 && -8471466687975345426) ? (!7) : (!-8471466687975345405))))));
    #pragma endscop
}
