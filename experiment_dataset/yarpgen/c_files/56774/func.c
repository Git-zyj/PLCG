/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56774
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21764))))), (((/* implicit */unsigned int) (unsigned short)664))))), (9223372036854775807LL)));
    var_17 = ((/* implicit */unsigned int) var_6);
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((var_10) <= (var_7)))), (max((max((-9223372036854775807LL), (-9223372036854775786LL))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15654)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49879))) : (4775201699865734917LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (14910255815694400616ULL)));
                    arr_8 [i_0] [i_0] [10LL] [(unsigned short)1] = ((/* implicit */long long int) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4)) ? (1715118471627242144LL) : (-4192118962318875783LL)))))), (max((((((/* implicit */unsigned long long int) var_12)) - (var_2))), (max((((/* implicit */unsigned long long int) var_10)), (383482667021097174ULL)))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_12))));
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
}
