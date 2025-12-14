/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78893
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)32765)))))))) % (8388607)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) 1152921504606584832LL))));
        var_18 += ((/* implicit */short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (signed char)-34))));
        var_19 = ((/* implicit */short) arr_2 [(_Bool)1]);
        var_20 -= ((/* implicit */short) ((((unsigned long long int) (!(((/* implicit */_Bool) 8388595))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (!(arr_0 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((6325072085631784098ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759)))))) ? (((7U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65336))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)1))))))))));
        var_23 *= ((((/* implicit */int) (!(((/* implicit */_Bool) -8388604))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)201))))));
    }
}
