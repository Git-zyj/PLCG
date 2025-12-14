/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61019
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
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_16 = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [0U] [i_0 - 1]))) == (arr_1 [i_0])))), (((unsigned short) arr_3 [i_0] [(unsigned short)7] [i_0 - 1]))));
                    var_17 ^= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1262459932)) ? (11988251525515272061ULL) : (((/* implicit */unsigned long long int) 3718412740U)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (0U)))));
                                arr_11 [i_4] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [4U] [i_0 - 1] [i_1])) * (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [1U] [i_0 - 1] [i_1])))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4294967295U)) * (min((arr_4 [i_0 - 1] [i_1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_1] [i_0 - 1])))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_9))));
                                arr_12 [(signed char)9] [i_1] [(unsigned short)4] [(short)5] [13U] = ((short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (0U))), (arr_2 [i_2])));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1] [(unsigned short)14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2]))) * (arr_1 [i_0 - 1])))) : (((unsigned long long int) var_14)))));
                }
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (~(11U))))));
                var_23 ^= ((/* implicit */unsigned short) arr_0 [i_1]);
            }
        } 
    } 
}
