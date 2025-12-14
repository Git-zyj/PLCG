/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [1] = var_1;
                    var_17 ^= (arr_0 [i_0] [13]);
                    arr_8 [1] [5] [i_2] [14] = (((max((arr_3 [i_0 - 1] [i_1]), (arr_3 [13] [i_0 - 1])))) >= (arr_2 [1]));
                    var_18 = (((((31405 ? (arr_1 [i_0 - 1]) : 0))) ? (arr_3 [i_0] [1]) : (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1])))));
                }
            }
        }
    }
    var_19 = (max(((((1 ? 1 : 1894734464)) + (((var_5 ? var_0 : var_0))))), var_10));
    var_20 = (var_6 - var_4);

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_21 = (min(var_21, (arr_1 [1])));
        arr_12 [1] [1] = ((~(arr_3 [12] [2])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_17 [2] = ((((min(((((arr_10 [4] [4]) ? (arr_5 [i_4] [i_4] [i_4] [1]) : var_8))), ((var_5 ? (arr_3 [i_4] [i_4]) : var_15))))) > (arr_13 [5])));
        arr_18 [i_4] = arr_10 [i_4] [i_4];
        var_22 *= ((+(((arr_1 [i_4]) * ((-(arr_0 [1] [1])))))));
    }
    #pragma endscop
}
