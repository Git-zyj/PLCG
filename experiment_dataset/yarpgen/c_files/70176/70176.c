/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((((((((var_2 ? (arr_0 [i_0]) : 76))) ? ((~(arr_0 [i_0]))) : (((arr_4 [i_0] [i_1]) ? 85 : var_10))))) ? (((((4294967295 ? var_10 : 6250477106293579139))) ? ((var_8 ? 76 : (arr_1 [4] [i_1]))) : (((var_14 ? var_10 : var_1))))) : ((((~-1417504500) ? -6250477106293579134 : (((18446744073709551615 ? 0 : 56))))))));
                var_18 = (+(((((7626 ? (arr_6 [i_0] [i_1]) : var_8))) ? -4472679444289892405 : -48)));
                var_19 = ((((((38 ? 1417504500 : 3637999533)))) ? (((~var_7) ? (((1 ? var_15 : -67))) : ((-34 ? (arr_2 [i_1]) : (arr_1 [i_1] [i_0]))))) : ((((!3236) ? (((arr_1 [i_0] [i_0]) ? var_9 : (arr_0 [i_0]))) : (((arr_6 [i_1] [i_0]) ? (arr_4 [i_0] [i_0]) : -1417504500)))))));
            }
        }
    }
    var_20 = (max(var_20, ((~(((((var_5 ? var_8 : var_5))) ? (~var_4) : ((7116475715528579217 ? 5674974466922761779 : 3006260861))))))));
    #pragma endscop
}
