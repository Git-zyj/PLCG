/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72911
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)59052))))), (min((var_2), (((/* implicit */unsigned int) var_7))))))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_11))))), (((var_4) - (((/* implicit */unsigned int) -431499134)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))), ((+(((/* implicit */int) (short)32767)))))) <= (max(((+(arr_3 [i_0] [i_1]))), (((/* implicit */int) (unsigned short)7936)))));
                arr_6 [i_0] = (~(arr_3 [i_0] [i_0]));
            }
        } 
    } 
}
