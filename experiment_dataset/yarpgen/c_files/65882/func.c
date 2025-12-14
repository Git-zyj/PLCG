/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65882
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
    var_13 = ((/* implicit */long long int) max((((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (var_6))))))), (((/* implicit */unsigned long long int) var_7))));
    var_14 = ((/* implicit */unsigned char) (signed char)99);
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = var_11;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) + (((((/* implicit */int) (unsigned short)18627)) - (((/* implicit */int) (_Bool)0))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_1]), (arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (~(((long long int) arr_2 [0ULL]))))) : (var_8)));
            }
        } 
    } 
}
