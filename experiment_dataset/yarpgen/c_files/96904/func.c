/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96904
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)255)))) + (3570723254U)))) ? (((((((/* implicit */_Bool) (short)31)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_16)), (var_14))))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0])))))))));
        var_20 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-31)), (340065506U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)170)), ((unsigned short)8689)))) : ((-(((/* implicit */int) var_15))))))) : (((((/* implicit */_Bool) (short)7580)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31))) : (1078459661U))));
        var_21 *= ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))))), (max((1078459664U), (((/* implicit */unsigned int) (unsigned char)33))))))), (min((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)-31))))), (arr_0 [13ULL] [i_0])))));
    }
    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-6)) || (((/* implicit */_Bool) 873075760U)))) && (((/* implicit */_Bool) (((~(var_3))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_10)))))))))));
    var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) min((2205158188501874901LL), (((/* implicit */long long int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) : (((((/* implicit */int) (short)32767)) % (((/* implicit */int) (short)59)))))), (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_13))))))));
}
