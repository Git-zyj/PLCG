/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68408
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
    var_19 &= ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) + (2147483647))) << (((((((/* implicit */int) (signed char)-1)) + (2))) - (1)))))), (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) ((((unsigned int) min((arr_1 [(unsigned char)5]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) << (((((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3] [i_0 - 1])) ? (((((((/* implicit */int) (signed char)-32)) + (2147483647))) << (((((arr_0 [i_0] [(short)8]) + (469349024))) - (14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)98))))))) - (2147483597)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_21 ^= (-(((/* implicit */int) (signed char)-108)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) max(((((~(arr_3 [i_1]))) / (max((((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_2] [i_4])), (arr_7 [i_0 - 2] [i_1] [i_2] [i_3 - 3]))))), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_0 [i_0] [i_0 - 2])), (3712279666U))) < (max((arr_8 [i_0] [i_0] [i_0] [(unsigned short)6] [i_0]), (arr_1 [i_1]))))))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned char) arr_3 [5ULL])))));
                                arr_11 [i_0] [i_1] [i_2] [i_0] [9ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-104)), ((~(15202511367368691688ULL))))))));
                            }
                        } 
                    } 
                }
                var_24 = (+(max((arr_3 [i_0 - 2]), (((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                var_25 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0 + 1] [(signed char)3] [i_1]);
            }
        } 
    } 
}
