/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76911
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(arr_0 [i_0] [i_0 + 2])));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) 2072765897U))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) ((signed char) var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (short)16384)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15))))))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 4; i_2 < 22; i_2 += 4) 
        {
            for (short i_3 = 3; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */unsigned long long int) (short)-16371);
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) + ((~(((/* implicit */int) (short)16384))))));
                        var_21 ^= ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_3 + 1]));
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) (!((_Bool)1)));
                        arr_20 [i_3] [(unsigned short)21] [(unsigned char)11] [13ULL] = ((/* implicit */unsigned short) arr_19 [i_3] [i_3] [i_3]);
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) > (var_6))))) : (arr_18 [13LL] [17] [i_3 - 1] [13LL])));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (((((_Bool)1) && (var_16))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                        var_25 = ((long long int) ((((/* implicit */_Bool) 67108863U)) && (((/* implicit */_Bool) var_8))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_19)) ? (((unsigned long long int) 6008261088954754767ULL)) : (((((/* implicit */_Bool) (short)16395)) ? (var_9) : (((/* implicit */unsigned long long int) -1842842350))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned char) (short)16384)))));
        }
        arr_23 [13LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        arr_27 [(unsigned short)1] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_7] [i_7]))));
        arr_28 [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (arr_26 [i_7] [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4227858434U) : (2074605743U)))))))));
        arr_29 [i_7] = (i_7 % 2 == zero) ? (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((((-(var_11))) + (9223372036854775807LL))) >> (((arr_11 [i_7] [i_7] [i_7] [11ULL]) + (717979017))))))))) : (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((((-(var_11))) + (9223372036854775807LL))) >> (((((arr_11 [i_7] [i_7] [i_7] [11ULL]) - (717979017))) - (1039332884)))))))));
    }
    for (short i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        arr_32 [i_8] = var_13;
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            for (long long int i_10 = 2; i_10 < 18; i_10 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 1; i_11 < 18; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 18; i_12 += 3) 
                        {
                            var_29 = ((/* implicit */long long int) var_14);
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_9 + 1] [i_11 + 2] [i_10 - 2])) ? (((/* implicit */unsigned long long int) arr_19 [i_9 - 1] [i_11 + 1] [i_10 - 1])) : (arr_41 [i_10 + 2] [17LL] [i_10 - 2]))))));
                            var_31 = ((/* implicit */unsigned short) ((int) var_3));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((short) 67108870U)))));
                            arr_43 [i_9] [i_9] [16] [i_9] = ((/* implicit */unsigned int) var_10);
                        }
                        /* vectorizable */
                        for (short i_13 = 3; i_13 < 18; i_13 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned short) 740533054U);
                            var_34 = (((!(((/* implicit */_Bool) arr_42 [(signed char)19])))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8))))));
                            var_35 = ((/* implicit */unsigned long long int) ((var_5) ? ((+(((/* implicit */int) (unsigned char)166)))) : ((-(((/* implicit */int) var_18))))));
                            var_36 = ((/* implicit */_Bool) arr_35 [2LL] [17U] [i_9] [i_11]);
                        }
                        for (signed char i_14 = 3; i_14 < 18; i_14 += 4) 
                        {
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) var_5))));
                            var_38 = ((/* implicit */unsigned int) min((((((-1583417003314202999LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26330))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3407113470U)))) : (-1583417003314202999LL))), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_19)), (arr_1 [i_10]))))))));
                            var_39 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [(_Bool)1]))) : (((740533056U) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) > (((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned char)29)) <= (((/* implicit */int) var_1))))))));
                            arr_48 [i_8] [(short)10] [i_8] [i_9] [i_10] [i_10 + 2] = ((/* implicit */short) var_2);
                        }
                        var_40 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) arr_33 [i_11 - 1])) ? (((/* implicit */int) (unsigned short)0)) : (538744580))))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
                        arr_49 [i_9] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) / (-981709935))) << (((((/* implicit */int) (unsigned char)192)) - (168))))) << (((/* implicit */int) ((((/* implicit */int) var_19)) > (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        var_41 *= (_Bool)0;
                        var_42 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_14))) / (((/* implicit */int) ((short) (_Bool)1)))));
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_8] [i_10 + 2] [i_10 + 2])) ^ (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_3)))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 19; i_16 += 3) 
                    {
                        for (int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned long long int) arr_9 [i_8]);
                                var_45 = ((/* implicit */unsigned int) max((var_45), (var_17)));
                            }
                        } 
                    } 
                    arr_58 [i_9 - 1] [i_9] = ((/* implicit */int) (~((-(((long long int) var_4))))));
                }
            } 
        } 
    }
    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 1) 
    {
        var_46 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))));
        arr_61 [i_18] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_12 [i_18] [10U] [i_18] [i_18])))))), (min((var_6), (((/* implicit */unsigned int) max(((_Bool)1), (var_14))))))));
        var_47 = ((/* implicit */long long int) 2740059896U);
        arr_62 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_19)), (((((/* implicit */_Bool) arr_41 [i_18] [i_18] [i_18])) ? (1842842350) : (arr_11 [i_18] [i_18] [i_18] [i_18])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_4))))), (max((3448117742251077024ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_18] [(short)7] [(unsigned char)14] [i_18] [(signed char)9])) ? (((/* implicit */int) var_7)) : (arr_44 [i_18] [i_18] [i_18] [4U] [i_18]))))));
    }
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 13; i_19 += 4) 
    {
        for (int i_20 = 3; i_20 < 12; i_20 += 4) 
        {
            for (long long int i_21 = 0; i_21 < 13; i_21 += 3) 
            {
                {
                    arr_69 [i_19] [i_19] [8] [i_20] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_12)))));
                    var_48 = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
    var_49 = ((/* implicit */int) min((var_6), (((/* implicit */unsigned int) var_3))));
}
