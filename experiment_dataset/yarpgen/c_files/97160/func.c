/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97160
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
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))))) ? (((((((/* implicit */_Bool) -3658723855434473852LL)) ? (1095937949U) : (var_9))) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9383)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1095937954U)), (3658723855434473853LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) max((3658723855434473836LL), (((/* implicit */long long int) (short)-5706))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_10 [(signed char)3] [(signed char)3] [(short)8] [i_3 - 1] [i_0])))) ? (min((arr_10 [1U] [1U] [i_0] [i_3 + 2] [1ULL]), (arr_6 [i_3 + 2]))) : (min((arr_10 [i_0] [i_1] [(signed char)12] [i_3 + 1] [i_4]), (((/* implicit */unsigned long long int) var_13))))))));
                                var_23 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)49565))));
                                var_24 += ((/* implicit */unsigned long long int) var_11);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
