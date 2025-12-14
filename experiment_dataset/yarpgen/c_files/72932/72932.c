/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((((-9774 ? 1 : var_17))) && 0)), 1));
    var_19 = ((((1 ? -5 : var_17))));
    var_20 = var_13;
    var_21 = ((var_5 > (max(var_11, (!var_1)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [8] [1] = ((-(((arr_3 [i_1 + 1] [i_1 + 1]) % (arr_3 [i_1 - 1] [i_1 - 1])))));
                    arr_9 [i_2] = ((~(arr_7 [i_0])));
                    arr_10 [i_0] [i_2] = (((arr_7 [i_0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((((arr_6 [i_2] [i_1] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_7 [i_0])))))));
                }
            }
        }
        arr_11 [10] = (arr_1 [i_0]);
    }
    #pragma endscop
}
