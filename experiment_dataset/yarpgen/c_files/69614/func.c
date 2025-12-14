/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69614
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_10 += ((/* implicit */long long int) min((arr_1 [i_0] [1LL]), ((unsigned short)65302)));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((unsigned short) (signed char)-1))) : (((/* implicit */int) var_8))))) ? (max((max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_2 [i_0] [i_0]))), (((unsigned int) 137438953472LL)))) : (((/* implicit */unsigned int) ((((/* implicit */int) max((var_0), (((/* implicit */short) arr_0 [i_0]))))) | (((/* implicit */int) (unsigned short)234)))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
    }
    var_13 = var_9;
}
