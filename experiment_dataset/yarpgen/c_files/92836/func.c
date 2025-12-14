/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92836
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (-4798869417561818141LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        var_11 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0] [7]))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1 - 2] [i_1] &= ((/* implicit */_Bool) arr_3 [i_1]);
        var_12 = ((/* implicit */int) (-((-(1585280661U)))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (var_6)));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_7))));
        arr_8 [i_2] [i_2] = ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (max(((~(arr_7 [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((signed char) var_7))))) : (((/* implicit */unsigned long long int) (~(4798869417561818140LL)))));
    }
}
