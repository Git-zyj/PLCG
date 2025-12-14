/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63560
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) var_12)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_10))))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_4))) : (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_11)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_4)))) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((((/* implicit */short) var_5)), (var_0)))))) : ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(var_8))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))))));
        var_16 = ((/* implicit */long long int) var_5);
    }
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_7)))) : (max((((/* implicit */int) var_0)), (var_4)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_7)))) ? (max((((/* implicit */int) var_11)), (var_2))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (var_2)))))) : (((unsigned int) (!(((/* implicit */_Bool) var_6)))))));
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((signed char) var_7)))))));
}
