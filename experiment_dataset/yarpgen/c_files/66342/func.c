/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66342
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
    var_11 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((var_3) & (((/* implicit */int) var_6))))) - (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) > (var_10)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((var_8) % (var_8));
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (min((9568564340210778828ULL), (((/* implicit */unsigned long long int) 3392875442624447003LL)))))) ? (var_3) : (((/* implicit */int) ((_Bool) var_6)))));
        var_14 = ((/* implicit */signed char) max((((var_5) == (((/* implicit */long long int) var_3)))), (((max((((/* implicit */unsigned long long int) var_8)), (var_1))) == (((/* implicit */unsigned long long int) min((var_5), (var_7))))))));
        arr_2 [i_0] [i_0] = ((min((var_5), (((/* implicit */long long int) var_6)))) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_6))))) / (((unsigned int) var_0))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) var_6))) == (max((((/* implicit */unsigned long long int) var_6)), (var_1)))))), (((unsigned int) min((var_3), (((/* implicit */int) var_0)))))));
        var_15 = ((int) min((((/* implicit */unsigned int) ((var_3) ^ (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9)))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((/* implicit */int) min((var_0), (var_0))))) + (((long long int) var_7)))));
        var_17 *= ((/* implicit */unsigned short) ((short) ((_Bool) var_7)));
        var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11091)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))));
        arr_9 [i_2] = ((/* implicit */unsigned short) max((((((7193826357383046097ULL) - (7193826357383046125ULL))) << (min((((/* implicit */unsigned long long int) (_Bool)1)), (11252917716326505491ULL))))), (((/* implicit */unsigned long long int) var_5))));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [(unsigned char)7] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_10))) < (((/* implicit */unsigned long long int) var_9))));
        var_19 = ((/* implicit */unsigned long long int) ((short) 7193826357383046097ULL));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) ((_Bool) var_1))));
        var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_1))) | (((var_1) | (((/* implicit */unsigned long long int) var_9)))))));
    }
    var_21 = ((/* implicit */long long int) ((((var_2) & (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_9)))))) & (((((/* implicit */unsigned long long int) ((unsigned int) var_9))) & (var_1)))));
    var_22 *= ((/* implicit */unsigned int) ((_Bool) ((_Bool) ((unsigned int) var_4))));
}
