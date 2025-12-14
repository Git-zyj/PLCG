/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [18] [13] = (max(((((arr_0 [i_0]) <= (min(8720769129319363927, 0))))), ((var_4 ? ((((!(arr_0 [i_0]))))) : (arr_0 [i_0 - 3])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0 + 2] = 0;
                    var_14 = (min((((arr_6 [i_0] [i_0] [i_0]) ? (((arr_1 [22]) ? var_3 : (arr_1 [9]))) : ((var_13 ? (arr_9 [i_2 + 2] [i_1] [19]) : (arr_8 [i_2]))))), -44253));
                    arr_11 [i_1] = var_8;
                }
            }
        }
        var_15 = (min(var_15, ((max(1, 44253)))));
    }
    var_16 = (((((16522248157391863828 ? var_13 : ((var_1 ? -32248 : var_12))))) ? var_3 : (((var_4 + var_13) ? var_6 : -var_11))));
    var_17 += var_4;
    var_18 = ((var_11 ? var_4 : var_12));
    var_19 |= var_11;
    #pragma endscop
}
