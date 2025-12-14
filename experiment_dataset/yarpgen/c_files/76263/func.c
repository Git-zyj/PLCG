/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76263
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)37), ((unsigned char)230)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (arr_0 [i_0])))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (17735103872897555081ULL))), (max((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_2] [i_4] |= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_5))))));
                        arr_14 [i_4] [i_4] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((arr_2 [i_3] [i_1 - 2]) & (arr_4 [(unsigned char)3] [i_1 - 2])));
                    }
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1] = max((((/* implicit */int) ((signed char) arr_9 [i_1 - 2] [i_5] [14]))), ((-(((/* implicit */int) arr_6 [i_1 - 1])))));
                        arr_18 [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [(signed char)6] [i_1 - 1] [i_3]))));
                    }
                    arr_19 [i_3] = ((/* implicit */short) arr_8 [i_1 + 1]);
                }
            } 
        } 
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_4))));
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_8 [i_6]), (((/* implicit */unsigned char) var_9))))) * (((/* implicit */int) max((arr_8 [i_6]), (arr_8 [i_6]))))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */long long int) (+(arr_11 [i_6] [i_6] [i_6] [i_6])))) : (((arr_15 [i_6] [i_6] [i_6] [(signed char)5]) / (arr_15 [i_6] [i_6] [i_6] [i_6])))));
    }
    var_14 = ((/* implicit */signed char) var_4);
}
