/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86721
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
    var_16 += ((/* implicit */unsigned char) (_Bool)0);
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((var_5) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_19 &= ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)8176), (((/* implicit */unsigned short) arr_0 [i_1]))))) << ((((+(arr_3 [i_1]))) - (9259131956064271594ULL)))));
        var_20 = ((/* implicit */unsigned short) ((_Bool) (!(var_14))));
    }
    var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 4174166438731500810LL)) ? (16252928) : (((/* implicit */int) (_Bool)1))))));
}
