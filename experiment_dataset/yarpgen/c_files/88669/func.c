/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88669
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [5U] [i_1] = (+((~(((/* implicit */int) arr_3 [i_1])))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)631))) < (var_1)));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                            {
                                arr_13 [(short)6] [i_1] [i_1] [i_0] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_10)))) << (((arr_9 [i_2]) - (14217107837930350652ULL)))));
                                var_15 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8))), (((/* implicit */unsigned long long int) arr_6 [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 1])))) > (((unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4]))));
                                var_16 &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_2] [i_2 - 2] [i_2] [i_2])) + (((/* implicit */int) arr_12 [i_4] [i_4] [i_4 - 1] [i_2 + 1] [i_2] [i_2 + 3])))) + ((+(((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2 + 2] [i_2]))))));
                            }
                            for (long long int i_5 = 4; i_5 < 13; i_5 += 4) 
                            {
                                var_17 &= ((/* implicit */signed char) min((((/* implicit */int) max((arr_17 [i_2 - 1] [i_3] [i_2] [i_3] [i_3]), (arr_17 [i_2 - 1] [i_5] [i_5] [i_5] [i_5])))), (((((/* implicit */int) (signed char)-47)) % (((/* implicit */int) arr_17 [i_2 - 1] [i_3] [i_5] [i_5] [i_5]))))));
                                var_18 = ((/* implicit */short) min(((((~(var_2))) % (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-56)), (arr_14 [i_0] [i_0] [i_2] [i_3] [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_10)))))));
                                var_19 = ((/* implicit */short) arr_6 [(unsigned char)0] [i_1] [i_1] [i_1]);
                            }
                            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((((18446744073709551609ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) == (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_2])))))))) >= (arr_6 [i_0] [i_1] [i_2 + 2] [i_3]))))));
                                var_21 *= ((/* implicit */short) (+((+(((/* implicit */int) var_11))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))) && (((/* implicit */_Bool) min((var_9), (arr_11 [i_2 - 1]))))));
                                arr_21 [i_0] [i_1] [i_0] [i_3] [i_6] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) / (arr_14 [i_0] [2ULL] [i_0] [i_0] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_2])) < (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [11ULL] [7U]))))))))) ? (3040970183U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 - 1] [i_3] [i_6])) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)20)) * (((/* implicit */int) var_10)))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7]))))) != (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))), (1253997099U)))));
        var_24 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (((arr_9 [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    }
    for (long long int i_8 = 2; i_8 < 17; i_8 += 4) 
    {
        var_25 = ((/* implicit */signed char) min((max((max((((/* implicit */unsigned long long int) (_Bool)1)), (11603526733972746275ULL))), (((/* implicit */unsigned long long int) (~(arr_26 [i_8] [i_8])))))), (((/* implicit */unsigned long long int) arr_25 [i_8 - 1] [i_8 - 1]))));
        arr_27 [i_8] [i_8] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8 + 1] [i_8])) ? (arr_26 [i_8] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_25 [i_8] [7ULL]))) != (((((/* implicit */_Bool) arr_26 [i_8 + 1] [i_8 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_25 [i_8] [i_8]))) : (arr_25 [i_8 - 1] [i_8])))));
        var_26 = ((/* implicit */_Bool) 10102503956220696611ULL);
        arr_28 [i_8] |= ((unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_26 [(signed char)3] [i_8])) : (var_12))) ^ ((+(arr_24 [i_8 - 2] [i_8])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_27 = min((min((((10794634133050319652ULL) ^ (((/* implicit */unsigned long long int) arr_29 [i_8] [i_9] [i_8 - 1])))), (((((/* implicit */_Bool) (unsigned char)71)) ? (var_8) : (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) max((max((var_13), (((/* implicit */unsigned char) var_6)))), (((/* implicit */unsigned char) var_11))))));
            var_28 += ((/* implicit */signed char) max(((~(arr_24 [(signed char)6] [i_8 + 1]))), (((((/* implicit */_Bool) arr_24 [i_8] [i_8 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_24 [i_8] [i_8 - 1])))));
        }
    }
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_29 |= arr_39 [(_Bool)0] [(_Bool)0];
                        var_30 *= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) max((arr_36 [i_10] [i_10]), (((/* implicit */long long int) arr_31 [i_10] [18U]))))), (arr_42 [i_10] [10U] [i_10]))) & (((((/* implicit */_Bool) arr_31 [i_13] [i_11])) ? (min((((/* implicit */unsigned long long int) (signed char)25)), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_15 = 1; i_15 < 20; i_15 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) arr_39 [(unsigned char)10] [(unsigned char)10]);
                            arr_48 [i_12] [10] [i_12] &= ((/* implicit */short) ((max((((((/* implicit */unsigned long long int) arr_36 [i_14] [i_15])) ^ (arr_40 [i_15] [i_14] [i_14] [i_12] [i_11] [i_10]))), (((/* implicit */unsigned long long int) max(((signed char)-116), ((signed char)51)))))) & (((/* implicit */unsigned long long int) var_1))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */int) ((signed char) (short)32747))) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_10]))) / (var_1))) - (1U)))))), (((arr_46 [i_10] [i_10] [i_10]) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) arr_42 [i_10] [i_10] [i_16]))))))))));
                            arr_53 [i_14] [8] [i_14] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [13U] [13U] [6ULL] [i_11] [(unsigned char)17] [i_14])) ? ((~(1813801524685942694LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_47 [i_14] [(unsigned char)10] [i_12] [i_14] [i_16] [i_12])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (arr_36 [i_16] [i_14]))))));
                            var_33 = ((/* implicit */long long int) ((((arr_41 [i_11] [i_11] [i_12]) >> (((((/* implicit */int) arr_34 [i_10])) - (27815))))) + (((/* implicit */unsigned long long int) arr_49 [i_14] [i_14] [i_12] [i_11] [i_14]))));
                        }
                        var_34 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (10039221743389243751ULL) : (var_12))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10]))) : (arr_43 [i_10] [i_12] [i_11] [i_11] [i_10] [i_10])))))) ? (((/* implicit */int) ((arr_51 [i_10] [i_11] [i_12] [i_14] [i_11]) >= (arr_51 [i_10] [i_10] [i_10] [i_10] [i_11])))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_50 [i_10] [i_10] [i_12] [i_10] [i_14] [i_11])) : (((/* implicit */int) var_11)))), (((/* implicit */int) min(((short)-32740), (((/* implicit */short) var_5)))))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 21; i_18 += 2) 
                        {
                            arr_58 [i_18] [i_17] [i_12] [i_11] [(short)18] [i_10] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((430678568U), (((/* implicit */unsigned int) var_7))))), (3509451399643376058LL)));
                            var_35 = ((/* implicit */short) ((((((/* implicit */int) arr_34 [i_10])) - (((/* implicit */int) arr_34 [i_18])))) >= ((~(((/* implicit */int) (unsigned short)60771))))));
                            var_36 = ((/* implicit */short) min((((((/* implicit */int) arr_32 [12ULL])) * (((/* implicit */int) arr_32 [i_10])))), (((/* implicit */int) ((signed char) arr_32 [i_18])))));
                            arr_59 [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_10] [i_11] [i_12] [i_17] [i_18]))) ^ (arr_38 [i_10] [i_10] [i_10] [i_10]))), (((((/* implicit */_Bool) arr_55 [i_10] [i_11] [i_12] [i_17] [i_18])) ? (arr_38 [i_11] [i_12] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_10] [i_11] [i_12] [i_17] [i_18])))))));
                        }
                        var_37 = ((/* implicit */int) (~(max((arr_36 [i_12] [i_17]), (arr_36 [i_10] [i_11])))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
                    {
                        arr_62 [i_19] [i_12] [i_11] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-70)) ? (min((((/* implicit */unsigned long long int) ((arr_41 [i_19] [i_12] [i_10]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */unsigned long long int) var_11)), (var_12))))) : (((/* implicit */unsigned long long int) ((((-3710045283928170347LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)32))))) / (((/* implicit */long long int) min((((/* implicit */int) arr_31 [i_10] [i_10])), (arr_56 [i_10] [i_10])))))))));
                        arr_63 [i_10] [i_10] [i_12] [i_10] [i_19] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-33))));
                    }
                    var_38 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_4)) ? (arr_52 [i_12] [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_11))))))) & (((arr_42 [i_10] [i_11] [i_12]) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [15]))) * (arr_44 [i_10] [i_11] [i_10] [i_10]))))))));
                }
            } 
        } 
    } 
}
