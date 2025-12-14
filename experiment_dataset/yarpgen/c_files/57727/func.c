/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57727
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
    var_14 = ((/* implicit */short) var_5);
    var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (4294967295U)))) : (var_9))), (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) var_13)), (var_5))))))));
    var_16 = ((/* implicit */short) min((((/* implicit */long long int) 804603292U)), (min((((/* implicit */long long int) ((-2272545711984595530LL) > (2272545711984595530LL)))), (5173834726260899671LL)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((3924587338123433180LL) + (((/* implicit */long long int) ((/* implicit */int) var_10))))), (min((-2272545711984595523LL), (2272545711984595527LL)))));
        var_17 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) var_3)) - (424980820))) : (((/* implicit */int) arr_1 [(unsigned short)0]))))) * (4113914908U));
        var_18 = ((/* implicit */long long int) min(((!(arr_0 [i_0]))), (((3852540277U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [1U])))))));
    }
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_8)))))));
}
