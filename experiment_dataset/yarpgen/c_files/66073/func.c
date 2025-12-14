/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66073
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
    var_12 = ((/* implicit */unsigned long long int) var_7);
    var_13 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-122)) ? (-1099197904) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((short) arr_4 [i_1]))) : (min((1099197903), (((/* implicit */int) (unsigned char)92)))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [3ULL] [i_1] [i_1])) : (((/* implicit */int) var_3)))) > (((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) (unsigned short)39602)) : (((/* implicit */int) var_4)))))))));
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11136213224643103851ULL)) ? (((/* implicit */int) arr_3 [(unsigned short)1] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_2 [i_1 + 1]))))) ? (var_9) : (((/* implicit */int) (unsigned char)184))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_1] [i_1]) ? ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)13018))))))) : (min((((/* implicit */int) (unsigned char)255)), (max((1099197903), (-406261228)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_3);
}
