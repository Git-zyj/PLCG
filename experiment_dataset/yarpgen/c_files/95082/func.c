/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95082
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (var_2))))) & ((-(262143U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [6U] [i_1] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 3506461122U)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (signed char)126)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1 + 3] [i_0 + 1]))))))) ? (4294705144U) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 3506461109U)) || (((/* implicit */_Bool) (unsigned short)15786))))), (((((/* implicit */_Bool) (short)-15670)) ? (((/* implicit */int) (short)3382)) : (((/* implicit */int) (unsigned char)1)))))))));
                    var_13 ^= ((/* implicit */unsigned short) min(((+(4190090006717007105LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_1 + 3])) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_1 + 3])) : (((/* implicit */int) arr_3 [i_0 + 2])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_14 ^= (signed char)-84;
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0 + 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_0 [i_3]), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_3] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_2 - 1]))) : (((((/* implicit */_Bool) var_5)) ? (262127U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10028))))))) / (min((((/* implicit */unsigned int) arr_8 [i_4] [i_1] [i_1] [i_0])), (((unsigned int) (short)-10503))))));
                                arr_18 [i_1] [i_2] [i_2] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 3] [(unsigned short)18] [i_3])) & (((/* implicit */int) arr_7 [i_1] [i_3] [i_1]))))) < (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (arr_16 [i_0 - 1] [i_1] [i_0 - 1])))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_3 [i_2]))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_5 [i_1]);
                }
            } 
        } 
    } 
}
