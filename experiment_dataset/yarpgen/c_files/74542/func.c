/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74542
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
    var_16 = ((/* implicit */signed char) (short)-14125);
    var_17 = ((/* implicit */long long int) ((((((((/* implicit */long long int) ((/* implicit */int) (signed char)-35))) - (var_12))) | (((/* implicit */long long int) ((/* implicit */int) var_5))))) == (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 - 2] = ((/* implicit */long long int) arr_2 [i_1] [(signed char)22]);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1 + 1] [i_1 + 1])), (min((((/* implicit */unsigned short) (short)14125)), (arr_0 [i_0])))))) & (((((/* implicit */int) arr_2 [i_1 + 1] [i_1])) & (((/* implicit */int) arr_2 [i_1 - 1] [12LL]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (unsigned short)61319)))) : (((/* implicit */int) (short)-14111))));
                    arr_8 [i_0] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1])) & (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))));
                    arr_9 [i_0] [17LL] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 2])) - (((/* implicit */int) (signed char)127))));
                    var_19 = ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (4103976507909142467LL) : (arr_6 [i_0] [(signed char)20] [i_0] [i_2]))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [(signed char)6])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2])))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1 - 2])) ^ (((/* implicit */int) arr_3 [(unsigned short)21] [i_1 - 2]))));
                }
                arr_11 [i_0] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_1] [(short)23] [i_0] [i_1 - 2]), (((/* implicit */long long int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))) : (((((/* implicit */int) arr_5 [i_0] [i_0])) + (((/* implicit */int) arr_5 [i_0] [i_0]))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned short) var_2);
}
