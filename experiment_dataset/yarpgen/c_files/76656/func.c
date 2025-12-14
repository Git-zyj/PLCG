/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76656
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) min((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) & (arr_2 [i_0]))), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (_Bool)0))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */int) var_9)) & (((/* implicit */int) (_Bool)1)))))));
                            var_12 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((int) arr_10 [i_0] [i_1] [i_3] [i_4]))) : (18446744073709551615ULL)));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */unsigned short) 18446744073709551615ULL);
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned int) (_Bool)1);
                            var_16 = ((min((min((((/* implicit */long long int) (_Bool)1)), (arr_19 [i_1]))), (((/* implicit */long long int) ((arr_2 [i_7]) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_7] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_16 [i_0] [i_0] [(short)2]), (arr_16 [i_0] [i_1] [i_1])))) / (((/* implicit */int) arr_16 [i_0] [i_1] [i_5]))));
            }
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 3; i_9 < 24; i_9 += 1) 
            {
                var_18 &= ((/* implicit */unsigned short) (short)-9936);
                /* LoopSeq 2 */
                for (short i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_8 [i_8] [24ULL]))));
                    var_20 = ((/* implicit */signed char) arr_23 [i_0] [(unsigned short)7] [i_0] [i_9 - 3] [i_9 - 3]);
                }
                for (short i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    var_21 = ((/* implicit */short) ((var_7) < (((/* implicit */long long int) var_0))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) arr_2 [i_9 - 3]);
                        var_23 |= ((((/* implicit */_Bool) arr_33 [i_0] [i_8] [i_9 - 1] [i_12])) ? (arr_1 [i_9 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6388))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) arr_11 [i_9 - 1] [i_9] [i_8] [i_9 + 1] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_11 [i_9 - 2] [i_9] [i_8] [i_9 + 1] [i_9] [i_9 - 3]))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54317))) : (arr_14 [i_9 - 3] [i_9])));
                    }
                }
            }
            for (int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                var_26 |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-12)) != (((/* implicit */int) arr_13 [i_0] [i_8] [i_8] [(signed char)6] [i_13]))));
                var_27 = ((/* implicit */signed char) 2425822682U);
                var_28 = ((/* implicit */int) var_3);
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    for (long long int i_15 = 2; i_15 < 24; i_15 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) arr_21 [i_15 + 1] [(unsigned char)22] [i_15 + 1] [i_15 - 2] [i_15] [i_15 - 1]);
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (_Bool)1))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) | (var_7)));
                            var_32 = ((long long int) arr_0 [i_0]);
                        }
                    } 
                } 
                var_33 += ((/* implicit */unsigned long long int) ((unsigned short) arr_20 [i_0] [i_8] [i_13]));
            }
            var_34 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
            var_35 -= ((/* implicit */short) (unsigned char)199);
        }
        /* LoopSeq 2 */
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            var_36 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_34 [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_16] [i_16]))) : (0ULL))));
            var_37 -= (_Bool)1;
            /* LoopSeq 2 */
            for (int i_17 = 0; i_17 < 25; i_17 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((short) 1498152743159146765LL)))));
                            var_39 = ((/* implicit */unsigned int) 1ULL);
                            var_40 = ((/* implicit */short) arr_17 [i_0] [i_0] [i_17] [i_19]);
                            var_41 -= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0] [i_18] [i_17] [i_17])), (arr_19 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24576)) && (((/* implicit */_Bool) arr_41 [i_17] [i_17] [i_19]))))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_16] [i_0]))));
            }
            for (int i_20 = 0; i_20 < 25; i_20 += 4) /* same iter space */
            {
                var_43 -= ((/* implicit */unsigned char) min((((unsigned int) max((((/* implicit */unsigned short) var_5)), (var_9)))), (((/* implicit */unsigned int) max((min((arr_50 [i_20] [i_16] [i_16] [i_20]), (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)0)))))))));
                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (7065087541905786675ULL))), (((/* implicit */unsigned long long int) arr_20 [i_0] [17] [i_20])))))));
            }
        }
        for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 25; i_22 += 4) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_28 [i_0] [i_21] [i_22]))) ? (((/* implicit */int) arr_22 [i_0] [i_21] [i_22] [i_23] [15LL])) : (((int) arr_0 [(unsigned short)15]))))) * ((-(min((arr_0 [i_23]), (((/* implicit */unsigned int) (short)-9908)))))))))));
                        var_46 = ((/* implicit */int) 13256839576174879172ULL);
                    }
                } 
            } 
            var_47 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)-9908))) ? (((/* implicit */int) (unsigned short)24576)) : (min((((/* implicit */int) (unsigned short)58470)), ((-2147483647 - 1))))))) && ((_Bool)1)));
            var_48 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min(((short)-8027), (((/* implicit */short) arr_63 [i_0] [i_21]))))) ? (arr_54 [i_21] [i_0] [i_21] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12492))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_24 = 2; i_24 < 24; i_24 += 1) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    var_49 &= ((/* implicit */long long int) arr_24 [i_0] [i_0] [i_24] [i_25] [i_25] [i_25]);
                    var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_24] [i_25])) ^ ((~(((/* implicit */int) var_2)))))))));
                    var_51 += ((((/* implicit */int) max((var_1), (var_4)))) >> (((((/* implicit */int) arr_55 [i_25] [i_25] [i_24] [i_0])) - (72))));
                }
            } 
        } 
    }
    for (signed char i_26 = 1; i_26 < 14; i_26 += 4) 
    {
        var_52 = ((/* implicit */signed char) var_5);
        var_53 = ((/* implicit */int) ((((/* implicit */int) min((arr_28 [i_26 - 1] [i_26] [i_26]), (arr_28 [i_26 + 2] [i_26 + 2] [i_26 + 2])))) != (((/* implicit */int) (unsigned char)29))));
        var_54 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [(short)14] [(short)14] [(short)14]))) + (((min((18446744073709551613ULL), (((/* implicit */unsigned long long int) var_1)))) - (((/* implicit */unsigned long long int) arr_68 [4LL] [i_26 + 2] [10]))))));
        /* LoopNest 2 */
        for (int i_27 = 2; i_27 < 15; i_27 += 4) 
        {
            for (signed char i_28 = 0; i_28 < 16; i_28 += 3) 
            {
                {
                    var_55 = ((/* implicit */signed char) max((((long long int) var_7)), (((/* implicit */long long int) min((arr_52 [(unsigned short)5] [i_28] [i_28] [i_28]), (((/* implicit */unsigned int) var_8)))))));
                    /* LoopNest 2 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        for (unsigned long long int i_30 = 0; i_30 < 16; i_30 += 3) 
                        {
                            {
                                var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) var_4))));
                                var_57 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((long long int) arr_0 [i_29]))) ? (((/* implicit */unsigned long long int) max((arr_50 [i_27] [i_27] [i_28] [i_28]), (((/* implicit */int) (signed char)-115))))) : (3ULL))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_43 [i_27])) ? (2442733005U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_58 += ((/* implicit */short) ((((/* implicit */_Bool) ((18446744073709551613ULL) >> (((((/* implicit */int) arr_79 [i_27 - 1] [i_26 + 2] [i_28] [(short)5] [i_27])) - (62726)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_27] [(short)8]))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24590)) | (((/* implicit */int) (unsigned char)201))))) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) (short)-1405)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_32 = 0; i_32 < 16; i_32 += 1) 
                        {
                            var_59 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47472))) / (5170010797792543600LL))), (((/* implicit */long long int) min((var_3), (((/* implicit */short) arr_17 [i_26 - 1] [i_27 - 1] [i_28] [i_31])))))));
                            var_60 |= ((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)25832)) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) arr_9 [i_26] [i_26] [i_26] [i_27]))))));
                            var_61 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_28] [i_27 - 1] [i_27 - 1] [i_28])) : (((/* implicit */int) (unsigned short)18062))))), (arr_6 [i_28] [i_32]))))));
                        }
                        var_62 = ((/* implicit */unsigned char) arr_67 [i_26] [(unsigned char)8] [i_28] [i_31]);
                    }
                }
            } 
        } 
        var_63 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_78 [i_26])) ? (((/* implicit */int) arr_26 [(signed char)0])) : (((/* implicit */int) (_Bool)1))))), (arr_52 [(_Bool)1] [i_26] [i_26] [i_26 - 1])))) * ((~(arr_82 [i_26 - 1] [i_26 - 1])))));
    }
    var_64 = ((/* implicit */signed char) min((((min((((/* implicit */unsigned long long int) 882108462)), (var_6))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_2))));
}
