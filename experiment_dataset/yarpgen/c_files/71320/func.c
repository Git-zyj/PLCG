/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71320
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
    var_19 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)127))) ? (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) var_17))))) : ((~(-5399728645500339427LL))))));
    var_20 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) (~(((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (short)-29849)), (min((((/* implicit */unsigned int) var_16)), (min((2002245369U), (((/* implicit */unsigned int) (short)-29832))))))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24945)) & (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_17))))) ? (((((((/* implicit */int) arr_4 [i_0])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65534)) - (65533))))) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1)))))))));
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / ((~(((/* implicit */int) (unsigned short)40591))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40591))) != (5399728645500339427LL))) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((var_6) <= (((/* implicit */int) (unsigned short)65523)))) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (-5399728645500339405LL)));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) ((((/* implicit */_Bool) 7316578902799247412ULL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))) * (((unsigned int) (short)32767))));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) 9223372036854775807LL))), (min((((/* implicit */unsigned long long int) (unsigned short)25500)), (8556914204644769761ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40591))) : (-5399728645500339436LL)));
            var_24 = ((/* implicit */int) var_10);
        }
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_15 [i_0] = ((/* implicit */signed char) (~((~(((140737488355327ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6359)))))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_18 [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) min((arr_9 [i_0 - 1]), (((/* implicit */unsigned int) min((var_17), (((/* implicit */signed char) var_3)))))))) : (arr_17 [i_3] [i_3] [i_3] [i_4])));
                var_25 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_17 [i_3] [(signed char)14] [i_3] [i_4])) ? (min((((/* implicit */long long int) arr_0 [i_3])), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775782LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29849))) : (1198258444U))))));
            }
        }
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
    {
        arr_22 [i_5 - 1] = ((/* implicit */short) (~(((/* implicit */int) arr_13 [6]))));
        arr_23 [i_5 - 1] [i_5] = ((/* implicit */_Bool) ((int) arr_21 [i_5 - 1]));
    }
}
