/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5655
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
    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_2), (var_12)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)8508)) : (((/* implicit */int) (short)-15082))))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_0)) & (((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
    var_16 = ((/* implicit */short) min(((+(((/* implicit */int) var_11)))), (min((((/* implicit */int) ((((/* implicit */int) (short)-3670)) > (((/* implicit */int) (short)-8512))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (short)-8512))))) & (((/* implicit */int) ((short) arr_0 [i_0]))))) ^ (((/* implicit */int) arr_0 [i_1]))));
                var_18 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)39435)) : (((/* implicit */int) arr_0 [i_0]))))))), (min((6520736333396999723ULL), (1614503882962154428ULL)))));
                var_19 = ((unsigned short) arr_0 [i_0]);
            }
        } 
    } 
}
