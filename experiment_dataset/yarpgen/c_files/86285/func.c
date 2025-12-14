/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86285
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
    var_18 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1372314238)) ? (((((/* implicit */unsigned int) -1)) / (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) == (arr_2 [i_0]))))))))));
        var_19 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)83))))), (18446744073709551605ULL));
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -636174794))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) arr_12 [i_1] [i_2] [i_3] [i_4] [i_4])), (arr_7 [i_1 + 1])))))) ? (min((max((-2614809923186777126LL), (((/* implicit */long long int) arr_14 [i_1] [i_2] [i_3] [i_1] [i_2])))), (((/* implicit */long long int) ((_Bool) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)4] [i_2 - 1] [(unsigned char)0])))));
                        arr_15 [(unsigned short)15] [i_2 - 2] [(unsigned short)15] [i_3] [i_4] = ((/* implicit */long long int) (-(var_9)));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) var_6);
                            arr_19 [i_3] [(short)2] [i_3] [i_4] [i_5] [i_5] [(short)10] = ((/* implicit */long long int) arr_4 [i_1 - 1]);
                            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) min((arr_10 [i_1] [i_4] [i_1] [i_4]), (((/* implicit */short) (unsigned char)159)))))))), (var_16)));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_3] = ((/* implicit */_Bool) arr_18 [(unsigned char)11] [i_2 + 3] [i_3] [i_6]);
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)59))));
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))) ? (((/* implicit */int) arr_17 [i_7] [i_2] [i_3] [i_4] [i_2] [i_2])) : (((((-405625119) + (2147483647))) >> ((((~(((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4] [i_4] [i_1])))) + (11))))))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_2))) : (((/* implicit */unsigned long long int) (~((~(arr_6 [i_3]))))))));
                            arr_27 [i_7] [i_7] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)21)) ? (((unsigned long long int) arr_23 [i_3] [i_3])) : (((/* implicit */unsigned long long int) arr_23 [i_3] [i_3]))));
                            var_26 *= ((/* implicit */unsigned int) arr_21 [i_2 + 3] [i_2 + 1] [i_2 + 3] [i_7]);
                        }
                        arr_28 [7] [7] [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 - 1]))));
                        arr_29 [i_1] [i_1] [i_2 - 2] [i_4] [i_4] &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) arr_13 [i_1] [(unsigned char)11] [(_Bool)1]);
    }
    for (int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) (!(arr_31 [i_8] [i_8])));
        arr_33 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-15971)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) : (17790474696580136172ULL)));
    }
    for (int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
    {
        arr_37 [i_9] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_9]))))), (4194303U)))));
        arr_38 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1191381760), (2037868152)))) ? (((/* implicit */unsigned int) arr_32 [i_9] [i_9])) : (var_7)))) ? ((~(((/* implicit */int) ((17790474696580136184ULL) <= (((/* implicit */unsigned long long int) var_3))))))) : (((((/* implicit */_Bool) arr_35 [i_9])) ? (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)40722)))) : (((/* implicit */int) ((unsigned short) arr_34 [4ULL])))))));
        var_29 = ((/* implicit */_Bool) (-(arr_35 [i_9])));
        /* LoopSeq 2 */
        for (int i_10 = 2; i_10 < 16; i_10 += 3) 
        {
            var_30 &= ((/* implicit */signed char) ((((min((((/* implicit */long long int) arr_30 [i_10 - 1])), (var_16))) + (9223372036854775807LL))) >> (((arr_30 [i_9]) - (44456947U)))));
            arr_41 [i_9] [15U] [i_9] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [(unsigned short)7] [i_10] [i_9]))) == (arr_30 [11U])))));
        }
        for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
        {
            var_31 = ((/* implicit */int) arr_31 [i_11 - 1] [i_9]);
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                var_32 = ((/* implicit */short) min(((~(arr_32 [i_9] [i_9]))), (((/* implicit */int) var_1))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 16; i_13 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)86)))))));
                    var_34 = ((/* implicit */short) ((unsigned int) arr_31 [i_11 - 1] [i_9]));
                }
                for (unsigned short i_14 = 4; i_14 < 16; i_14 += 4) /* same iter space */
                {
                    var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_40 [i_14] [i_11] [i_14]))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [14LL] [i_14])) & (((/* implicit */int) arr_34 [i_9]))))), (((((/* implicit */_Bool) arr_51 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))) : (4290772977U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_14] [i_11 - 1] [(_Bool)1] [i_11])) ^ (((/* implicit */int) arr_48 [i_14] [i_11 + 1] [i_11 + 1] [i_11 + 1])))))));
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (656269377129415446ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [13ULL] [i_11])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_14])) ? (var_17) : (((/* implicit */int) arr_50 [i_14 - 4] [i_14] [i_12] [(unsigned short)11] [(short)0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4408))) ^ (10636092761157980595ULL)))))))));
                }
                for (unsigned short i_15 = 4; i_15 < 16; i_15 += 4) /* same iter space */
                {
                    arr_56 [7] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17790474696580136170ULL)) ? (((/* implicit */int) (_Bool)1)) : (21)));
                    var_37 ^= ((/* implicit */int) min((((long long int) max((((/* implicit */unsigned long long int) arr_34 [(unsigned short)13])), (17790474696580136169ULL)))), (((/* implicit */long long int) arr_40 [i_9] [i_9] [i_15]))));
                }
            }
            /* LoopNest 3 */
            for (short i_16 = 1; i_16 < 14; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    for (unsigned short i_18 = 4; i_18 < 15; i_18 += 4) 
                    {
                        {
                            var_38 *= ((/* implicit */signed char) var_6);
                            arr_67 [i_9] [i_9] [6U] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((short) arr_42 [i_9] [i_9] [6U]))), (((((/* implicit */_Bool) arr_58 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_17] [i_17] [(short)11] [i_17] [i_18]))) : (15850792187249816754ULL))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_55 [i_9] [i_17] [i_9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_9] [i_11] [i_17] [i_9]))))) : (((/* implicit */int) arr_34 [i_18])))))));
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_18 - 3] [i_16] [i_11] [i_11 + 1]))))) ? (((((/* implicit */int) arr_62 [i_18 - 3] [i_17] [i_11] [i_11 + 2])) - (((/* implicit */int) arr_62 [i_18 + 1] [10U] [10U] [i_11 + 2])))) : (((/* implicit */int) ((unsigned char) (unsigned char)117)))));
                            var_40 -= ((/* implicit */unsigned char) -1);
                        }
                    } 
                } 
            } 
            var_41 &= ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (_Bool)1))))) >= ((-(8))))) ? (((/* implicit */long long int) var_7)) : (((long long int) arr_42 [i_11 - 1] [i_11 + 2] [i_11 - 1]))));
        }
    }
}
