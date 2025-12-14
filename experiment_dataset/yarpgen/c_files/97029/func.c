/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97029
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] |= ((/* implicit */int) (!(((/* implicit */_Bool) min((((unsigned short) (unsigned short)56176)), (((/* implicit */unsigned short) ((signed char) -1355461534))))))));
                            var_17 = ((var_15) & (((/* implicit */unsigned long long int) 1136734167)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) var_0)), (((unsigned short) arr_0 [i_1]))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_6)) * (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) : (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) : (5044513105142575477ULL))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_20 = ((/* implicit */signed char) arr_4 [i_4] [i_4]);
        var_21 *= ((/* implicit */signed char) ((((/* implicit */int) var_1)) * ((-(((((/* implicit */_Bool) 9180055825029767954LL)) ? (var_6) : (((/* implicit */int) var_1))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) 1406686186);
            var_23 = ((/* implicit */unsigned long long int) 2728056091U);
        }
        /* vectorizable */
        for (unsigned short i_6 = 4; i_6 < 19; i_6 += 2) /* same iter space */
        {
            var_24 = ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (short)27884)) : (((/* implicit */int) (unsigned short)0)));
            arr_20 [i_4] = ((/* implicit */int) arr_11 [i_6] [i_6]);
            var_25 = ((/* implicit */int) ((long long int) arr_17 [i_4] [i_4]));
            var_26 += ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6])) % (((/* implicit */int) arr_17 [i_6] [i_6]))));
            var_27 = ((/* implicit */unsigned short) (+(((unsigned long long int) var_9))));
        }
        for (unsigned short i_7 = 4; i_7 < 19; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
            {
                arr_27 [i_8] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_16 [i_8] [i_7 - 2])) : (((arr_1 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)104))))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(17906245450676721359ULL)))) ? (((((/* implicit */_Bool) 540498623032830257ULL)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (unsigned short)35289)))) : (((/* implicit */int) (signed char)-66))));
                var_29 += ((/* implicit */long long int) min((((/* implicit */int) (short)14)), (max((((var_8) % (((/* implicit */int) arr_14 [(_Bool)1])))), ((~(((/* implicit */int) (signed char)87))))))));
                arr_28 [i_4] [i_8] [i_8] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */int) arr_19 [(_Bool)1])) : (((/* implicit */int) ((var_6) < (((/* implicit */int) (signed char)0)))))))) % (arr_21 [i_4] [(unsigned short)18]));
                var_30 ^= ((/* implicit */short) ((long long int) ((((var_7) == (((/* implicit */unsigned int) var_5)))) ? (((unsigned int) var_14)) : (((((/* implicit */_Bool) (short)-15418)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (var_14))))));
            }
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
            {
                arr_31 [i_4] [i_4] [i_9] [i_9] = ((/* implicit */signed char) (-((+(arr_7 [i_9] [i_9] [i_9] [i_7 - 4])))));
                arr_32 [i_4] [i_7] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_15), (var_16)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_15 [i_4]))))) : (((((/* implicit */_Bool) var_16)) ? (arr_4 [i_4] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))))))) - (var_2)));
                arr_33 [i_7 - 2] [i_9] [i_9] [i_7 - 2] = ((/* implicit */long long int) arr_29 [i_7] [i_9] [i_4]);
            }
            var_31 = arr_7 [i_7] [i_4] [i_7] [i_7];
        }
        /* vectorizable */
        for (unsigned short i_10 = 4; i_10 < 19; i_10 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                arr_40 [i_10] [i_10] [(_Bool)1] [i_10] |= 3046760546U;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_10 - 4] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10 - 4] [i_11] [i_10]))) : (var_9)));
                            arr_47 [i_12] [i_11] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)35289)))) + (2147483647))) << (((((((/* implicit */int) arr_17 [i_13] [i_4])) % (((/* implicit */int) (unsigned short)35264)))) - (10060)))));
                            arr_48 [i_4] [i_10] [i_11] [i_12] [i_4] [i_11] = ((/* implicit */int) ((var_2) % (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (-580101719))))));
                            arr_49 [i_4] [(signed char)3] [i_11] [i_11] [i_13] = ((/* implicit */signed char) var_14);
                            arr_50 [i_13] [i_10] [i_13] &= ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                arr_51 [i_4] [i_11] [i_4] [i_11] = ((/* implicit */signed char) (unsigned short)0);
                arr_52 [i_11] [i_10] [i_11] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17906245450676721359ULL)) ? (9548432572184404885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65)))))));
            }
            for (int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 2; i_15 < 19; i_15 += 2) 
                {
                    for (int i_16 = 2; i_16 < 19; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) ((unsigned char) arr_41 [i_16 + 1] [i_16] [i_10 - 1] [i_10 + 1] [i_10] [6LL]));
                            var_34 -= ((/* implicit */unsigned int) -1926389406);
                            var_35 = ((/* implicit */short) min((var_35), (var_10)));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                arr_60 [i_14] = ((/* implicit */unsigned int) var_3);
            }
            arr_61 [i_4] [(signed char)20] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */int) (signed char)66))))) ? ((+(-16085690))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_30 [i_10]))))));
        }
    }
    for (int i_17 = 2; i_17 < 14; i_17 += 2) 
    {
        var_37 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_55 [i_17 - 1] [i_17 - 1] [i_17 - 1])), ((unsigned short)34787))))));
        var_38 = ((/* implicit */unsigned int) arr_54 [i_17] [i_17]);
    }
    /* LoopNest 3 */
    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
    {
        for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 2) 
                        {
                            {
                                arr_80 [0ULL] [i_18] [i_19] [i_20] [i_21] [0ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_18] [i_19] [i_20] [i_22]))))) % (((((/* implicit */_Bool) arr_54 [i_20] [i_21])) ? (((var_11) >> (((var_9) - (1174490556464570009LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_19] [i_19] [i_20] [i_20] [i_22])))))));
                                var_39 ^= ((((((arr_70 [i_18] [i_18] [i_18] [i_18]) + (2147483647))) >> (((arr_43 [i_21] [i_21] [i_22] [i_22] [i_22]) - (1077426846))))) / (((/* implicit */int) min((var_10), (((/* implicit */short) var_4))))));
                                var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((17906245450676721359ULL), (((/* implicit */unsigned long long int) (short)-11))))) ? (((/* implicit */int) min((arr_64 [i_18] [i_19]), (arr_64 [i_18] [i_21])))) : (((/* implicit */int) arr_64 [i_19] [i_20]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_23 = 2; i_23 < 21; i_23 += 3) 
                    {
                        for (int i_24 = 3; i_24 < 20; i_24 += 3) 
                        {
                            {
                                arr_86 [i_18] [i_18] [i_18] [i_19] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_19])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [i_19]))))) ? (((((/* implicit */_Bool) arr_0 [i_19])) ? (((/* implicit */int) arr_0 [i_19])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) min((arr_0 [i_19]), (arr_0 [i_19]))))));
                                arr_87 [i_19] [i_19] = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (max((arr_41 [i_24 - 1] [20LL] [i_18] [i_20] [i_19] [i_18]), (((/* implicit */unsigned long long int) var_1)))))));
                                arr_88 [i_20] [i_20] [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_23 - 1] [i_23 - 1]))) : (var_2))) + (max((((/* implicit */long long int) arr_38 [i_23 - 1] [i_19] [i_23 - 2] [i_24 - 1])), (var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
