/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87390
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_7 [i_3] [i_3] [i_3] [i_3 - 1]), (arr_7 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])))), ((~(((/* implicit */int) (unsigned char)31))))));
                        var_14 -= ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1]);
                    }
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_11 [i_0]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 12; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((_Bool) ((6658348180475634958ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_18 [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (arr_4 [i_0] [i_2 + 1]))))) - (((((/* implicit */_Bool) 4294967280U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            arr_23 [i_2] [i_1] [i_1] [i_4] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) 4294967280U)))))));
                            arr_24 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_2] [i_1] [i_1]))));
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_2] [i_4] [i_6] = ((/* implicit */signed char) var_7);
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_21 [i_2] [i_2 + 1] [i_4] [i_7 - 1] [i_7 - 1])) ? (arr_13 [i_7] [i_7 - 1] [i_7]) : (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_2] [i_2 + 1] [i_2 + 1] [i_7 - 1] [i_2 + 1])))))));
                            var_19 = ((/* implicit */unsigned int) arr_21 [i_2] [i_1] [i_2] [i_4] [i_7 - 1]);
                            var_20 ^= ((/* implicit */signed char) max(((-(arr_12 [i_0] [i_1] [i_7] [i_2 + 1] [i_1]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_1] [i_1])) || (var_3))) && (((/* implicit */_Bool) arr_26 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1])))))));
                        }
                        for (int i_8 = 2; i_8 < 11; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) (~(((int) min((var_11), (((/* implicit */unsigned int) var_3)))))));
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_5 [i_0])) : (arr_6 [i_1] [i_1] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [i_2] [i_4] [i_8])))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 2; i_9 < 12; i_9 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) >= (var_9))))) % (max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_2)) ? (8126464LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                        arr_32 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_2 + 1]), (arr_0 [i_2 + 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_2] [i_2] [i_9 - 2]))))) : (var_1)));
                        var_24 = ((/* implicit */unsigned char) ((_Bool) arr_3 [i_2 + 1] [i_9]));
                    }
                    for (unsigned int i_10 = 2; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_0] [i_2] [i_2] [i_10 - 1] [i_10 - 1] [i_2])) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)-25689))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2])))))) ? (arr_8 [i_2] [i_11]) : (((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */int) arr_7 [i_1] [i_1] [i_10] [i_11])))))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_2] [i_1] [i_2 + 1] [i_10] [i_2 + 1])) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46345)) ? (((/* implicit */int) (unsigned short)19191)) : (((/* implicit */int) (signed char)-50))))) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_1])))))))));
                        }
                    }
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1024)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) (_Bool)1)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (4294967284U)))))) ? (8126464LL) : (((/* implicit */long long int) max((((unsigned int) arr_6 [i_2] [i_2] [i_2] [i_2])), (((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) var_11);
    var_31 = ((/* implicit */int) var_1);
}
