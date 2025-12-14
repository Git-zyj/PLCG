/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68614
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)224)))) ^ ((+(((/* implicit */int) (signed char)94))))))) ? (min((((/* implicit */unsigned long long int) ((arr_5 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (min((13258372799522222730ULL), (((/* implicit */unsigned long long int) arr_5 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (arr_3 [i_0] [i_0] [i_0 - 1]))))));
                arr_6 [i_0] = ((/* implicit */short) min((max((4294967295U), (((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_0 - 1])))), ((~(((arr_5 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((var_14) ? (((((/* implicit */_Bool) 15840941205661718617ULL)) ? (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)228)) | (((/* implicit */int) (_Bool)1))))))) : ((~((~(9223372036854775807LL)))))));
                                var_17 = ((/* implicit */unsigned char) 10U);
                                var_18 = ((/* implicit */unsigned short) 3U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (unsigned char)30);
                                arr_20 [i_0] [i_2] [i_5] [i_0] = ((/* implicit */unsigned int) ((2628889558U) > (85295257U)));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 2])) ? (85295257U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 + 1])))))) <= (var_1)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_0);
}
