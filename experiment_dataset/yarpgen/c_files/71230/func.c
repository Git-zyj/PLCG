/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71230
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_19 [(unsigned char)0] [(unsigned char)0] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)12)) | (arr_3 [i_4]))), (((/* implicit */int) arr_2 [i_3 + 1] [(unsigned char)8]))));
                                var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)232)) ? (arr_18 [i_4] [i_4] [i_2] [i_2] [i_2] [17U] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) (signed char)-99))))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_4] [i_4] [(_Bool)1] [i_1 + 1]))) : (min((-1162756781), (((/* implicit */int) ((15087494998131437954ULL) < (((/* implicit */unsigned long long int) 2143289344U)))))))));
                                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_5 [i_1 - 2] [i_3 + 1] [i_3])), (((((/* implicit */_Bool) 15087494998131437956ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)12))))) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42)))))))));
                                arr_21 [i_0] [i_2] [i_3] = ((/* implicit */signed char) arr_18 [i_0] [i_1] [i_2] [i_3 + 2] [i_4] [i_3] [i_3]);
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_12 [i_0] [i_1 - 2] [i_0] [i_1])))) ? (((unsigned int) (signed char)-47)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [5] [5] [i_2])), (arr_12 [i_0] [i_0] [3] [i_0])))) ? ((-(((/* implicit */int) (short)-3717)))) : (arr_9 [i_0] [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_2] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1 - 2] [(unsigned char)0] [i_5])) / (arr_1 [i_2])))))));
                                var_20 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-75)), (arr_11 [i_1] [i_2] [i_2] [i_2]))))) >= (-9223372036854775806LL)))) * (((((/* implicit */_Bool) min((arr_22 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) var_16))))) ? (((((/* implicit */_Bool) (short)25554)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_16)))) : ((~(((/* implicit */int) arr_2 [11] [i_2]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_34 [i_0] [i_1] [i_0] [i_1] [i_7] &= ((/* implicit */unsigned char) ((long long int) (-(min((-660603549), (((/* implicit */int) (short)25535)))))));
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-12))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_14 [i_8] [i_7] [i_2] [i_0] [13LL] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max(((short)25535), (((/* implicit */short) arr_25 [i_0] [i_7] [i_2] [i_1] [i_0]))))))) : ((+(((arr_32 [i_0] [i_1] [i_1] [i_7]) ? (2769974057U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_1] [i_2] = ((max((9223371487098961920ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((1122297690) <= (((/* implicit */int) arr_25 [6U] [i_1] [i_1] [i_1] [6U]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_6);
}
