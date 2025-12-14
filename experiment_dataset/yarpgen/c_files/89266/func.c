/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89266
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
    var_13 += ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((unsigned long long int) -1231505505588132678LL);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_13 [i_0 + 2] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned long long int) (+(((unsigned int) 6890847826497552339LL))))) : (min((968389757695986670ULL), (((/* implicit */unsigned long long int) (short)6376))))));
                        var_15 = ((/* implicit */_Bool) ((int) ((long long int) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */int) (unsigned char)240))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6890847826497552359LL)) - (arr_7 [i_0 - 2]))))));
                        var_17 = ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_4 [i_0 + 1])));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_19 [i_0 - 1] [i_5 + 1] = ((/* implicit */unsigned short) var_1);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-62))));
                            arr_24 [i_0] = ((/* implicit */int) min((1231505505588132678LL), (((/* implicit */long long int) ((signed char) arr_16 [i_0 - 2] [i_0 - 2])))));
                            arr_25 [i_0] [i_1] [i_2] [i_5 + 1] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_7);
                            arr_26 [i_0 - 2] [(unsigned short)0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_18 [i_0 - 2] [i_0 - 2] [i_5 + 1])))), (((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) ((short) arr_12 [i_2] [i_1]))) : (((/* implicit */int) (signed char)121))))));
                            arr_27 [(_Bool)1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6] [i_6] [(unsigned short)8] [i_6] [i_6])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_5 + 1] [i_2])) ? (min((((/* implicit */unsigned int) (signed char)-46)), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_15 [(short)11] [i_1] [i_2] [i_5] [(short)11])))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-46))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_2 [i_5 + 1])) ? (((/* implicit */int) arr_0 [i_5 + 1])) : (((/* implicit */int) arr_0 [i_5 + 1]))))))));
                            arr_31 [i_0] [i_1] [i_0] [i_7] [i_7] [i_5 + 1] [i_5] &= ((/* implicit */int) arr_7 [i_0 + 1]);
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_5])))))));
                        }
                        arr_32 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */short) min((var_1), (max((min((arr_2 [i_0 + 2]), (4095ULL))), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 2] [i_0]))))));
                        var_22 = ((/* implicit */_Bool) arr_18 [(signed char)21] [i_5] [i_0 + 2]);
                    }
                    for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_35 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((short) arr_23 [i_1] [i_1] [i_1] [i_1] [i_0 - 2] [i_0 + 2]))) : (((/* implicit */int) ((_Bool) arr_34 [i_0 - 2] [i_0 + 2])))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) < (((/* implicit */int) max((((/* implicit */short) arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 2])), (arr_10 [i_0] [i_0 - 1] [(short)4]))))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min(((short)32762), (((/* implicit */short) (!((_Bool)1)))))))));
                    }
                    var_25 = ((/* implicit */_Bool) arr_22 [i_0 - 1] [i_1] [i_1] [i_1] [(_Bool)0] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 3) 
                        {
                            {
                                arr_43 [8LL] [5] [(unsigned char)19] [i_9] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_10] [i_9 - 1] [i_2] [i_1] [23ULL]))) & (((((/* implicit */_Bool) -770176289)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_1] [i_1])) ? (((/* implicit */int) arr_41 [i_0] [i_1] [i_2] [i_1] [i_1])) : (((/* implicit */int) (_Bool)0))))) : (max((arr_6 [i_0] [i_1] [i_10]), (-1395898822534369058LL)))))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((/* implicit */int) (short)-32762)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (-2945585295452438692LL)))) ? (((/* implicit */int) min((arr_23 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 2] [i_0]), (((/* implicit */signed char) var_2))))) : (((/* implicit */int) min((arr_14 [i_1] [i_1] [i_1] [(short)4]), (arr_40 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0])))))))))));
                            }
                        } 
                    } 
                    var_27 ^= ((/* implicit */long long int) min((((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_42 [13LL] [i_1] [i_2] [i_2] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [7ULL] [i_1] [i_2]))))), (((/* implicit */unsigned long long int) (((+(1231505505588132706LL))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (8953983996460521898LL))))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) max(((((+(((/* implicit */int) var_9)))) | (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-63)))))));
    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
}
