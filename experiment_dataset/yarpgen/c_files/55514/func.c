/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55514
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) (signed char)113))))) ? (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned long long int) var_11)) : (18001024618839790974ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-120)), (arr_5 [i_0] [i_0]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (445719454869760631ULL))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    arr_11 [i_1] [i_2] = ((/* implicit */signed char) ((max((18001024618839790969ULL), (((/* implicit */unsigned long long int) 3707160684U)))) >> ((((+(((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1])))) - (33639)))));
                    var_14 = ((/* implicit */signed char) 2355209186U);
                    var_15 = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) var_9))));
                    arr_12 [i_2] [i_2] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)56759)) : (((/* implicit */int) (unsigned short)12972))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_16 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2230872338U)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (_Bool)1))))) : ((-(var_8)))));
                    var_17 = ((/* implicit */int) ((7648661127054272740LL) == (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) (unsigned char)4)))))));
                }
                for (unsigned int i_4 = 2; i_4 < 11; i_4 += 2) 
                {
                    arr_19 [i_0] [10] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) min((arr_0 [i_4] [i_1]), (((/* implicit */unsigned short) (unsigned char)4))))) <= (((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned char)185)))))));
                    arr_20 [i_4] [i_4] [i_1] [(unsigned char)3] |= ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_13 [i_4] [i_4 - 2] [i_4 + 1])), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [(unsigned char)3] [(signed char)8])) : (((/* implicit */int) arr_17 [i_4] [i_1] [i_0])))))), (((/* implicit */int) var_4))));
                    arr_21 [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_4 + 1] [i_4 - 2] [i_4 + 1])) : (((/* implicit */int) arr_17 [i_1] [i_4 - 2] [i_4]))))) ? ((-(((/* implicit */int) arr_17 [i_1] [i_4 + 1] [i_4])))) : (((/* implicit */int) arr_17 [(signed char)9] [i_4 - 2] [i_4]))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((int) arr_25 [(unsigned short)2] [i_7 + 1] [i_7 + 1])) - (max((min((0), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) (signed char)67)))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((arr_28 [i_7] [i_6] [i_5]) & (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) arr_22 [9LL]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_5] [i_5])))));
                    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)31696)) ? (((/* implicit */int) arr_26 [11U] [i_7 + 3] [i_7 + 3])) : (((/* implicit */int) arr_26 [i_7] [i_7 + 3] [i_7])))) >= (((int) (+(((/* implicit */int) (unsigned char)220)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            var_21 += ((/* implicit */unsigned short) ((arr_27 [6U] [i_8]) ? (((/* implicit */int) arr_23 [i_5] [i_8])) : (((/* implicit */int) max((arr_27 [i_8] [i_5]), (arr_27 [i_5] [i_5]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        {
                            arr_40 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)113), (((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_10] [1LL] [i_11] [i_10])) != (((/* implicit */int) (_Bool)1))))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (2147483647) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10] [i_5]))) : (445719454869760654ULL)))))));
                            arr_41 [i_5] [i_8] [i_9] [i_11] [i_9] [(unsigned short)0] [i_11] = ((/* implicit */unsigned short) max((arr_34 [i_5] [(unsigned char)2] [i_5] [(signed char)3] [i_5]), (min((((/* implicit */int) (signed char)-1)), (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                arr_42 [i_8] = ((/* implicit */long long int) min(((signed char)-3), ((signed char)-114)));
            }
            for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                var_23 *= ((/* implicit */unsigned short) 1431845751);
                arr_46 [i_12] [(signed char)4] [i_12] [i_12] &= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-24)))), (arr_25 [12U] [(signed char)2] [i_5]))), (min((var_1), (((/* implicit */long long int) (unsigned char)208))))));
            }
        }
        arr_47 [i_5] = ((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (134217696U)))))) | (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) ((((/* implicit */int) (short)-16538)) == (((/* implicit */int) var_13)))))))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4298057178512340805LL)) ? (((/* implicit */int) (unsigned short)36934)) : (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) 0)) : (((var_3) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))))))));
}
