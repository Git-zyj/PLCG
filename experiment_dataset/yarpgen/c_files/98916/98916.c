/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(((var_15 ? var_13 : var_5)), ((min(var_10, var_1)))))) ? ((((min(var_11, var_1))) ? (((min(var_1, var_8)))) : ((749309102 ? var_11 : var_0)))) : (max((max(var_7, var_11)), ((max(var_13, 3545658179)))))));
    var_18 = (((((((min(var_12, 749309102))) ? ((max(var_8, var_6))) : ((var_1 ? var_10 : var_3))))) ? (((((var_7 ? var_15 : var_11))) ? ((max(749309102, 258871089))) : ((-1 ? -16173 : var_0)))) : (min(((min(749309102, var_10))), ((var_9 ? 3618149167464930011 : var_16))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = min((((((var_5 ? var_3 : (arr_7 [i_2] [i_1] [i_0])))) ? (max(3545658214, 8836709758108285944)) : (((-1 ? var_1 : 749309102))))), ((((((3545658194 ? (arr_8 [i_0 - 2] [0] [i_2 - 3] [i_2 - 3]) : 1))) ? (((arr_5 [i_1] [i_1] [1]) ? 1 : 8)) : ((var_13 ? -23 : var_14))))));
                    arr_9 [3] [i_1] [i_2] = ((((min(((((arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_1]) : -32))), ((var_6 ? var_16 : var_6))))) ? ((max(((var_1 ? (arr_7 [i_1] [i_0] [i_2]) : (arr_8 [i_2] [i_2 - 1] [i_1] [i_0]))), ((min(var_8, -1)))))) : (min(((var_1 ? var_16 : 749309102)), ((min(-16173, 1)))))));
                    arr_10 [i_0] [12] &= (min(((min(1, ((-27028 ? 0 : 1510621428))))), (min((((arr_0 [i_1]) ? var_9 : 2639018975696369029)), ((((arr_6 [i_0 - 2] [i_2 + 2] [i_0 - 2] [i_0 - 2]) ? var_14 : var_8)))))));
                }
            }
        }
    }
    var_20 ^= max(((((min(var_14, var_2))) ? (((var_16 ? -24 : var_7))) : (min(var_9, var_8)))), (((((var_1 ? 749309093 : 18))) ? ((4140230063 ? var_2 : var_9)) : ((max(var_13, 1))))));
    #pragma endscop
}
