/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98331
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
    var_13 -= ((/* implicit */long long int) ((((_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_4)) - (var_12))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0]) ^ (arr_8 [i_0] [13ULL] [i_0] [13ULL])))) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */int) (_Bool)0)), (var_6))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) > (min((104583423U), (var_0))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_17 [i_4] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_3 + 1]);
                                var_15 ^= ((/* implicit */_Bool) ((((long long int) ((arr_15 [i_0] [4LL] [4LL] [4LL] [i_0] [(unsigned char)5]) % (((/* implicit */long long int) 4190383872U))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_4] [i_3] [i_3 + 1] [i_3] [i_3] [i_2 - 1]) > (arr_15 [i_3] [i_3] [i_3 + 1] [i_2 - 1] [i_3] [i_2 - 1])))))));
                                arr_18 [i_2] [11ULL] [i_2] [0] [11ULL] = ((/* implicit */_Bool) ((((_Bool) arr_5 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_4])))) : (min((arr_15 [12LL] [i_0] [i_2 - 1] [i_2 - 1] [1U] [i_3 - 1]), (arr_15 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_3 - 1])))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
                    /* LoopSeq 2 */
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        arr_22 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((((/* implicit */long long int) arr_20 [i_0] [i_0] [i_2 - 1] [i_1] [8U] [i_0])) <= (((arr_15 [14] [14] [5U] [14] [2U] [i_5 - 2]) % (arr_0 [i_1]))))) || (((/* implicit */_Bool) ((unsigned int) min((arr_16 [i_0] [i_0] [i_2] [i_2 - 1] [i_5] [i_0] [i_5]), ((_Bool)1)))))));
                        var_17 -= ((((((unsigned int) 13510798882111488ULL)) > (((/* implicit */unsigned int) arr_20 [i_5] [i_5] [i_5] [i_2] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) 4294967295U))))), ((+(arr_0 [i_0])))))) : (((arr_16 [i_0] [i_5] [i_2] [i_1] [i_1] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_19 [i_0] [6LL] [i_0] [i_5])))) : ((+(18446744073709551590ULL))))));
                        arr_23 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_5] [i_1]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((arr_21 [i_1] [i_0]) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))))) : (((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1] [11ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0]) <= (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_4 [i_5] [i_0])))))));
                        var_18 -= ((/* implicit */unsigned long long int) min((((min((var_4), (((/* implicit */long long int) var_9)))) / (min((arr_0 [i_5 - 1]), (((/* implicit */long long int) 3278520728U)))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (_Bool)0)), (2732164725U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_1] [2U] [i_5]))))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_26 [i_2] [i_1] [i_2] [i_6] = ((/* implicit */unsigned char) arr_12 [i_1] [i_0]);
                        arr_27 [i_6] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) min((((((69818988363776ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (arr_13 [i_0] [i_0] [4U] [i_0] [i_2]))), (((/* implicit */unsigned long long int) 0LL))));
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    arr_31 [i_0] [i_0] [i_7] = ((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) (unsigned char)207)), (arr_30 [i_0] [i_1] [i_7]))));
                    arr_32 [11] [11] [11] [i_7] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_21 [i_1] [i_0])))), (((/* implicit */int) arr_21 [i_1] [i_7]))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((arr_13 [4] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned long long int) min((arr_19 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_21 [i_0] [i_1])), ((unsigned char)235))))))) : ((-((+(arr_13 [i_1] [12U] [i_0] [i_0] [i_1])))))));
                }
                arr_33 [i_1] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18446674254721187853ULL)))) - (((arr_10 [i_0] [i_0]) + (arr_10 [i_0] [3LL]))))), (((/* implicit */unsigned long long int) var_4))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_20 ^= min((((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */long long int) arr_2 [i_8 + 1])) : (min((((/* implicit */long long int) arr_3 [i_9] [i_8] [i_1])), (arr_37 [i_0] [i_9]))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -6240267063316188252LL)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) < (-6219139745137390889LL)))));
                            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_8])), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_8] [i_8] [12ULL] [i_8])) || (((/* implicit */_Bool) 792544150U))))), ((((_Bool)0) ? (18014123631575040ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [(_Bool)1] [i_0] [i_0]))))))));
                            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_16 [i_8 - 1] [i_8 - 1] [0LL] [0LL] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))) ? (((arr_9 [i_8 + 1] [i_8] [i_1]) ? (((/* implicit */int) arr_28 [i_8 + 2] [i_8 - 1] [3LL])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_8])))) : ((-(((/* implicit */int) arr_16 [i_8 + 2] [i_8 + 2] [i_8] [i_8] [i_8] [i_8 + 2] [i_8 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_9);
}
