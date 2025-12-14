/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7103
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
    var_14 = ((/* implicit */unsigned int) var_13);
    var_15 = ((/* implicit */unsigned int) (-(-817902213)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((((/* implicit */int) var_0)), ((~(var_6)))));
        var_17 = ((/* implicit */long long int) (+(((arr_0 [i_0]) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-1518))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */long long int) var_7)) < (var_1)))))) <= (((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_2])))) ? (((/* implicit */int) min(((unsigned char)8), (arr_8 [16LL] [i_0] [i_2] [16LL] [i_2] [16LL])))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_1 + 2] [i_0]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) (short)-23779))) / ((-9223372036854775807LL - 1LL)))), (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (-3LL) : (((/* implicit */long long int) 2336868006U))))) ? ((~(((/* implicit */int) (short)5533)))) : (((/* implicit */int) (short)7)))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) * ((+(((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (unsigned char)181)) : (-609586396)))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) ((((_Bool) 2305807824841605120LL)) ? (((/* implicit */int) ((9) < (((/* implicit */int) ((var_12) != (((/* implicit */int) (short)-27600)))))))) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_13))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 + 2] = (-(((/* implicit */int) var_13)));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (short)2047)))))));
                            arr_22 [i_0] [i_0] [18U] [i_3 - 2] [i_2] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */unsigned int) var_6)) : (4294967292U))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_0] [1U] [21] = ((/* implicit */_Bool) (~(arr_11 [6] [i_1] [i_2] [i_3 - 2] [i_3 - 2])));
                            var_23 = ((/* implicit */unsigned char) (+((~((-(((/* implicit */int) var_13))))))));
                        }
                        arr_28 [19LL] [19LL] [19LL] [i_2] [19LL] [i_0] = min((((unsigned int) (unsigned char)6)), ((-(0U))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 9173058567785022679LL)) || (((/* implicit */_Bool) 6870922657877513632LL)))), (((((/* implicit */int) (short)32754)) <= (((/* implicit */int) (unsigned char)236))))));
                arr_32 [i_0] [i_0] [i_0] [i_0] = max(((((~(arr_23 [i_0] [13LL] [i_0] [i_1 + 1] [(unsigned char)8] [i_8] [i_8]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (4294967287U));
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                {
                    arr_36 [i_0] [i_0] [i_0] = max((0U), (min(((~(33554430U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))));
                    arr_37 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)-23150)) ? (((/* implicit */int) (unsigned char)164)) : (746289743))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (arr_4 [i_1 + 2] [i_0] [i_9]))) - (990730239U)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)-23150)) ? (((/* implicit */int) (unsigned char)164)) : (746289743))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) << (((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (arr_4 [i_1 + 2] [i_0] [i_9]))) - (990730239U))) - (1903177407U))))));
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-6162881839930782460LL) < (8284513755719040362LL))))) : (((((/* implicit */_Bool) var_12)) ? (arr_29 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    var_26 = ((unsigned char) min((var_6), (((/* implicit */int) var_0))));
                }
                for (short i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    arr_40 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-4675)) ? (4294967295U) : (1042472170U)))));
                    var_27 = ((/* implicit */short) (~(((/* implicit */int) (short)32148))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */unsigned int) var_0))))) ? (2321296840544325392LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned char)13] [21LL] [i_8] [(unsigned char)13] [(unsigned char)13])))));
                    var_29 = ((/* implicit */unsigned int) (unsigned char)181);
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (58720256U) : ((+(arr_4 [5] [i_0] [i_8])))));
                    var_31 = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
                    arr_45 [i_0] [i_11] = ((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_1] [21LL]);
                    /* LoopSeq 4 */
                    for (unsigned char i_12 = 2; i_12 < 21; i_12 += 4) /* same iter space */
                    {
                        arr_50 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_0] [i_0] [i_8] [i_0] [i_0])) * (((/* implicit */int) arr_46 [i_0] [i_1] [i_0] [i_11] [i_11]))));
                        var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) (unsigned char)190)))) : ((+(((/* implicit */int) var_3))))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 21; i_13 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) var_6);
                        arr_54 [i_0] [i_1] [i_0] [i_11] [i_13] = ((/* implicit */unsigned char) ((long long int) arr_48 [i_0] [i_0] [i_1] [i_1] [i_1] [i_11] [i_13]));
                        var_34 = var_11;
                        var_35 += ((/* implicit */long long int) (-(1203398001U)));
                    }
                    for (unsigned char i_14 = 2; i_14 < 21; i_14 += 4) /* same iter space */
                    {
                        arr_57 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        arr_58 [i_8] [i_0] [21U] [21U] [i_8] [21U] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) -794154719)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10267)))));
                        var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)16))));
                    }
                    for (short i_15 = 2; i_15 < 20; i_15 += 2) 
                    {
                        var_37 = ((/* implicit */short) max((var_37), (((short) arr_41 [i_1 + 1] [i_15 - 2] [16U]))));
                        var_38 = ((/* implicit */unsigned int) var_8);
                        var_39 = ((/* implicit */short) var_13);
                    }
                }
            }
            for (short i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                var_40 = ((/* implicit */long long int) min((var_40), (((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1015224552)) ? (var_5) : (((/* implicit */unsigned int) 3932160))))) / (max((((/* implicit */long long int) (_Bool)1)), (arr_49 [18U] [18U]))))))));
                var_41 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
            }
            for (long long int i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                var_42 = ((/* implicit */long long int) max(((((-(arr_14 [i_0] [i_0] [i_1] [i_0] [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)27918))))), ((+(var_5)))));
                var_43 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)2374))) / (arr_14 [i_0] [i_1 + 1] [i_17] [i_0] [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            }
            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) ((int) 9223372036854775807LL)))));
            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (~(4294967294U))))));
        }
        for (unsigned int i_18 = 1; i_18 < 18; i_18 += 1) /* same iter space */
        {
            var_46 |= ((((/* implicit */long long int) arr_65 [18LL])) ^ ((~(arr_61 [i_0]))));
            var_47 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) min((min((((/* implicit */int) (_Bool)1)), (var_6))), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) arr_35 [i_18 + 3] [i_18 + 4] [i_18 + 1] [i_18 + 2])) + (-4658422530188698255LL)))));
            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_8 [i_18] [16U] [i_18 + 1] [(unsigned char)6] [i_18] [i_18]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [(short)10] [i_0] [i_0] [i_18 + 2] [(unsigned char)2] [i_0] [(unsigned char)18])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0] [(unsigned char)8] [i_18] [i_18 - 1]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [(short)14] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)1)))))))))));
            var_49 = ((/* implicit */long long int) (!(((-8181502809303892963LL) > (((/* implicit */long long int) arr_47 [i_18 - 1] [i_18 + 3] [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (short i_19 = 0; i_19 < 22; i_19 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                {
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */long long int) (short)9403);
                            var_51 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (3454734230U)))));
                        }
                    } 
                } 
                arr_83 [i_0] [i_0] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */int) arr_41 [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned char)255))));
            }
            for (unsigned char i_23 = 0; i_23 < 22; i_23 += 4) 
            {
                var_52 = ((/* implicit */unsigned char) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_23] [i_0] [i_0] [i_0])))));
                var_53 = ((/* implicit */unsigned char) (+(((long long int) var_10))));
            }
            var_54 += ((/* implicit */unsigned int) ((((/* implicit */int) (short)31182)) * (((/* implicit */int) (unsigned char)0))));
        }
    }
}
