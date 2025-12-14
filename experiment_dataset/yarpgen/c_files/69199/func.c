/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69199
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
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (short)32745)));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_23 -= var_9;
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (short)32734)) == (((/* implicit */int) (unsigned short)10887))));
                        var_25 = ((/* implicit */unsigned short) var_11);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_14 [i_0] [(unsigned short)0] [(unsigned short)14] [9] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_12 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_1 - 3] [i_1 - 1] [i_1 - 1] [(_Bool)1] [22U]))))));
                                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((0), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_4]))))), (((((/* implicit */_Bool) arr_9 [i_0] [(short)22] [i_2] [i_4] [i_5])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_1 + 2])))))))) ? ((+(((/* implicit */int) arr_8 [(_Bool)1] [(unsigned short)6] [i_1 - 2] [(unsigned short)6])))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_5] [i_5])) <= (((/* implicit */int) var_10)))))));
                                var_27 = ((/* implicit */long long int) arr_12 [i_0] [i_1 - 3] [(_Bool)1] [i_4] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            arr_19 [22] [22] [i_6] |= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(var_2))))))));
            var_28 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0] [(unsigned char)6])), ((short)8193)))) || (((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_18 [i_0] [0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_6 - 1] [i_0]))))))), (var_9)));
            var_29 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_0] [i_6])) : (((/* implicit */int) arr_11 [i_0] [i_6 + 3])))) & (((var_17) ? (((/* implicit */int) var_19)) : (var_14))))) & (((/* implicit */int) (unsigned short)0))));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_30 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_7] [i_0])) || (((/* implicit */_Bool) var_16))));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)8193)) : (((/* implicit */int) (short)-8193)))));
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (~(((/* implicit */int) ((short) var_17))))))));
                arr_26 [0] &= ((/* implicit */unsigned short) (-(1048576LL)));
            }
            for (int i_9 = 1; i_9 < 22; i_9 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                {
                    var_33 = var_17;
                    var_34 &= ((/* implicit */unsigned short) arr_27 [(_Bool)1]);
                }
                for (long long int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */signed char) arr_5 [i_9] [i_9] [(short)15] [i_0]);
                    var_36 |= ((/* implicit */unsigned int) (((!(arr_22 [i_0] [i_7] [i_9 + 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_11] [i_9 - 1] [i_7])) ? (((/* implicit */int) arr_31 [i_0] [(unsigned short)18] [i_7] [(_Bool)0] [i_0] [i_11])) : (((/* implicit */int) var_7))))) : (var_2)));
                    var_37 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)8178)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [13]))) : (var_2))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_9 - 1] [i_11] [i_11])))));
                    arr_35 [i_0] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_9] [i_9] [i_9 + 1] [i_9] [i_9])) + (((/* implicit */int) var_8))))) ? (((/* implicit */int) (short)-8193)) : (((/* implicit */int) var_12))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        var_38 &= arr_29 [i_0] [i_7] [i_9] [i_11];
                        var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_38 [i_11] [i_9] [(short)22] [6ULL])) ? (((/* implicit */int) arr_12 [i_0] [2ULL] [i_9] [(unsigned short)17] [i_12])) : (((/* implicit */int) var_0)))) - (((/* implicit */int) var_12))));
                        arr_39 [i_0] [i_7] [i_7] [i_11] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37639)) % (((/* implicit */int) (short)-32758))));
                    }
                    for (int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        var_40 &= ((/* implicit */unsigned int) var_5);
                        var_41 &= ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */int) arr_41 [i_0] [i_7] [i_0] [i_9] [i_11] [(_Bool)1] [i_9])) % (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [(unsigned short)12] [i_11] [i_0])))) : (((((/* implicit */int) arr_24 [i_7] [i_9] [i_9] [(unsigned short)5])) % (((/* implicit */int) var_12)))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 2) 
                    {
                        var_42 &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_40 [i_0] [i_7] [i_7] [i_9 - 1] [(_Bool)1] [i_11] [i_14])))))));
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (+(-1625184436)))) ? (18120389251695590814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023)))));
                        var_44 &= ((/* implicit */unsigned short) ((arr_6 [i_14 + 2]) ? (((unsigned int) arr_34 [i_11] [(unsigned short)17] [i_11])) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                    }
                }
                var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((7) / (((/* implicit */int) (short)-32758)))))));
            }
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_15 = 2; i_15 < 22; i_15 += 1) 
        {
            var_46 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2592976953854019134ULL)));
            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (+(8387584ULL))))));
            var_48 -= ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) ((unsigned short) arr_21 [11] [i_15] [i_0])))));
            /* LoopSeq 2 */
            for (short i_16 = 2; i_16 < 21; i_16 += 2) 
            {
                arr_49 [i_16] [i_15] [i_15 + 1] [2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_15 + 1] [i_0])) == (((/* implicit */int) arr_21 [i_0] [i_15] [(unsigned short)1]))));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) arr_28 [i_0] [i_18]))));
                            arr_57 [i_17] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_25 [i_18]))));
                            var_50 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)254)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32734)))))));
                        }
                    } 
                } 
                arr_58 [i_0] [i_0] [i_0] = ((((((/* implicit */int) var_19)) + (2147483647))) >> (((arr_2 [i_0] [(_Bool)1]) - (10604636290308564793ULL))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 23; i_21 += 3) 
                    {
                        {
                            arr_69 [i_15] [i_19] [i_21] = ((/* implicit */short) ((int) (+(var_15))));
                            var_51 |= ((/* implicit */unsigned short) arr_18 [i_0] [i_0]);
                        }
                    } 
                } 
                var_52 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_15 + 1]))));
            }
        }
        for (long long int i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            var_53 = ((min(((+(-833260532))), (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) + ((~(((/* implicit */int) arr_67 [(unsigned char)14] [i_0] [i_0] [i_0] [i_22])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 2) 
            {
                var_54 = ((/* implicit */unsigned long long int) arr_46 [i_0] [i_23] [i_23] [i_22]);
                var_55 = ((/* implicit */unsigned short) (~((+(min((((/* implicit */int) (unsigned short)52547)), (arr_29 [i_0] [i_22] [i_23] [(_Bool)1])))))));
            }
            var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) (unsigned short)4096))));
            var_57 = arr_17 [i_0] [i_22];
            /* LoopNest 2 */
            for (int i_24 = 3; i_24 < 21; i_24 += 1) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_26 = 0; i_26 < 23; i_26 += 3) 
                        {
                            var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_50 [i_0] [i_22] [i_24 - 3] [i_25] [i_22] [i_26]))))))));
                            var_59 -= ((/* implicit */int) ((arr_54 [i_26] [i_0] [i_0] [i_0]) <= (((/* implicit */long long int) ((((/* implicit */int) arr_66 [i_26] [i_25] [i_24 - 1] [i_22] [i_0])) >> (2U))))));
                            var_60 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967287U)))))));
                            var_61 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_60 [i_26] [i_24] [i_22])) ? (arr_60 [i_0] [i_0] [i_25]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        var_62 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)149))))));
                        var_63 |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (min((arr_37 [(unsigned short)18] [i_24 - 1] [i_25] [i_25] [i_25] [i_25]), (((/* implicit */long long int) (~(var_18)))))) : (((/* implicit */long long int) ((int) (short)16384)))));
                    }
                } 
            } 
        }
        var_64 &= ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)28))))));
    }
}
