/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((((max(var_3, (arr_0 [i_0])))) ? (((max((arr_2 [i_0]), 18446744073709551615)) + (((((arr_3 [i_0] [i_0]) != (arr_2 [7]))))))) : var_14));
        var_20 = (!126);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = (((((max(82968953, 1)) >> (((arr_1 [i_1]) - 15868143408037734786)))) > var_14));
        var_22 = (arr_0 [i_1]);
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_23 = (min((arr_9 [i_2]), (min((((-(arr_9 [i_2])))), (arr_2 [i_2])))));
                var_24 = -1;
            }
        }
    }
    var_25 = ((((((var_9 ? 132 : 2047))) ? var_7 : (((var_2 ? 1 : var_8))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                {
                    var_26 = (arr_20 [i_4] [i_6 - 2] [i_6]);
                    var_27 = ((((((arr_6 [i_5]) ? (arr_0 [i_6 - 1]) : 132))) ? 1 : (((1 - var_5) ? 4294967295 : 1))));
                    arr_21 [i_6 - 2] [i_6] [i_5] [i_6] = (((arr_2 [i_4]) ? (((max((arr_11 [i_6] [i_6]), (arr_7 [i_4]))))) : ((-166 ? -var_9 : var_7))));
                }
            }
        }
    }
    #pragma endscop
}
