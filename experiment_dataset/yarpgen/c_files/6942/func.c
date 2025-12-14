/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6942
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_6 [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (0) : (((/* implicit */int) var_5))))) : (685401186U)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                        var_13 += ((/* implicit */short) var_11);
                    }
                    for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned int) var_1);
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [(short)5]);
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) max((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 1] [i_0] [8LL] [i_4 + 1])) < (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_0] [i_4] [i_4 - 1])))))));
                            var_15 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] [i_5]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((unsigned char) ((signed char) (~(((/* implicit */int) arr_2 [i_0] [(unsigned char)12]))))));
                            var_17 = ((/* implicit */int) var_3);
                            var_18 = ((((/* implicit */_Bool) min((var_11), (arr_15 [i_4 + 1] [i_1] [(signed char)14] [i_4] [i_6])))) ? (((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_0] [i_2] [0U] [(unsigned char)9] [i_1])) ? (arr_16 [i_4 + 1] [2U] [i_4 + 1] [i_4] [i_0] [i_2]) : (((/* implicit */long long int) 3609566110U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 - 1] [i_1] [i_2] [i_4] [i_6]))));
                        }
                        for (int i_7 = 2; i_7 < 14; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */short) ((unsigned long long int) min(((~(0ULL))), (((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_1] [i_2] [i_4] [i_2] [i_0]) > (-4192275846902240077LL)))))));
                            arr_23 [i_0] [(signed char)8] [i_2] [i_7] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_7 + 1] [i_2] [(unsigned char)4] [i_7 - 2])))) ? ((-(((/* implicit */int) arr_14 [i_7 + 1] [(short)8] [i_4] [i_4 - 1])))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_9))))))));
                            var_20 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) -5679955086385524369LL)) / (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_1] [i_0] [(unsigned char)9] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))), (((/* implicit */unsigned long long int) arr_14 [i_2] [(short)3] [i_2] [i_2]))));
                            arr_24 [i_0] [i_4] [i_2] [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) 1756888733114412317LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)0))))) & (((((/* implicit */_Bool) arr_15 [(unsigned short)3] [i_1] [(short)8] [(short)8] [(unsigned char)8])) ? (-4192275846902240082LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) arr_13 [i_4 + 1] [i_8 + 2]);
                            arr_27 [i_0] [i_1] [i_4 - 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) -4192275846902240082LL)))) ? (min((var_2), (((/* implicit */long long int) (short)-7481)))) : (((((/* implicit */_Bool) arr_10 [i_0] [2U] [2U] [i_4] [(_Bool)1] [i_0])) ? (var_6) : (var_9))))), (((((/* implicit */_Bool) arr_16 [i_8 + 1] [i_1] [i_2] [9U] [i_8] [i_8])) ? (4192275846902240077LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
                        }
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 3609566109U)) ? ((-(((/* implicit */int) ((_Bool) var_8))))) : (arr_1 [i_0] [i_0])));
                        arr_28 [i_4 - 1] [i_0] [i_2] [i_0] [6U] = var_8;
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) 3599444625U);
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_0] [i_9]))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_6))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9] [i_0]))) | (var_9)))));
                }
                var_25 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned char) (unsigned short)4704))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [14LL] [i_0] [i_1] [i_1] [i_1])) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) - (146)))))) : (((((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [(signed char)9] [i_0] [i_1])) % (var_0))))), (((/* implicit */long long int) var_4))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned char) (unsigned short)4704))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [14LL] [i_0] [i_1] [i_1] [i_1])) << (((((((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) - (146))) + (97))) - (19)))))) : (((((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [(signed char)9] [i_0] [i_1])) % (var_0))))), (((/* implicit */long long int) var_4)))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) 326838101);
    var_27 |= ((/* implicit */_Bool) var_0);
    var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((var_0), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30444)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_4)) + (28)))))), (13908423515061828160ULL)))));
}
