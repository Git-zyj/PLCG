/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8661
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), ((unsigned char)250)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((~(((((/* implicit */long long int) ((/* implicit */int) var_18))) ^ (-3125202428297038167LL)))))));
    var_21 = (-(((/* implicit */int) var_10)));
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_16) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))) ? (var_19) : (((/* implicit */int) (!(var_15)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_23 = ((/* implicit */short) (~(arr_0 [i_0 - 1])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6519380)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((((/* implicit */_Bool) (short)27904)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_25 = ((/* implicit */signed char) var_14);
        var_26 = ((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 3]);
        arr_5 [i_1 + 2] = min((arr_4 [i_1] [i_1]), (((/* implicit */int) var_17)));
    }
}
