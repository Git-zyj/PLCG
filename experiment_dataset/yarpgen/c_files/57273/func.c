/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57273
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                var_18 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))), (min((arr_5 [i_1 + 1] [i_0] [i_1 + 3]), (var_0)))));
                var_19 = max((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((4294967295U) * (((/* implicit */unsigned int) 2147483136))))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10)))))));
            }
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (short)-32755))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) var_6))))) : (max((((/* implicit */long long int) var_1)), (var_15)))))));
            var_21 = ((/* implicit */int) var_8);
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                for (unsigned char i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_16 [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0)))))))));
                            var_22 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(var_0)))), (max((min((var_11), (((/* implicit */unsigned int) arr_6 [10] [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_11))))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_3] = ((/* implicit */unsigned short) var_7);
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) ((arr_2 [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) + (((/* implicit */int) (unsigned short)65512)))), (((((((/* implicit */int) arr_6 [i_0] [i_3])) << (((var_2) - (1281845368U))))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 2147483647)) != (var_8))) ? ((+(var_2))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_7])))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 3; i_8 < 11; i_8 += 2) 
            {
                var_23 -= (+(var_9));
                var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
                var_25 = ((/* implicit */unsigned int) (+(arr_20 [i_0] [i_8 - 1])));
                arr_26 [i_0 + 1] [i_0] [i_7] [10LL] &= (~(2147483643));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (unsigned short)65491))))) ? (((unsigned int) (signed char)117)) : (((/* implicit */unsigned int) ((arr_15 [i_0] [i_7] [7U] [5U] [3] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)65473)) : (((/* implicit */int) var_6)))))));
            }
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */int) var_15);
            var_28 = ((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_13 [i_0] [i_9] [i_9] [i_9])));
        }
        for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_11 = 3; i_11 < 9; i_11 += 3) 
            {
                var_29 = max((2031616U), (((/* implicit */unsigned int) (unsigned short)37)));
                arr_34 [i_0] [i_10] = ((/* implicit */signed char) var_13);
                var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [4LL] [i_10] [i_11])) ? ((+(arr_20 [2] [i_11 - 3]))) : (((/* implicit */long long int) var_14))));
            }
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 10U))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_17)) * (((/* implicit */int) var_13))))), ((+(arr_33 [i_0] [7U] [(_Bool)1]))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [i_0] [4U])) : (((/* implicit */int) arr_1 [i_0])))))))));
                arr_38 [i_10] [i_10] [i_0] [i_10] = ((/* implicit */unsigned long long int) (signed char)-99);
                /* LoopNest 2 */
                for (unsigned int i_13 = 4; i_13 < 8; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_44 [i_0] [i_10] [i_12] [i_0] [i_0] = ((/* implicit */unsigned short) max(((-2147483647 - 1)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (_Bool)0))))));
                            arr_45 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) / (var_7)))) ? (((/* implicit */int) ((_Bool) arr_40 [i_0] [i_12] [3U] [i_12]))) : (((/* implicit */int) ((unsigned char) 4294967291U)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (8191ULL))))) : (((((/* implicit */_Bool) min((arr_23 [i_0]), (((/* implicit */int) var_6))))) ? (((arr_41 [i_13] [i_13] [i_13] [i_13] [i_13]) * (((/* implicit */unsigned long long int) arr_22 [i_10] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
                            var_32 += ((/* implicit */long long int) (+(((arr_37 [7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 3] [(signed char)0] [i_14]))) : (var_11)))));
                            var_33 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [4LL] [4U])) * (((/* implicit */int) arr_43 [(_Bool)1] [8U] [8ULL] [i_13] [10] [i_14]))))) ? (var_11) : (((/* implicit */unsigned int) (-(2147483647)))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_36 [(short)0] [i_0 + 1] [i_13] [i_13 + 1])), (var_5))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 4; i_15 < 10; i_15 += 4) 
            {
                arr_50 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_3)), (arr_14 [i_0] [i_0 + 2] [i_0] [i_15 + 2] [8U] [3]))) < (((((/* implicit */_Bool) var_0)) ? (arr_14 [i_0] [i_0 + 1] [2U] [i_15 - 4] [(signed char)1] [i_10]) : (arr_19 [i_0])))));
                arr_51 [(unsigned short)11] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3U)))))));
            }
            arr_52 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) var_5));
            var_34 = ((/* implicit */short) var_16);
        }
    }
    for (unsigned char i_16 = 3; i_16 < 10; i_16 += 3) /* same iter space */
    {
        arr_55 [i_16] = ((/* implicit */unsigned short) var_9);
        /* LoopNest 2 */
        for (unsigned char i_17 = 2; i_17 < 10; i_17 += 4) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_63 [i_18] [i_17] [i_18] = ((/* implicit */unsigned int) var_12);
                    var_35 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_54 [i_17]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_16)))) : (min((var_4), (arr_31 [i_17] [i_18]))))), (((((((/* implicit */_Bool) arr_20 [i_18] [8])) ? (var_14) : (((/* implicit */unsigned int) -2147483632)))) >> (((((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) var_2)))) - (6476353022519572769ULL)))))));
                    var_36 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)25))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            for (unsigned int i_20 = 2; i_20 < 11; i_20 += 4) 
            {
                for (unsigned int i_21 = 2; i_21 < 9; i_21 += 1) 
                {
                    {
                        var_37 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483628)) ? (((/* implicit */int) (_Bool)1)) : (-2147483642)))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (unsigned short)65492)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)57344))))))));
                        arr_73 [i_21] = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_22 = 0; i_22 < 12; i_22 += 2) 
    {
        for (unsigned int i_23 = 0; i_23 < 12; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 12; i_24 += 4) 
            {
                {
                    var_38 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_22]), (2040U)))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)12))))), (5U)));
                    arr_82 [i_22] [(signed char)1] [(signed char)1] [i_22] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))) % (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_25 = 2; i_25 < 11; i_25 += 2) 
                    {
                        for (int i_26 = 2; i_26 < 11; i_26 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_9))))))))));
                                var_40 = ((/* implicit */signed char) arr_59 [i_23]);
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */unsigned int) arr_43 [i_22] [(signed char)4] [10LL] [i_22] [(signed char)4] [i_22]);
                    arr_88 [i_23] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_17)), (arr_77 [i_22] [i_22]))) + (max((((((/* implicit */_Bool) arr_74 [(signed char)5])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)128))))), (((/* implicit */unsigned int) var_5))))));
                }
            } 
        } 
    } 
    var_42 += ((long long int) var_4);
}
