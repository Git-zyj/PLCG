/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75900
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
    var_18 = ((/* implicit */int) 1509718255U);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) (-((~(3880346151U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) 3880346144U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3880346139U)))));
        var_20 -= ((/* implicit */_Bool) min((var_11), (max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_12))));
        arr_4 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)9268)) : (((/* implicit */int) var_16))))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (max((((/* implicit */long long int) arr_1 [i_1])), (arr_2 [i_1]))) : (((/* implicit */long long int) (~(var_17))))))));
    }
}
