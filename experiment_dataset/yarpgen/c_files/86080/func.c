/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86080
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
    var_18 |= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) var_8)))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_14)))))))) ? (((var_13) | ((~(((/* implicit */int) var_14)))))) : (min((((((/* implicit */int) var_14)) << (((var_13) - (858207907))))), (((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = min(((signed char)-1), ((signed char)-10));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                var_19 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((unsigned int) (signed char)10)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), (var_3))))))) : (((/* implicit */int) ((signed char) var_3)))));
            }
        } 
    } 
}
