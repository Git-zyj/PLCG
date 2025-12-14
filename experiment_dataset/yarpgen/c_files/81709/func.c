/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81709
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = (!(((/* implicit */_Bool) 6433045883539637356ULL)));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = var_10;
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((1073741824) - (1073741820)))))), (max((6433045883539637356ULL), (6433045883539637338ULL)))))));
        arr_5 [i_1] [i_1 + 1] = ((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_4 [i_1]))))));
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
        var_19 *= ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */signed char) arr_3 [i_1 - 2] [i_1 - 2])), (var_6))));
    }
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_14)))) || (((_Bool) ((((/* implicit */_Bool) 6433045883539637353ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) var_2)))))));
    var_22 = ((/* implicit */unsigned char) ((_Bool) min((min(((unsigned char)60), (((/* implicit */unsigned char) (_Bool)0)))), (min((((/* implicit */unsigned char) var_4)), (var_8))))));
}
