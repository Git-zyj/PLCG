/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93217
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (-2147483631)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1359573434935560555ULL)) ? (-266580070) : (-1940497693)))) : (var_1)))) ? (((/* implicit */unsigned long long int) -18LL)) : (((((/* implicit */_Bool) -4849620291211307637LL)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) (unsigned short)31618)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33918)))))))));
    var_16 = ((/* implicit */long long int) min((var_16), (var_4)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) var_13)), (arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33932)))))))) : ((~(max((-4642415272160615182LL), (((/* implicit */long long int) (unsigned short)2280))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_14 [i_1] = ((/* implicit */signed char) ((long long int) 140737488355327ULL));
                        arr_15 [i_0] [i_0 - 2] [i_1] [i_0 - 2] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33918)) ? (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_9 [i_2]))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [10ULL] [i_3 - 1]))))) ? (((/* implicit */long long int) (+(max((arr_10 [0ULL] [i_1] [i_3]), (((/* implicit */unsigned int) var_13))))))) : (var_4)));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_7 [i_0] [7LL] [i_0]))));
                        arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? ((~(arr_7 [i_0] [i_2] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]))))))) ? (max((((/* implicit */unsigned long long int) arr_10 [i_0 - 2] [i_0] [i_0])), (14361746346140512695ULL))) : (((((/* implicit */_Bool) max((-9036423968867677659LL), (arr_13 [i_0 - 2] [i_1] [i_0 - 2] [i_3 - 2])))) ? (((((/* implicit */_Bool) 3636882314U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) : (1197462965879502473ULL))) : (var_3)))));
                    }
                } 
            } 
            arr_17 [i_0] [i_0] [8ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) 1206221623990699122LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) <= (var_11))))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) -1063766544)) : (arr_7 [i_0 - 1] [i_1] [i_1]))))))));
        }
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31618)) ? (((/* implicit */unsigned int) -1404432084)) : (arr_19 [i_4])))) ? ((+(arr_18 [i_4]))) : (arr_18 [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8250420483844584793LL)) ? (6701639635259419820ULL) : (((/* implicit */unsigned long long int) var_9))))) ? (11639625417883478537ULL) : (((((/* implicit */_Bool) arr_19 [7LL])) ? (((/* implicit */unsigned long long int) arr_18 [i_4])) : (var_14))))) : (max((8603388778569010299ULL), (((/* implicit */unsigned long long int) (unsigned char)157))))));
        arr_21 [i_4] |= ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (unsigned char)245)) ? (5554939476798381203ULL) : (((/* implicit */unsigned long long int) arr_19 [i_4])))))) % (((/* implicit */unsigned long long int) arr_18 [i_4]))));
    }
    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                arr_31 [12LL] [i_5] [i_7] = ((/* implicit */unsigned long long int) var_4);
                arr_32 [i_5] [i_6] [i_6] |= ((/* implicit */unsigned int) 6701639635259419819ULL);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((((/* implicit */unsigned long long int) 943871541)) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_5]))) : (10473543486277316268ULL))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -9036423968867677648LL)) ? (((/* implicit */int) (unsigned short)64389)) : (((/* implicit */int) (signed char)-111)))), (max((((/* implicit */int) (unsigned char)119)), (604611893))))))))));
            }
            for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 3) 
                {
                    var_20 = ((/* implicit */signed char) (unsigned char)39);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
                    {
                        arr_40 [i_10] [i_5] [i_8] [i_5] [i_5] = max((var_9), (((/* implicit */long long int) arr_38 [i_5] [14ULL] [i_8] [i_6] [i_5] [i_5])));
                        var_21 = ((/* implicit */long long int) (unsigned char)44);
                        var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_10])) ? (arr_22 [i_5] [i_9]) : (arr_22 [i_6] [i_6])));
                        var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)126)) ? (-1213574188) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2280))) != (4296022511273935943LL))))));
                    }
                    arr_41 [i_5] [i_5] [i_6] [i_6] [i_8] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)211);
                }
                arr_42 [i_5] = ((/* implicit */long long int) arr_22 [i_5] [i_6]);
                var_24 = ((/* implicit */long long int) var_5);
            }
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                arr_46 [i_5] [2LL] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((8919090773498123715LL), (((/* implicit */long long int) (unsigned char)212)))), (((/* implicit */long long int) (signed char)108))))) ? (((((/* implicit */_Bool) -1213574188)) ? (1780474743U) : (((/* implicit */unsigned int) 604611873)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                arr_47 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) 4091189886524450132LL);
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((long long int) var_1)) + (((/* implicit */long long int) ((((/* implicit */_Bool) -604611893)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) ((((/* implicit */_Bool) 1042186747)) && (((/* implicit */_Bool) arr_33 [i_6] [i_6])))))))))))));
            }
            for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                arr_50 [i_5] [i_6] [i_5 + 1] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (max((arr_44 [15U] [15U] [i_12] [i_6]), (((/* implicit */unsigned long long int) var_10)))))))));
                arr_51 [(unsigned char)10] [i_6] [i_12] |= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 604611893)) ? (arr_37 [i_5] [i_5] [i_5] [i_6] [i_5] [i_12]) : (arr_22 [i_5] [i_5 - 1])))) ? ((+(arr_29 [i_5 + 1] [i_5 + 1] [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_34 [i_5] [i_12])) ? (arr_26 [i_5 + 1] [i_6]) : (arr_30 [i_5 + 1] [i_5 + 1] [i_5 + 1]))))), (max((arr_48 [i_5] [i_5] [i_12]), (arr_49 [i_5 + 1] [i_6] [i_12])))));
            }
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_49 [i_5] [i_5] [i_5 + 1])))) ? (arr_49 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6])))))) ? (((/* implicit */long long int) 1042186747)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (1073741823ULL) : (((/* implicit */unsigned long long int) arr_34 [i_5 - 1] [i_6]))))) ? (((((/* implicit */_Bool) -604611893)) ? (35184372086784LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) : (((((/* implicit */_Bool) arr_29 [(unsigned char)5] [i_6] [i_6] [(unsigned char)5])) ? (((/* implicit */long long int) arr_23 [i_6])) : (arr_26 [i_5 - 1] [8LL]))))))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_5] [16LL] [i_5] [i_6])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23246))) : (arr_49 [i_5] [i_5] [i_5])))) ? (max((var_14), (((/* implicit */unsigned long long int) 22U)))) : (((/* implicit */unsigned long long int) -9036423968867677662LL)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_23 [i_6])), (((((/* implicit */_Bool) (unsigned char)54)) ? (var_11) : (9223372036854775807LL)))))))))));
        }
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_22 [i_5 - 1] [i_5 - 1]))));
    }
}
