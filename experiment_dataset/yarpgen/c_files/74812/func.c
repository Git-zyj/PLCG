/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74812
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
    var_13 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (var_9))), (((/* implicit */unsigned long long int) var_4))));
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7ULL))))), ((unsigned char)135)))), (8586947335896474471LL)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) var_7);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6878)) & (((/* implicit */int) (unsigned char)154))))) ? (((/* implicit */int) (unsigned char)114)) : ((+(((/* implicit */int) (unsigned short)6864))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_18 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((unsigned int) arr_2 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */short) (unsigned char)116);
                        arr_13 [i_1] [1LL] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_10 [i_1] [i_2] [i_3]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_5] = ((/* implicit */unsigned char) (~(var_0)));
                        var_20 += ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned char)181)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_7))));
                        var_22 = ((/* implicit */unsigned char) var_5);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_25 [i_1] [i_2] [i_3] [i_7 - 1] [1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_2] [(unsigned char)3] [(unsigned char)3] [i_7] [i_2]))) : (var_4)))) ? (((/* implicit */int) arr_12 [i_7 - 1] [i_7] [i_7 - 1] [6ULL] [i_7] [i_7])) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-122))) ? (((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned char)190)))) : (((/* implicit */int) (unsigned char)7))))));
                                var_23 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) ((_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((unsigned int) ((((/* implicit */unsigned int) var_7)) / (arr_11 [(unsigned short)4]))))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2])))))));
                    var_24 *= ((/* implicit */short) (~((+(((((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) + (1208428464)))))));
                    var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -228389751)) ? (max((((unsigned long long int) (unsigned char)72)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((+(((/* implicit */int) (unsigned char)150)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)43204)) : (((/* implicit */int) var_6)))))))));
                }
            } 
        } 
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_1]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned short)39562))))) : (2002338700U)))) ? (((((((/* implicit */_Bool) (unsigned short)6878)) ? (((/* implicit */unsigned long long int) 2149595487U)) : (15785973991149955121ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (short)3071))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)16)) + (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)6878))) ? (((((/* implicit */_Bool) (short)2997)) ? (((/* implicit */unsigned int) arr_29 [i_9] [i_9])) : (465115770U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_9] [i_9]))))))))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) (-(arr_29 [i_9] [i_9]))))));
        arr_30 [i_9] = ((/* implicit */unsigned long long int) (+(arr_1 [i_9] [i_9])));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_28 &= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) < (var_0)))), ((~(arr_1 [i_10] [i_10])))));
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */int) (unsigned char)111)) != (-219374442))), (((((/* implicit */unsigned long long int) 342434526902660705LL)) > (18446744073709551592ULL))))))) & (min((((unsigned long long int) arr_1 [i_10] [i_10])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))))))));
        var_30 = ((unsigned int) ((_Bool) (short)0));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_11 = 2; i_11 < 18; i_11 += 1) 
    {
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [0LL] [i_11])) ? (arr_1 [i_11 + 2] [i_11 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((452791249031191228LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))))))));
        arr_37 [i_11] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [5LL] [i_11 - 2])) ? ((((_Bool)1) ? (arr_35 [i_11]) : (4294967293U))) : (arr_1 [i_11 - 2] [i_11 - 1])));
        arr_38 [i_11] [i_11] = ((((/* implicit */_Bool) (+(465115770U)))) ? (arr_35 [i_11 - 1]) : (((((/* implicit */_Bool) arr_1 [i_11] [i_11])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
    }
    for (long long int i_12 = 2; i_12 < 19; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                for (long long int i_15 = 1; i_15 < 19; i_15 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)384)))))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min((arr_51 [i_15 - 1] [i_14]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_52 [i_12] [i_12] [i_14]))))))))));
                    }
                } 
            } 
        } 
        arr_54 [(unsigned short)0] |= ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_41 [i_12 - 1])) == (var_0))))) : (max((arr_41 [i_12 - 2]), (arr_41 [i_12 + 1]))));
        /* LoopSeq 4 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_35 = ((/* implicit */_Bool) (unsigned char)179);
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_55 [i_12 + 1] [i_12 - 1] [i_12 + 1]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_12 + 1] [i_12 - 1] [i_12 + 1])))))))))));
        }
        for (int i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            arr_60 [i_12] [i_12] = ((/* implicit */signed char) min((((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)206)))), ((short)27409)));
            arr_61 [14ULL] [14ULL] &= ((/* implicit */unsigned int) (signed char)-30);
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) max(((~(arr_51 [i_12 + 1] [i_12 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_12 + 1])) ? (((/* implicit */int) arr_52 [i_12] [3ULL] [i_12 - 1])) : (((/* implicit */int) (_Bool)1))))))))));
        }
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            arr_64 [i_12] = ((/* implicit */unsigned long long int) max((var_12), (arr_40 [i_12])));
            var_38 *= ((/* implicit */unsigned char) arr_44 [i_12] [i_18] [i_12]);
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                for (long long int i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    for (long long int i_21 = 2; i_21 < 18; i_21 += 4) 
                    {
                        {
                            var_39 -= ((/* implicit */signed char) max(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_0))))), (((/* implicit */unsigned long long int) var_3))));
                            arr_74 [i_12 - 1] [i_12 - 1] [i_19] [i_20] [i_21 - 1] [i_21] [i_20] |= ((/* implicit */unsigned long long int) ((((((_Bool) var_0)) ? (((/* implicit */long long int) min((((/* implicit */int) var_12)), (-1965371785)))) : ((+(-6069366664562019897LL))))) > (((/* implicit */long long int) ((int) 4294967294U)))));
                            arr_75 [9U] [i_12] [i_19] [i_12] [8ULL] = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)162)))) ^ (((/* implicit */int) var_5))));
                            var_40 *= ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_22 = 2; i_22 < 16; i_22 += 1) 
        {
            arr_78 [i_12] [i_22] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_73 [i_12] [i_12] [i_12] [i_12] [i_22])))));
            var_41 = ((((/* implicit */_Bool) ((signed char) arr_39 [i_12 + 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_12 - 2] [i_22 - 2] [i_22 - 2])) | (var_7)))) : (((((/* implicit */_Bool) arr_39 [i_12 - 2])) ? (arr_39 [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12 - 2] [i_22 - 1] [i_22 + 4]))))));
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 20; i_23 += 3) 
        {
            for (unsigned char i_24 = 3; i_24 < 19; i_24 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_25 = 0; i_25 < 20; i_25 += 1) 
                    {
                        for (int i_26 = 1; i_26 < 18; i_26 += 1) 
                        {
                            {
                                arr_87 [i_12] [i_23] [i_12] [i_25] [i_26] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-17))));
                                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((max((arr_62 [i_12]), (((/* implicit */unsigned long long int) (unsigned char)77)))) + (((/* implicit */unsigned long long int) arr_66 [16ULL] [16ULL]))))))))));
                            }
                        } 
                    } 
                    var_43 = ((unsigned int) 13U);
                }
            } 
        } 
        arr_88 [(unsigned short)6] &= ((((/* implicit */_Bool) (~(-15)))) ? (((/* implicit */unsigned int) arr_66 [i_12 - 2] [(unsigned char)12])) : (((unsigned int) arr_66 [i_12] [(_Bool)0])));
    }
    /* vectorizable */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        var_44 = ((/* implicit */unsigned long long int) (short)-27329);
        arr_93 [i_27] [i_27] = ((/* implicit */long long int) 1035797175U);
    }
}
