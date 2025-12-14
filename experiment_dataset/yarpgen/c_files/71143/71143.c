/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 = (max(var_13, ((max(1, ((((((arr_7 [16] [i_1]) ? (arr_5 [i_0] [i_1] [i_2]) : var_8))) && (((arr_7 [13] [i_1]) || (arr_1 [i_0]))))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((1 ? 104 : 1425280011));
                }
                arr_9 [8] [i_1] [i_1 + 3] = (max((arr_5 [i_0] [i_0] [i_1]), ((max((-106 - 124), ((var_11 - (arr_7 [i_0] [i_0]))))))));
                arr_10 [i_1] [i_1] = (((arr_3 [i_0] [i_1]) != (arr_3 [i_1 + 1] [i_0])));
            }
        }
    }
    var_14 = (min(var_14, ((var_12 ? (min((1 + 0), 1)) : (max((var_3 >> var_1), var_2))))));
    var_15 = (((var_12 + 9223372036854775807) >> (var_6 - 2199049525)));
    #pragma endscop
}
