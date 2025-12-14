/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97114
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((long long int) var_6)))))) ? (((((((/* implicit */_Bool) var_5)) ? (4484592223044899638LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) ^ (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))) : (min(((~(var_0))), (var_3)))));
    var_21 = min((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_5))), (((/* implicit */unsigned long long int) max((var_8), (var_10)))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_18)) >> (((((/* implicit */int) var_2)) - (18318))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_1);
                    var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 2])) ? (arr_6 [i_0 + 2] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_12 [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (424494440734119658ULL)))) ? (arr_11 [i_0] [i_3] [i_1] [i_3] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) max(((short)32767), (arr_7 [i_0] [i_0] [i_2] [i_3])))), (arr_8 [i_0] [i_1] [i_2] [i_3])))))));
                            var_24 = ((/* implicit */short) arr_1 [i_0 + 2]);
                            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-22420)) & (((/* implicit */int) (short)-17279))))) ? (((/* implicit */int) (short)17282)) : (((((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0] [1ULL])) | (((/* implicit */int) (short)17307)))))) << (((max((arr_3 [i_1] [i_1] [i_1]), (((/* implicit */long long int) (short)17278)))) - (4689919327313059726LL)))));
                            arr_13 [i_4] [i_4] [i_2] [i_3] [i_2] [i_3] = (~(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-17296))) <= (var_17))))) : (max((((/* implicit */long long int) (short)-17282)), (-7218203128367832554LL))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_26 |= ((/* implicit */unsigned short) (-(((arr_15 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0 + 2]) % (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                            arr_16 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])) % (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)17282)) >= (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))) : (((((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1])) >> (((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1])) - (28104)))))));
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_27 &= ((/* implicit */unsigned short) max((((16423156724471026013ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) arr_0 [i_3])))))));
                            var_28 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_1 [(short)9])), (min((arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((140737454800896LL) << (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (9450424684030457041ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0 - 1]))))));
                        }
                        arr_20 [i_0] [6ULL] [i_0] [(unsigned short)6] [2ULL] [i_3] &= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_2 [7ULL] [i_1] [i_2])) ? (((/* implicit */int) arr_19 [i_0] [i_0])) : (((/* implicit */int) (short)18972)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_5 [i_0] [i_1] [i_0] [i_0])))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-17274))) <= (arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_24 [0ULL] [0ULL] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_1] [i_0 + 1] [i_3] [i_7] [i_1] [i_0 + 2])))) + (((arr_18 [i_7] [i_0 - 1] [i_0 + 2] [i_3] [i_7] [i_3] [i_1]) - (arr_18 [i_0] [i_0] [i_0 + 1] [i_3] [i_7] [i_2] [i_2])))));
                            var_29 = ((/* implicit */unsigned short) ((short) var_7));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) <= (((((/* implicit */_Bool) 2029080741432348267ULL)) ? (5425710518029787219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [8LL] [i_1])))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-13693)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) : (6837992608363637737ULL)))))));
                            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)19707)) ? (((arr_22 [i_3] [i_3] [i_3] [i_2] [i_3] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))) : (((/* implicit */unsigned long long int) ((-5139521382474634857LL) + (((/* implicit */long long int) ((/* implicit */int) (short)32753)))))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [(short)4] [i_2] [i_3]))) <= (max((((/* implicit */long long int) var_6)), (-5811428546552523882LL))))))));
                            arr_25 [i_3] = ((/* implicit */short) (+(max((((((/* implicit */int) (short)-1)) - (((/* implicit */int) arr_2 [i_0] [i_1] [i_7])))), (((/* implicit */int) arr_7 [i_0] [i_3] [i_1] [i_0]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_1] [i_9] &= ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) arr_9 [i_9] [i_2] [i_1] [i_2] [i_1] [i_0])) - (arr_6 [i_0] [i_9]))))) ? (6837992608363637732ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_1] [i_2] [i_9] [i_9]))))) << (((((/* implicit */int) max((var_8), ((short)-17279)))) + (17306)))))));
                                arr_33 [i_0 + 1] [i_1] [(short)8] [i_8] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32767))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_32 = ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-17279)))))))) | (min((max((((/* implicit */unsigned long long int) var_12)), (17993227085034341431ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) % (((/* implicit */int) (short)-13454))))))));
}
