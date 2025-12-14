/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74652
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((var_16) << (((var_12) - (3922784082U))))) << (((var_5) + (1156124220))))) >> (((max((((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) ((var_7) >> (((var_16) - (3235271973U)))))))) - (1428122819506924140LL))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (min((9870132174146364600ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7112))) : (9223372036854775799LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((1073741823) ^ (((/* implicit */int) (signed char)-1))))), (67108863LL))))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */long long int) var_7)) / (7944110794354141813LL))));
        arr_5 [i_1] = ((/* implicit */signed char) 1036630911119210986LL);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) var_0);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_22 = var_9;
    }
}
