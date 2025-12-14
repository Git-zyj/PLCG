/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = arr_0 [i_0] [i_0];
                arr_7 [i_0] [i_1] [i_0] = (var_1 <= (max(((var_3 ? var_9 : var_9)), ((max(var_1, var_2))))));
                var_16 = (max((arr_2 [i_0]), (max(((((arr_0 [i_0] [i_1]) << (((arr_4 [i_0]) + 545293995))))), (((arr_3 [i_0]) ? 1 : var_12))))));
                var_17 &= (min((((arr_2 [i_1]) + (((arr_0 [i_1] [i_1]) ? var_2 : (arr_2 [i_1]))))), var_10));
            }
        }
    }
    var_18 += var_7;
    var_19 = 25;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] = 917102832;
                var_20 ^= (((6945503890897873875 ^ 22) & ((((((arr_9 [i_2] [i_2]) | (arr_8 [i_3])))) ? (arr_9 [i_2 - 1] [i_2 - 1]) : (arr_10 [i_2] [i_2])))));
                var_21 = (((((0 & (((var_11 ? (arr_12 [i_2]) : var_10)))))) || (min((!0), (((arr_12 [i_2 + 1]) && (arr_8 [i_2])))))));
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
