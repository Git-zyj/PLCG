/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91658
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_17) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16))))))) % (var_5))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 &= ((/* implicit */int) ((max((((/* implicit */long long int) min((var_11), (arr_1 [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_2 [(unsigned short)14]))))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_17);
        arr_4 [i_0] = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0])))) && (((/* implicit */_Bool) 8078785096280216603ULL))))));
        arr_5 [i_0] [14] &= ((/* implicit */unsigned short) var_7);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (1919564713U)));
        var_22 &= ((/* implicit */short) (-(arr_9 [i_1])));
        var_23 = ((/* implicit */unsigned short) ((((arr_6 [i_1] [i_1]) | (((/* implicit */int) (_Bool)1)))) ^ ((+(((/* implicit */int) (unsigned short)65099))))));
    }
}
