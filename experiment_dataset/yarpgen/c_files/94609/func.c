/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94609
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_12)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [8ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((((/* implicit */_Bool) -4537459695726275089LL)) ? (808035577993742752LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15017))))) >> (((arr_1 [i_0] [i_1]) - (6553162882220113287LL)))))));
                var_16 = arr_3 [i_0];
                var_17 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
                arr_6 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
            }
        } 
    } 
}
