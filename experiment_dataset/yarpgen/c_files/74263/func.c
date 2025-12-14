/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74263
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
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)14))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)2650))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((unsigned short)61634), (((/* implicit */unsigned short) var_8)))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((var_1) <= (((/* implicit */int) (signed char)-119))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) var_7);
        var_15 = ((/* implicit */int) ((unsigned long long int) var_1));
        var_16 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_0]));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) var_9))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) 536870912LL))));
        var_19 = ((/* implicit */unsigned int) var_9);
    }
    var_20 = ((/* implicit */signed char) var_4);
}
