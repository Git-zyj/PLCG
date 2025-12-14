/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84240
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (+(((/* implicit */int) var_10)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (+(((/* implicit */int) var_4)))))));
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_13 = ((/* implicit */signed char) arr_14 [i_1] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) arr_14 [i_1] [(unsigned short)14] [i_3] [i_4]);
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_8 [i_1]) || (((/* implicit */_Bool) var_3))))) & ((+(((/* implicit */int) arr_5 [i_1]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_16 = ((((/* implicit */_Bool) (short)23925)) || (((/* implicit */_Bool) var_9)));
                    var_17 -= ((/* implicit */unsigned int) ((short) arr_6 [i_3] [i_3]));
                }
                for (signed char i_7 = 2; i_7 < 20; i_7 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        arr_26 [i_1] [i_2] [i_3] [i_7 + 1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7] [i_7 + 1] [i_8] [i_8] [i_8] [(signed char)7])) ? (((/* implicit */int) arr_17 [i_7] [i_7 - 2] [i_7 - 2] [i_8] [11LL])) : (((/* implicit */int) arr_17 [i_2] [i_7 - 1] [i_8] [i_8] [(unsigned char)15]))));
                        var_18 = (!(((/* implicit */_Bool) arr_12 [i_7 + 1] [i_7 - 2] [i_7 - 1])));
                        arr_27 [i_1] [i_1] [i_8] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((int) (short)-23925));
                        var_19 = ((/* implicit */unsigned long long int) arr_14 [7LL] [i_2] [i_2] [i_2]);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_7 + 1] [i_7 - 2] [i_7 - 1] [(_Bool)1])) : (((/* implicit */int) arr_22 [(signed char)8] [i_3] [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                    {
                        arr_30 [i_1] [i_9] [(unsigned short)0] [(signed char)13] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32750))) : (var_2)))) ? (var_9) : (((((/* implicit */_Bool) arr_28 [i_9] [i_2] [i_3] [i_2] [i_3])) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) var_10))))));
                        arr_31 [i_9] [i_9] [i_7] [i_9] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_7 + 1] [i_3] [i_7] [i_9] [i_9])) || (((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((arr_25 [i_7] [i_7] [i_7 - 1] [i_10] [14LL]) ? (((/* implicit */int) arr_25 [i_2] [i_3] [i_7 - 1] [i_7 - 2] [10ULL])) : (((/* implicit */int) arr_25 [i_7] [i_1] [i_7 - 1] [i_7 - 2] [i_7 - 1])))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_14 [i_7 - 2] [i_7 + 1] [(signed char)16] [i_7 - 1])))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                    {
                        arr_37 [i_11] [(unsigned short)14] [i_3] [(signed char)16] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) (short)28034))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [11ULL] [(unsigned char)0] [i_11] [i_1] [i_11])) ? (((((/* implicit */_Bool) arr_9 [(short)17])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [(unsigned char)2])))));
                        var_24 = ((/* implicit */_Bool) arr_32 [(_Bool)1] [(signed char)4] [i_11] [i_7 + 1] [i_11]);
                    }
                    arr_38 [(unsigned short)1] [i_2] [i_3] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [(signed char)20] [(signed char)20] [i_7 - 2] [i_7 - 1] [5LL])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_16 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 - 2]))));
                    arr_39 [i_3] [10LL] [(unsigned char)14] [i_7 + 1] = ((/* implicit */unsigned short) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_3] [i_1] [i_3] [(unsigned char)16] [i_7 - 2])))));
                }
                var_25 = ((/* implicit */unsigned char) (-((+(arr_20 [i_1] [i_1] [i_1] [i_3])))));
            }
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    arr_45 [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (signed char)111)));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_13])) ? (((/* implicit */int) arr_29 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1]))));
                        arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (short)-13612);
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_8))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_12] [i_2] [i_15] [i_15])) ? (var_9) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        arr_54 [i_1] [i_2] [i_12] [i_13] [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -1549096281)) : (18446744073709551615ULL)));
                        var_29 = ((/* implicit */_Bool) arr_42 [i_12] [i_12] [i_12] [i_12]);
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((short) arr_32 [(_Bool)1] [(_Bool)1] [i_12] [i_1] [i_15])))));
                    }
                    arr_55 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)17581)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)32761)) & (((/* implicit */int) (signed char)127))))) : (var_2)));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 1; i_16 < 20; i_16 += 2) 
                    {
                        arr_58 [i_1] [i_2] [i_12] [i_13] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_33 [i_16 - 1] [i_16 - 1] [(short)3] [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16] [i_16 - 1])))));
                        var_31 -= (+((((_Bool)1) ? (((/* implicit */int) arr_11 [i_1] [i_1])) : (((/* implicit */int) arr_43 [i_1] [i_13] [i_16 + 1])))));
                        arr_59 [i_16] = ((/* implicit */unsigned int) (~((~(arr_6 [i_1] [i_2])))));
                    }
                }
                var_32 = ((/* implicit */unsigned int) (-(arr_6 [i_12] [(short)17])));
                arr_60 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_22 [i_1] [i_2] [i_2] [i_2] [i_12] [i_12])) || (((/* implicit */_Bool) arr_51 [i_12] [16U] [i_12] [i_12] [i_12])))) ? ((+(((/* implicit */int) arr_47 [i_2] [i_2] [i_2] [(signed char)12] [i_12])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_1))))));
                arr_61 [i_12] [(short)15] [8U] [(unsigned char)6] = ((/* implicit */short) arr_42 [i_1] [17U] [i_12] [i_12]);
            }
            for (int i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_1])) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) arr_19 [i_1] [(short)13] [i_2] [i_2] [i_17] [(signed char)0])) & (((/* implicit */int) (unsigned short)24159))))));
                arr_65 [i_1] [(unsigned char)16] [(unsigned short)1] [i_17] = ((/* implicit */unsigned char) (short)32750);
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) ((short) (unsigned char)171))))))));
                var_35 = ((/* implicit */int) arr_5 [(short)1]);
            }
        }
        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)24158))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_1] [i_1]))) : (arr_57 [(unsigned char)0] [(short)12] [(unsigned char)0] [i_18] [i_18] [i_18] [(signed char)16]))) : (((/* implicit */unsigned int) ((int) arr_53 [(signed char)8] [(unsigned char)9]))))))));
            arr_68 [i_1] [(short)11] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_1]))));
            var_37 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_62 [12U] [i_1]))))));
        }
        arr_69 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [(unsigned char)2] [i_1] [(unsigned char)16] [i_1])) ? (((/* implicit */unsigned int) var_7)) : (arr_40 [i_1] [i_1] [i_1])));
        arr_70 [i_1] = (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)13041)) : (((/* implicit */int) arr_15 [i_1] [i_1] [(short)8] [i_1] [(short)18] [i_1])))));
        /* LoopNest 3 */
        for (signed char i_19 = 3; i_19 < 20; i_19 += 2) 
        {
            for (int i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    {
                        arr_77 [(unsigned char)8] [i_19] [i_20] [i_20] = (signed char)117;
                        arr_78 [i_1] [i_19] [i_19 - 2] [(signed char)14] = ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */int) arr_8 [i_1]);
    }
    var_39 = ((/* implicit */unsigned int) var_5);
    var_40 = ((/* implicit */_Bool) max((var_40), ((_Bool)0)));
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 11; i_22 += 2) 
    {
        for (short i_23 = 0; i_23 < 11; i_23 += 2) 
        {
            {
                arr_84 [i_22] = ((/* implicit */signed char) (+(max((((int) (short)32750)), (((/* implicit */int) arr_51 [(unsigned char)2] [(signed char)6] [i_22] [(unsigned char)2] [i_23]))))));
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_7)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_22] [i_22] [i_22] [i_22] [i_22])) ? (((((/* implicit */int) var_10)) & (var_9))) : (((/* implicit */int) arr_80 [i_22]))))) || (((/* implicit */_Bool) ((short) (short)32767))))))));
                var_43 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_23] [i_22])) ? (arr_6 [i_22] [i_23]) : (((/* implicit */unsigned long long int) arr_7 [i_23]))))));
                arr_85 [i_22] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_82 [i_22] [4ULL] [i_22])) || (((/* implicit */_Bool) max((3565448120U), (((/* implicit */unsigned int) arr_13 [i_22] [i_22] [i_22]))))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_82 [i_22] [i_23] [i_22]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40994)) && (((/* implicit */_Bool) arr_33 [i_22] [i_22] [i_23] [i_23] [i_23])))))) : (arr_53 [i_23] [i_23]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_22] [(unsigned short)18] [i_22] [i_22] [(unsigned short)12] [i_23] [(signed char)14])))));
            }
        } 
    } 
}
