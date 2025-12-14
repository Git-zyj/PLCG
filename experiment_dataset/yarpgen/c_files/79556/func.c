/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79556
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
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)6)), (5772280038858603582ULL)))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_14))))) : (max((var_0), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-36)), (var_13)))) && (((/* implicit */_Bool) var_18)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_3 [0] = ((/* implicit */unsigned short) 1798212989U);
        var_21 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 1498015874)) & (16399233856247592321ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)6] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_22 -= ((/* implicit */long long int) 1074452472);
        arr_6 [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (arr_5 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2])))));
    }
    var_23 = ((/* implicit */signed char) min((max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_11)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_18)) : (-9151157215664779999LL))) : (((/* implicit */long long int) min((((/* implicit */int) var_2)), (1335212306))))))));
}
