/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59545
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
    var_18 = ((/* implicit */int) ((unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (var_6))), (((/* implicit */unsigned long long int) ((short) (unsigned char)255))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) * (((/* implicit */int) (short)-17329))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))))) > (max((arr_1 [i_0 - 3] [i_0 + 1]), (arr_1 [(unsigned char)2] [(unsigned char)2])))));
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))))) == (((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_2]) : (var_9))))))) % (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) <= (((/* implicit */int) arr_4 [i_1] [i_0])))))) + (1320243317323072397LL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (max((arr_2 [i_2]), (arr_2 [i_2])))));
                                var_22 = ((/* implicit */int) max((((unsigned int) arr_1 [i_0 - 2] [i_0 - 2])), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_5 [i_4]))) ^ ((~(((/* implicit */int) var_4)))))))));
                                var_23 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) ((arr_2 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (signed char i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            {
                var_24 = arr_15 [i_6];
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1100513579U), (arr_14 [(signed char)12])))) ? (max((3194453714U), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)3881)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3194453717U)))) > ((-(3194453713U)))))) : (arr_17 [i_5] [i_5] [i_5]));
                var_26 |= min((((/* implicit */unsigned int) (unsigned char)255)), (min((arr_18 [i_6 - 1]), (((/* implicit */unsigned int) var_17)))));
                /* LoopSeq 4 */
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_20 [i_5] [i_6] [i_6 + 1])), (arr_19 [i_5] [i_6] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (3754123244U))) : (((((/* implicit */unsigned int) arr_17 [i_5] [i_6] [i_5])) * (arr_14 [i_7])))))) : (9223372036854775805LL)));
                    var_28 = ((/* implicit */unsigned int) var_16);
                }
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (short i_10 = 1; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((unsigned char) ((short) arr_29 [i_6 - 2] [i_6 + 2] [i_6 + 2] [i_10 - 1] [i_10 - 1] [i_10 - 1]))))));
                                var_30 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_20 [11LL] [i_10] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [(unsigned char)6] [i_10 + 1] [i_10 + 1]))) : (-354980396869527993LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_5] [i_6 - 2] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1])))))));
                                var_31 ^= ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) (unsigned char)116)) ? (arr_23 [i_5] [i_6] [i_5]) : (var_9)))) < (((/* implicit */long long int) var_12))));
                                var_32 = ((/* implicit */unsigned char) arr_24 [i_10] [i_10] [i_10 + 1]);
                                var_33 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (17112380104622750458ULL)))));
                            }
                        } 
                    } 
                    var_34 += ((/* implicit */int) (short)32732);
                    var_35 = ((/* implicit */unsigned char) (-((~((~(var_8)))))));
                    var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(0U)))) ? (var_10) : ((+(((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6])))))))));
                    var_37 = (~((~(max((3012918365U), (4294967295U))))));
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 2; i_12 < 15; i_12 += 4) 
                    {
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_6 + 1] [i_12 - 2] [i_12 - 2] [i_12 + 4])) ? (((/* implicit */int) arr_26 [i_6 + 1] [i_12] [i_12 - 2] [i_12 + 1])) : (((/* implicit */int) arr_26 [i_6 + 2] [i_6] [i_12 + 4] [i_12 - 1]))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_15 [i_12 - 1]))));
                        var_40 = ((/* implicit */signed char) (-(4803452759981881446LL)));
                    }
                    for (long long int i_13 = 2; i_13 < 16; i_13 += 4) 
                    {
                        var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_5]))));
                        var_42 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_11] [i_13 - 2] [i_13 - 2] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-128))) : (arr_32 [i_13 + 1] [4U] [i_13 + 1] [i_11])));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)128)) || (((/* implicit */_Bool) (unsigned char)206))));
                        var_44 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) >= (((arr_14 [i_11]) + (arr_19 [i_5] [i_6] [i_5])))));
                        var_45 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_11])) ? ((+(((/* implicit */int) arr_29 [i_11] [i_6] [i_13] [i_13] [i_5] [i_5])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (short)9854))))));
                    }
                    var_46 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_25 [i_6] [i_11]))));
                    var_47 = ((unsigned int) arr_35 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 2] [i_6]);
                }
                for (unsigned int i_14 = 1; i_14 < 18; i_14 += 4) 
                {
                    var_48 = ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) * (3194453711U)));
                    var_49 = ((/* implicit */unsigned char) arr_42 [i_14] [i_6] [i_14]);
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        for (int i_16 = 1; i_16 < 18; i_16 += 3) 
                        {
                            {
                                var_50 = ((/* implicit */signed char) ((unsigned char) ((-3867648447476891606LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-32762))))));
                                var_51 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2269191549U)) / ((+(18446744073709551615ULL)))));
                                var_52 += ((/* implicit */signed char) ((((unsigned int) max((((/* implicit */unsigned long long int) 1757365625092674066LL)), (var_9)))) - (((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_16] [i_15] [i_5] [i_6] [i_5]))) : ((+(4074043132U)))))));
                                var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2269191541U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_16 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1])))))) : (max((((/* implicit */unsigned long long int) min((arr_14 [(unsigned char)10]), (((/* implicit */unsigned int) arr_31 [i_16] [i_14] [i_14] [i_14] [i_14] [i_5] [i_5]))))), (max((((/* implicit */unsigned long long int) arr_37 [i_5] [i_5] [i_14] [i_14] [i_16])), (arr_48 [i_5] [i_6] [i_14] [i_15])))))));
                            }
                        } 
                    } 
                }
                var_54 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_26 [i_6] [i_6 + 2] [i_5] [i_6 - 2])), ((+(((/* implicit */int) var_3))))))), (((max((arr_27 [i_5] [i_5] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) var_5)))) >> (((arr_16 [i_6 - 1]) - (1644010254U)))))));
            }
        } 
    } 
}
