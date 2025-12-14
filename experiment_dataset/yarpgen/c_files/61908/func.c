/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61908
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((((int) (short)29718)) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (955863651148190773ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27086)))))) ? ((~(((/* implicit */int) (short)-29719)))) : (((/* implicit */int) (unsigned short)65535))))));
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)0)), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), ((~(955863651148190773ULL)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_3 [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)60151)) == (((/* implicit */int) (unsigned short)1)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) var_10);
        arr_6 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) arr_2 [(short)3])) & (((/* implicit */int) arr_0 [i_1]))))))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_11)))) ? ((~(((/* implicit */int) (signed char)108)))) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((var_0) || (((var_10) >= (((/* implicit */int) var_0)))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)27092))));
}
