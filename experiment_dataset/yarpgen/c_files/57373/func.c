/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57373
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((_Bool) var_12)))))));
        var_17 -= ((/* implicit */unsigned char) (+(min((((/* implicit */int) var_4)), (arr_2 [i_0] [(_Bool)1])))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
    }
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_12)), ((((!(((/* implicit */_Bool) var_2)))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) 3034863382U))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) max((1345454813), (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65513))))) : (max((2945519042647664392LL), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
