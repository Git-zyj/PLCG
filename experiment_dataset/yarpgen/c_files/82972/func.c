/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82972
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), ((-(arr_6 [i_0 + 1] [(short)4] [8ULL])))));
                            arr_14 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) arr_2 [i_4]);
                            arr_15 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1] = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_20 [i_1 + 1] [i_1] [i_1 + 1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) 3412778499U);
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3412778515U)) ? (3412778515U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [(unsigned short)0] [i_1 + 2])))))) ? (((/* implicit */unsigned long long int) arr_19 [i_1 + 2] [i_6] [(_Bool)1] [i_6])) : (18446744073709551615ULL))))));
                    var_18 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_19 [i_0 + 1] [i_1] [(_Bool)1] [i_0 + 1])))) == (arr_11 [i_0 - 1] [i_0 - 1] [i_5] [i_6] [i_1])));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((3412778480U) / (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_0))))))))));
                    arr_23 [i_1] [(_Bool)1] [i_1] [i_1] = var_7;
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_5]))) : (((unsigned long long int) arr_1 [i_0])))))));
                    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_15)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */int) var_0);
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_4))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(arr_11 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 1]))))));
                    var_24 = ((/* implicit */unsigned short) ((arr_17 [i_0 - 1] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64493))) : (arr_2 [i_0 + 1])));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_13))));
                    arr_30 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1] [0ULL])) ? (arr_6 [i_1 + 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383)))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(2335058278341820406ULL))))));
                    arr_31 [i_0] [i_1] [i_1] [i_1] [i_5] [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) & (arr_6 [i_0 + 2] [i_1] [i_0]));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) arr_32 [i_1] [i_0] [i_1 - 1] [i_5] [i_1] [i_11 - 1]);
                            var_28 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16730581328076659492ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) <= (var_15));
                        }
                    } 
                } 
                arr_36 [i_1] = ((/* implicit */int) (-(arr_33 [i_1])));
            }
            for (short i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_12 [11] [11] [11] [i_0 + 2] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_14))));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (882188763U))))));
                var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 1] [(short)10] [i_1] [i_12]))))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_37 [(_Bool)1] [i_1] [i_12])))) : (((/* implicit */int) arr_3 [i_0 + 2] [i_1] [13U]))));
            }
            for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 1) 
            {
                arr_44 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) var_4));
                arr_45 [i_1] = ((/* implicit */_Bool) (unsigned char)60);
                arr_46 [i_0] [i_1] [i_13 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) - (var_12)));
            }
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (arr_34 [i_0] [i_0] [i_1] [i_1 + 1])));
            var_33 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
        }
        for (int i_14 = 3; i_14 < 18; i_14 += 1) 
        {
            var_34 *= ((/* implicit */_Bool) (+(882188776U)));
            var_35 = ((/* implicit */int) (+(4722036531371686824ULL)));
            var_36 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) (short)23921))));
            var_37 = ((/* implicit */int) max((var_37), ((((-(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_28 [i_0 + 1] [i_14 + 1] [(_Bool)0] [i_0 + 1] [i_14 - 1]))))));
        }
        for (unsigned int i_15 = 3; i_15 < 19; i_15 += 1) 
        {
            var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
            var_39 = ((/* implicit */unsigned long long int) -7917254104730867126LL);
            arr_53 [i_15] [i_15] = ((/* implicit */int) var_11);
            var_40 = ((/* implicit */unsigned long long int) max((var_40), ((-(arr_48 [(unsigned char)7])))));
        }
        arr_54 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? ((+(arr_25 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (14441746378053665257ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_16 = 1; i_16 < 20; i_16 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_17 = 3; i_17 < 18; i_17 += 1) 
        {
            for (unsigned int i_18 = 1; i_18 < 18; i_18 += 1) 
            {
                for (short i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    {
                        var_41 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * ((+((-9223372036854775807LL - 1LL)))))))));
                        arr_65 [i_16] [i_16] [i_19] [(short)11] = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_2)), (var_7)))))) ? (((/* implicit */int) (short)2105)) : ((~(((/* implicit */int) (_Bool)1))))));
                        var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-28894)) ? (65535) : (((/* implicit */int) (short)22544)))) & (((/* implicit */int) (!(arr_64 [i_18 + 3] [i_16 - 1] [i_16]))))));
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_63 [i_19] [i_19] [i_19] [(short)14])) ? ((((!(var_10))) ? (((arr_58 [i_17]) ^ (((/* implicit */unsigned long long int) var_14)))) : (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) var_5))));
        var_45 = ((min((((/* implicit */unsigned long long int) var_9)), ((-(arr_55 [i_16 + 1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_6)))))))));
        var_46 += ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-13411))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 1) 
    {
        var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) (-(((/* implicit */int) max((max((arr_39 [(unsigned short)18] [i_20] [i_20] [i_20]), (var_10))), ((!(((/* implicit */_Bool) var_7))))))))))));
        var_48 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -5020743270458064000LL)) ? (((/* implicit */int) arr_39 [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) (unsigned char)15)))) == (((/* implicit */int) arr_43 [i_20])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_10)), (arr_63 [i_20] [i_20] [i_20] [i_20]))) != (((/* implicit */unsigned long long int) var_2)))))) : (((((/* implicit */_Bool) 882188755U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13419))) : (16795220267398782687ULL)))));
    }
}
