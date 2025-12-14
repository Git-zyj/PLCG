/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72050
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [3] = ((/* implicit */short) 1073741822);
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_12))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) % (var_3))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((arr_3 [i_1]) < (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_5 [i_1] [i_1])))))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)67))));
        var_18 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_6))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_19 = (+(((((/* implicit */int) var_11)) / (arr_5 [i_1] [i_1]))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1]) % (arr_5 [i_1] [i_1]))))));
            var_21 = ((/* implicit */unsigned short) ((((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) % (((/* implicit */long long int) arr_3 [i_1]))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)159)) - (((/* implicit */int) (unsigned short)32565))));
        arr_14 [(signed char)2] [i_3] = ((/* implicit */signed char) var_10);
        var_22 ^= ((/* implicit */unsigned char) var_10);
    }
    for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 1) 
    {
        var_23 ^= ((/* implicit */signed char) ((((((arr_4 [(unsigned short)14]) / (((/* implicit */long long int) arr_3 [(short)6])))) + (((arr_11 [i_4]) / (var_13))))) / (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned int) var_12)), (1762225305U)))))));
        var_24 = max((((((/* implicit */int) arr_16 [i_4] [i_4])) + (((/* implicit */int) var_12)))), (((/* implicit */int) ((_Bool) 2532741984U))));
    }
    var_25 = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_10)))))) : (((var_10) / (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) var_2)));
    var_26 = ((/* implicit */short) ((var_1) / (((/* implicit */unsigned int) var_9))));
}
