/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86966
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (0ULL)))) ? (arr_0 [i_0] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((long long int) var_8)))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-10)) <= (((/* implicit */int) (signed char)85)))))) <= (2139710719U)));
        arr_5 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])) - (0)));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_16 = var_9;
        arr_9 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (short)-23344)), (-567222415)));
    }
    var_17 = ((/* implicit */long long int) var_6);
    var_18 = ((/* implicit */signed char) min((((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5067))))), (((/* implicit */unsigned long long int) var_9))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned short)60468), (((/* implicit */unsigned short) var_11))))), (max((-567222415), (((/* implicit */int) var_15))))))), (((((((/* implicit */_Bool) -8095864405973835856LL)) ? (((/* implicit */unsigned long long int) var_14)) : (var_6))) << (((((/* implicit */int) var_13)) - (1949)))))));
}
