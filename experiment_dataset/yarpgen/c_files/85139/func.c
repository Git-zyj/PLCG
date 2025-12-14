/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85139
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((unsigned long long int) var_5)))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_8))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_1)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) * (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_1))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((1405877548341671090LL), (((/* implicit */long long int) (unsigned char)231)))))));
                                arr_10 [i_0] = ((/* implicit */int) var_0);
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0]))) : (arr_9 [i_0] [i_0])))))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_1 [i_0])))) - (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) (unsigned char)231))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] = ((/* implicit */_Bool) var_0);
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) 1405877548341671118LL)) ? ((-(1405877548341671090LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_2])), (var_3)))))))));
                }
            } 
        } 
        var_16 &= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_0] [i_0])))) & (((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0] [(_Bool)0] [4]), (arr_8 [i_0] [(signed char)0] [i_0] [(signed char)0] [i_0]))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    arr_21 [i_5] [i_5] = (~(((((/* implicit */int) (unsigned char)46)) & (((/* implicit */int) (unsigned char)250)))));
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_5 - 1] [i_5])))) != (((/* implicit */int) var_6))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_18 [i_5] [i_6] [i_7]))));
                    var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [1U] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_7 [i_5 - 1] [i_5] [i_5] [i_5] [(_Bool)1] [i_7])) : (((/* implicit */int) var_5)))) % (((/* implicit */int) min(((unsigned short)43806), (((/* implicit */unsigned short) (unsigned char)2)))))))) : (((((/* implicit */_Bool) var_1)) ? (1405877548341671118LL) : (((/* implicit */long long int) arr_12 [i_6]))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) -1405877548341671090LL);
        arr_22 [i_5] [i_5] = ((/* implicit */int) arr_15 [i_5] [i_5]);
        /* LoopSeq 2 */
        for (signed char i_8 = 4; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [12ULL]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_9 [i_8 - 3] [8]))))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_9)), (min((arr_25 [i_8] [14LL]), (arr_25 [i_8] [(unsigned char)8]))))))));
            var_23 = ((/* implicit */unsigned short) max((arr_20 [i_5] [i_5] [i_8 - 3] [i_8]), ((-(((((/* implicit */_Bool) -1405877548341671090LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))));
        }
        /* vectorizable */
        for (signed char i_9 = 4; i_9 < 13; i_9 += 3) /* same iter space */
        {
            var_24 = ((unsigned int) var_3);
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                arr_31 [i_5] [i_5] [i_5 - 1] [i_5] = ((/* implicit */signed char) ((arr_25 [i_5] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5])))));
                var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1405877548341671081LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((arr_14 [(_Bool)1] [i_10]) / (((/* implicit */int) var_6))))) : (arr_6 [i_10] [i_9] [i_10] [i_5])));
                var_26 = ((/* implicit */unsigned char) 2194728288256ULL);
                var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_0)))))) * (((arr_24 [i_5 - 1] [i_5] [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_10] [i_5] [i_9] [i_5] [i_5]))) : (2054889171U)))));
            }
        }
    }
    for (unsigned char i_11 = 1; i_11 < 22; i_11 += 1) 
    {
        arr_34 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) <= (arr_32 [i_11] [i_11 + 2])));
        var_28 += ((/* implicit */unsigned long long int) ((((min(((+(((/* implicit */int) var_4)))), ((-(((/* implicit */int) (unsigned short)42735)))))) + (2147483647))) >> (((((/* implicit */int) var_7)) - (53)))));
        var_29 |= (~(((/* implicit */int) (_Bool)1)));
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)38280))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_33 [i_11] [(unsigned char)7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (_Bool)1)))))) : (2054837231U)))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_1))), (((/* implicit */unsigned long long int) arr_32 [9U] [i_11]))))))));
        var_31 -= var_3;
    }
    var_32 = ((/* implicit */unsigned int) min((-6378695698025273358LL), (((/* implicit */long long int) var_0))));
}
