/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69675
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
    var_10 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */int) var_8)) : (arr_5 [i_1])))) < (max((((/* implicit */unsigned long long int) var_4)), (arr_0 [5])))));
                arr_6 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [i_1 + 1])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) -771773344)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))));
                        var_13 = ((/* implicit */signed char) (!((_Bool)0)));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_14 &= ((signed char) (+(((/* implicit */int) arr_16 [i_4] [i_1] [i_1 - 2] [i_1 - 1] [1ULL] [i_1 + 1] [i_1 - 2]))));
                            var_15 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_7 [i_2] [i_4] [i_2])))) ? (min((var_6), (((/* implicit */unsigned long long int) (unsigned char)251)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-69)) || (((/* implicit */_Bool) (signed char)-69)))))))));
                        }
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */unsigned long long int) arr_17 [i_2] [i_1])) / (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2])) ? (arr_17 [i_2] [i_1 - 1]) : (((/* implicit */int) (signed char)-55)))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) == (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (_Bool)1)) : (8))))))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (12873018489088537712ULL)))) ? (((var_2) ? (var_9) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((var_7) - (var_7))))))));
                        arr_18 [i_0] [i_2] [(short)6] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_1 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-4797))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_1] [i_1] [i_1 + 2])))))));
                    }
                    var_18 -= ((/* implicit */unsigned char) var_4);
                    arr_19 [(signed char)2] [i_2] [i_1] [0U] = ((/* implicit */short) min((((((var_2) && (((/* implicit */_Bool) var_9)))) ? (12873018489088537693ULL) : (min((((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_2])), (2365075640056018002ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)162)))))));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 2; i_6 < 7; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (4294967295U))) ? (((long long int) ((unsigned short) var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5573725584621013904ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_1 + 2] [i_2] [4LL])))))));
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) : ((((_Bool)0) ? (max((((/* implicit */unsigned long long int) var_7)), (var_6))) : (var_6)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 4; i_8 < 9; i_8 += 3) 
                        {
                            var_21 ^= ((/* implicit */unsigned short) ((_Bool) ((int) (unsigned char)15)));
                            var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (-(18010545028693560348ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1222919280U)))))) : (min((((/* implicit */unsigned long long int) var_3)), (var_6))))));
                        }
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((-1) % (((/* implicit */int) (unsigned char)127)))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_22 [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) (unsigned char)228))))) ? (var_9) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (short)-4797))))) : (12873018489088537680ULL)))));
                        arr_30 [0ULL] &= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (arr_8 [i_0] [(_Bool)1] [i_2] [i_7]))) == (arr_29 [(short)0] [(short)0])));
                        arr_31 [i_1 - 3] [i_2] [i_2] = ((/* implicit */unsigned char) var_6);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) ((unsigned int) (signed char)-51)))), (((((/* implicit */_Bool) 2238128827155599719LL)) ? (((/* implicit */int) (short)-29176)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (500323147) : (((/* implicit */int) (unsigned char)125))))))));
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2238128827155599712LL)) ? (((/* implicit */int) (short)-26682)) : (-116644567))))));
                        var_27 -= ((/* implicit */unsigned char) ((unsigned long long int) ((short) arr_32 [i_0] [i_0] [i_0] [i_0] [(signed char)4])));
                    }
                    arr_34 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (+(arr_2 [i_0])))))));
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 8; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 3; i_11 < 8; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_42 [i_0] [i_10] [i_10 - 1] [i_10] [i_10] [i_11 - 1] [i_1] = ((/* implicit */unsigned short) var_7);
                                arr_43 [i_10] [i_1] [i_1] [i_11] [i_11 + 2] = ((/* implicit */short) arr_23 [i_0] [i_1] [(_Bool)1] [i_11 + 1] [i_12]);
                                arr_44 [i_0] [i_1] [i_0] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-123)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) 3041514388730650043ULL);
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) ^ (arr_8 [i_1] [i_10] [i_1] [i_13 - 1])));
                            arr_50 [i_10] [i_10] [i_10] [i_13] [i_14] [i_14] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_7)) : (15405229684978901552ULL))))))));
                        }
                        arr_51 [i_0] [i_1 + 1] [i_10] [i_13] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_7)))));
                        arr_52 [(short)2] [(_Bool)0] [2U] |= ((/* implicit */unsigned char) ((arr_45 [i_13 + 1] [i_10 - 1]) + (var_6)));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_28 [i_10 + 1] [1ULL] [i_1 + 1] [i_13 + 1] [i_1])));
                    }
                    for (short i_15 = 2; i_15 < 9; i_15 += 3) 
                    {
                        var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 0U)) % (18446744073709551602ULL)));
                        arr_55 [i_10] [i_1] [7ULL] [1ULL] [i_0] [(signed char)2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1)))))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) arr_27 [i_15 - 1] [0] [i_0] [i_1 - 3] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (13ULL)))));
                        arr_56 [i_0] [i_1 + 1] [i_10] [i_15 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0] [8U])) / (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_10] [i_10] [i_15] [i_15 - 1] [(short)8]))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_34 += ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) | (633417383390125938LL)))));
                        arr_59 [i_10] [i_1 - 1] [4ULL] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_54 [i_10] [i_1] [i_1 + 2] [i_10] [7U])) | (((/* implicit */int) arr_54 [i_10] [i_0] [i_1 - 2] [i_1 - 2] [i_16]))));
                        var_35 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_0] [i_0] [i_10] [i_10] [i_16] [i_0])))));
                    }
                    for (long long int i_17 = 2; i_17 < 8; i_17 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1 + 2] [4ULL] [i_10] [i_1 + 2]))) == (arr_8 [i_17 - 1] [(_Bool)1] [(_Bool)1] [i_10]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            var_37 = ((/* implicit */long long int) ((_Bool) (~(var_6))));
                            var_38 *= ((/* implicit */unsigned char) (~(-576460752303423488LL)));
                            arr_65 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (+(arr_17 [(signed char)8] [i_1]))))));
                            arr_68 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_10] [i_1 - 1] [i_10] [i_19])) && (((/* implicit */_Bool) var_8)))))));
                        }
                    }
                }
            }
        } 
    } 
}
