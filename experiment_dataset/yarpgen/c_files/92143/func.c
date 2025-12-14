/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92143
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = (~(((/* implicit */int) (unsigned char)109)));
                    var_14 *= ((/* implicit */_Bool) (unsigned char)101);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_1 - 1] [i_1 - 1] [i_1 + 1] [(signed char)4] = ((/* implicit */unsigned long long int) (+(max((arr_9 [i_3] [i_3] [i_2] [i_2] [i_3] [i_3]), (arr_9 [i_3] [i_2] [(unsigned short)6] [i_3] [i_2] [i_0])))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_15 = ((((/* implicit */int) (unsigned short)8191)) << (((((/* implicit */int) (unsigned char)102)) - (101))));
                            arr_14 [i_4] [i_3] [i_2] [i_1] [i_3] [i_0] = min(((~(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])))), (((((/* implicit */_Bool) max((arr_9 [i_3] [(unsigned short)14] [i_2] [i_1 + 1] [i_1] [i_3]), (((/* implicit */unsigned int) (signed char)-24))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 1152441057608895358ULL)) ? (((/* implicit */int) (unsigned char)122)) : (602645903))))));
                        }
                        for (int i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            arr_17 [(_Bool)1] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((((/* implicit */int) (unsigned short)8187)) / (((/* implicit */int) (unsigned short)21872))))))), (14278417751507301058ULL)));
                            arr_18 [i_0] [i_0] [i_1] [i_3] [i_3] [i_3] = (!(((/* implicit */_Bool) arr_15 [i_3] [i_1] [i_2] [i_3] [i_5 + 1] [i_3])));
                            arr_19 [i_0] [i_1] [(short)1] [i_3] [i_5] [i_5 + 1] [i_5 + 1] = var_3;
                        }
                        for (int i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)102))))))));
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? ((-(((/* implicit */int) (unsigned char)97)))) : (((/* implicit */int) (short)25340)))))));
                            var_18 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_1 + 1])) | (((/* implicit */int) arr_0 [i_1 + 1]))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)21867))))));
                            arr_26 [i_0] [i_3] [i_1] [i_0] [i_2] [i_3] [i_7 + 2] = ((/* implicit */short) var_0);
                        }
                        for (int i_8 = 3; i_8 < 13; i_8 += 4) 
                        {
                            arr_29 [8LL] [11LL] [i_1] [i_3] [(unsigned char)5] [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((((/* implicit */int) (short)-25367)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)43662)) - (43648))))), (((/* implicit */int) var_12))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 + 1])), (arr_28 [i_0] [i_1 + 1] [i_8 - 2] [i_8] [i_8] [i_3]))) : (((/* implicit */unsigned long long int) ((-700676450581223025LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)19))))))));
                            arr_30 [i_3] = ((/* implicit */short) (signed char)126);
                            var_19 = ((/* implicit */_Bool) -14LL);
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_10] [i_1] [i_1 - 1] [i_1 + 1] [i_10]))));
                            arr_37 [i_9] [(unsigned short)2] [(signed char)5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_10] [i_1 - 1] [i_10] [i_10] [i_1 + 1] [i_1 - 1])) != (((/* implicit */int) arr_23 [i_1 - 1] [i_1 + 1] [i_10] [i_10] [i_1 - 1] [i_1 - 1]))));
                        }
                        arr_38 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14336))) * (434801800U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)131)) || (((/* implicit */_Bool) (unsigned short)51199)))))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) + (563849204262598453ULL)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_11 = 3; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)29849)) & (((/* implicit */int) (unsigned short)49607))));
                                arr_44 [i_11] = ((/* implicit */_Bool) min((11324123613721128734ULL), (((/* implicit */unsigned long long int) -700676450581223031LL))));
                                var_22 = ((/* implicit */int) (((((+(151903964))) & (((/* implicit */int) arr_5 [i_1 + 1] [i_2] [i_1 + 1])))) != (min((((/* implicit */int) var_1)), (arr_42 [i_11])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (short)21714))));
}
