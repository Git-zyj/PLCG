/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60400
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) var_2);
                arr_6 [i_1] = min((arr_2 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)14))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */int) 4ULL);
                        arr_19 [i_2] = ((/* implicit */signed char) (+(2096851998)));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned short) (unsigned char)223)))));
                        var_19 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (max((18446744073709551612ULL), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : (var_7)))))), (((/* implicit */unsigned long long int) ((int) 3ULL)))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_12))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_21 += ((/* implicit */unsigned int) var_7);
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) (signed char)108))))) ? (min(((~(((/* implicit */int) var_8)))), (((int) 201272746)))) : (((/* implicit */int) var_4))));
            var_23 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_7 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)13), ((unsigned char)223))))) : (max((((/* implicit */long long int) (unsigned char)17)), (var_12))))));
        }
        var_24 *= (!(((/* implicit */_Bool) min(((~(18446744073709551614ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_22 [i_2] [i_2])), (var_12))))))));
    }
    for (long long int i_7 = 3; i_7 < 16; i_7 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) arr_24 [i_7] [i_7]);
        arr_25 [i_7] [i_7 - 2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((unsigned char) (short)(-32767 - 1))))))), (max((1080863910568919040LL), (((/* implicit */long long int) var_0))))));
    }
    for (long long int i_8 = 3; i_8 < 16; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(7)))), ((+(2405694557U)))))) ? (((((/* implicit */_Bool) var_3)) ? (min((1922295554673258383ULL), (((/* implicit */unsigned long long int) var_7)))) : (arr_26 [4ULL]))) : (min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) -2147483634)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_26 [(signed char)4])))))));
            var_27 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (signed char)-115))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)61)), (arr_24 [i_8 + 2] [i_8 + 2])))))))) & ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_14)) : (-1080863910568919040LL))))));
        }
        arr_31 [i_8] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) 13194139533312LL))), (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_6))))) : (min((((/* implicit */unsigned long long int) var_10)), (var_9)))))));
    }
    for (long long int i_10 = 3; i_10 < 16; i_10 += 3) /* same iter space */
    {
        var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_26 [4U]))) ? (((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (13194139533312LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_7))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                {
                    var_29 = ((/* implicit */_Bool) (+(var_12)));
                    var_30 = (+(140668768878592ULL));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            for (unsigned char i_14 = 3; i_14 < 17; i_14 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 1) 
                        {
                            var_31 &= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) (unsigned char)73))))) * (min((var_9), (((/* implicit */unsigned long long int) arr_28 [i_16] [i_14] [i_10 - 1])))))) ^ (((/* implicit */unsigned long long int) var_10))));
                            var_32 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_45 [i_10])), ((-(-1080863910568919044LL)))));
                            var_33 = var_11;
                            var_34 = ((((/* implicit */int) var_6)) > ((~(((/* implicit */int) var_4)))));
                            var_35 = ((/* implicit */int) (((+(max((((/* implicit */unsigned long long int) (_Bool)1)), (24ULL))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_10] [i_13] [i_14] [i_15] [i_16] [i_16])) ? (((long long int) -1137046351514602033LL)) : (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (unsigned char)154))));
                            var_37 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))) : (((unsigned int) var_11))))) : (((((/* implicit */_Bool) 1911968766)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            var_39 *= ((/* implicit */unsigned int) var_4);
                        }
                        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) /* same iter space */
                        {
                            var_40 -= ((/* implicit */short) (-(max((((/* implicit */long long int) (unsigned short)34745)), (max((var_12), (var_12)))))));
                            var_41 = ((/* implicit */long long int) (~(min((((/* implicit */int) (unsigned char)245)), (((((/* implicit */_Bool) arr_52 [i_19] [i_14] [15LL])) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_5))))))));
                            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((arr_50 [i_10 - 3] [i_15] [14U] [i_14 - 2] [i_14 - 3] [0ULL]) >= (((/* implicit */unsigned int) (+(((int) var_1))))))))));
                            var_43 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)213))));
                            var_44 = ((/* implicit */long long int) ((unsigned short) max((((unsigned int) 562949953421311ULL)), (((/* implicit */unsigned int) (signed char)104)))));
                        }
                        arr_59 [i_14] [i_13] [i_15] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (var_14)))), (((var_8) ? (((/* implicit */unsigned long long int) arr_28 [i_14 + 1] [i_14 - 3] [i_10 - 2])) : (var_11)))));
                        arr_60 [i_15] [1U] [i_10] [i_10] [10] [(unsigned short)14] = ((/* implicit */short) (-(1080863910568919040LL)));
                        var_45 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_5)))));
                        var_46 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
                    {
                        var_47 |= ((/* implicit */unsigned int) arr_52 [i_20] [i_20] [i_20]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
                        {
                            var_48 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_10] [i_10] [i_20] [i_14] [i_14] [i_20] [i_21]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_57 [i_10] [i_13] [i_20] [(short)6] [2U] [i_21] [i_21]))))) : (4294967276U)));
                            var_49 = ((unsigned int) var_2);
                        }
                        for (short i_22 = 0; i_22 < 18; i_22 += 4) 
                        {
                            arr_68 [(signed char)16] [(unsigned char)14] [(unsigned char)14] [i_20] [(unsigned char)0] [i_22] [i_20] |= ((/* implicit */_Bool) arr_23 [i_22]);
                            var_50 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (-8606274006552393078LL)))), (((((/* implicit */_Bool) -1080863910568919044LL)) ? (arr_39 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))))))));
                            var_51 = (+(var_13));
                            var_52 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (7492214524019426415ULL)))) ? (((((/* implicit */_Bool) 9U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8873592054542307919LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        }
                        for (short i_23 = 4; i_23 < 17; i_23 += 1) 
                        {
                            var_53 = ((/* implicit */unsigned char) max((5242271312752730843ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
                            var_54 = ((/* implicit */unsigned long long int) min(((-((+(2554751758309065329LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                            var_55 = ((/* implicit */unsigned short) ((long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))));
                            var_56 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) : (((unsigned long long int) (+(0U))))));
                        }
                        var_57 = ((/* implicit */unsigned char) 2394558835U);
                    }
                    for (unsigned short i_24 = 0; i_24 < 18; i_24 += 4) /* same iter space */
                    {
                        var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (4112981255U) : (1283855435U)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_33 [i_10 + 1] [i_14 - 1]))) : ((+(0ULL)))));
                        var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) 745925508U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (1073479680U))), (((/* implicit */unsigned int) (unsigned char)4)))))));
                    }
                    var_60 |= ((/* implicit */int) max((((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)32764))))), (((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) 15351037662733720433ULL))))))));
                    var_61 -= ((/* implicit */unsigned long long int) 4294967295U);
                    arr_74 [i_10] [(_Bool)1] [i_14] [i_13] = ((/* implicit */short) (-(var_11)));
                }
            } 
        } 
        var_62 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 4294967281U)) : (12561250555228674922ULL)))) ? (((/* implicit */int) arr_71 [i_10 + 2] [i_10])) : (((/* implicit */int) ((unsigned char) 1979090427330587576ULL)))))), (((((/* implicit */_Bool) -13194139533312LL)) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 10; i_25 += 3) 
    {
        for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 1) 
        {
            {
                var_63 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_55 [i_25] [i_26])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (long long int i_27 = 0; i_27 < 10; i_27 += 4) 
                {
                    for (unsigned short i_28 = 0; i_28 < 10; i_28 += 4) 
                    {
                        {
                            var_64 = ((/* implicit */_Bool) var_9);
                            var_65 = ((/* implicit */unsigned int) arr_14 [i_25] [i_26] [i_27] [i_28]);
                        }
                    } 
                } 
            }
        } 
    } 
}
