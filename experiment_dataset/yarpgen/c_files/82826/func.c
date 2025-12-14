/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82826
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
    var_14 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_8 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */int) min(((_Bool)1), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_3 [i_0] [i_1] [0])))));
                        /* LoopSeq 2 */
                        for (int i_4 = 4; i_4 < 12; i_4 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min(((~(arr_11 [i_2 - 1] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_2] [i_2 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), (arr_10 [9U] [i_2 - 1] [(unsigned short)12] [i_3] [9U])))) ? (arr_3 [i_0] [i_3] [i_4]) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)182)), (arr_1 [i_3]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_3 [i_2] [i_2 - 1] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_17 = arr_7 [i_0] [i_1] [i_2] [i_3];
                            arr_12 [i_3] [i_2] [i_3] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1]))))) >> (((min((arr_4 [i_2 - 1]), (arr_4 [i_2 - 1]))) - (413107438U))));
                            arr_13 [i_3] [i_3] [i_2] [i_3] [i_2] [(unsigned short)8] = ((/* implicit */short) min((((((/* implicit */int) (_Bool)1)) ^ (max((((/* implicit */int) arr_9 [i_0] [i_1] [(short)4] [i_0] [i_4])), (arr_10 [(short)13] [i_1] [i_1] [i_3] [i_1]))))), (((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_5 = 4; i_5 < 12; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_14 [i_3])))) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_3]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))) : (((int) arr_16 [i_0] [i_0] [i_0] [i_0] [(signed char)7] [i_3] [i_5]))))));
                            arr_17 [i_5] [i_5] [i_3] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_9 [i_0] [i_0] [i_2 - 1] [i_3] [i_1]) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_9 [i_0] [(short)2] [(short)2] [(short)2] [i_5])))))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)2074)), (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_16 [6ULL] [i_0] [i_0] [i_1] [i_2] [i_3] [6ULL]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((-65832087), (((/* implicit */int) (unsigned short)63462))))), (arr_3 [i_0] [i_2 - 1] [i_5]))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_6 - 1] [i_6 - 1]))) + (arr_11 [i_0] [i_1] [i_6])))) ? (((/* implicit */unsigned long long int) arr_4 [i_6 - 1])) : (((((/* implicit */_Bool) (short)29791)) ? (arr_0 [i_1] [(unsigned short)13]) : (var_1))))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) 134209536)) % (684600773U)));
                        arr_20 [i_0] [i_1] [(signed char)9] [i_6 - 1] = arr_3 [i_6] [i_6 - 1] [i_6];
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_7] [i_1] [i_7] = ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_7])))))) == (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (2646698131U))))) ? (((/* implicit */int) ((arr_16 [(signed char)12] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1]) == (min((((/* implicit */unsigned long long int) -367609653)), (6315197017457882289ULL)))))) : (min((((/* implicit */int) min((arr_7 [i_0] [(unsigned char)3] [(unsigned char)3] [i_0]), (arr_2 [(unsigned short)4] [i_2] [(signed char)11])))), (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1] [i_2] [i_7])) ? (((/* implicit */int) arr_2 [4U] [i_1] [4U])) : (((/* implicit */int) arr_7 [i_7 - 1] [i_0] [i_1] [i_0])))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 3; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_7] [i_8 - 1] [i_8] = ((/* implicit */signed char) max((max((arr_27 [i_2] [i_2 - 1] [i_2]), (((/* implicit */unsigned short) (signed char)-121)))), (((/* implicit */unsigned short) ((arr_11 [i_2] [i_2 - 1] [i_2 - 1]) < (arr_11 [i_2] [i_2 - 1] [i_2 - 1]))))));
                            var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -367609658)) ? (((/* implicit */int) arr_27 [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_27 [i_2] [i_2 - 1] [(signed char)13]))))));
                        }
                        for (int i_9 = 3; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) (unsigned short)11);
                            var_23 = ((/* implicit */signed char) ((unsigned int) arr_25 [i_0] [i_0] [i_0] [i_0] [(unsigned char)5] [i_0]));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_9 + 2] [i_0])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_7 - 1] [i_0])) ? (arr_10 [i_0] [i_1] [i_1] [i_0] [i_9]) : (((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))))))))))));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */int) var_10)) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7 - 1]))) != (min((((/* implicit */long long int) arr_19 [i_7])), (-398462679215965094LL))))))));
                    }
                    var_26 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : ((~(0ULL))))));
                }
            } 
        } 
    } 
    var_27 *= ((/* implicit */short) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))))) : (((((/* implicit */unsigned long long int) -134209543)) * (11262063553506278387ULL)))))));
    var_28 = ((/* implicit */unsigned short) var_7);
    var_29 = var_3;
}
