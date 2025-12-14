/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87757
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
    var_10 *= ((/* implicit */short) (((~(var_4))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) var_9)) < (var_8))))))));
    var_11 -= ((unsigned int) var_1);
    var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((-7517632980023970142LL), (-7517632980023970142LL)))) ? (var_7) : (((((/* implicit */_Bool) var_5)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [(short)11] [i_1] [i_1] |= ((/* implicit */short) ((((int) ((((/* implicit */_Bool) -20LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_1]))))) ^ (24039524)));
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) (short)62)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (122065455U))))));
            }
        } 
    } 
    var_14 |= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (var_4) : (var_6)))) ? (((((/* implicit */_Bool) var_0)) ? (-7517632980023970142LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28425))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5))))) - (144115153716117504LL));
}
