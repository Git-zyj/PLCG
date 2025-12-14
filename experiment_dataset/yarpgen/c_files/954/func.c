/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/954
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((int) (signed char)91));
        var_12 *= ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_2 [i_0])), (min((((unsigned short) -1118765725)), (((unsigned short) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 17367125453463745280ULL)))))) * (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)34))))) * (18446744073709551615ULL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) arr_10 [(unsigned short)18] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (signed char)122))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_8 [i_1] [i_2]) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)148)) && (((/* implicit */_Bool) arr_8 [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)91))) < (arr_11 [i_1] [i_2])))))))));
            arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((signed char)-109), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) % (18ULL)))))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) < (8903371509352140855ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_1]))))));
            var_14 = ((/* implicit */int) arr_9 [i_1]);
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        arr_24 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(short)6] [i_1] [i_1] [i_4] [(short)6] [i_4]))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_11 [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-60)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [(short)16] [i_5]))) > (6312506541951783530ULL))))) : (((unsigned int) 1455081623U))))));
                        arr_25 [i_1] [i_3] [i_4] [i_5] [i_3] [(unsigned short)7] = ((/* implicit */int) ((unsigned int) (short)-30895));
                        arr_26 [20] [20] [20] [20] [i_1] [20] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)4064)) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) (unsigned short)31394)) >> (((((/* implicit */int) (short)480)) - (472)))))))));
                        var_15 -= ((/* implicit */int) arr_17 [i_1] [i_4] [i_1]);
                    }
                } 
            } 
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_20 [i_1] [i_3]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))) ^ (6312506541951783530ULL))))));
            var_17 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) -5099856787466986990LL)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_16 [i_1])))) != (((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_13 [i_1]))))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_1] [(short)19])) > (arr_21 [i_1] [i_3] [i_3] [i_3] [i_3])))) != (max((arr_8 [i_1] [i_3]), (((/* implicit */int) arr_4 [i_3])))))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((((/* implicit */int) (short)32767)) << (((min((arr_5 [i_1]), (((/* implicit */unsigned long long int) 2147483647)))) - (2147483641ULL))))), (((/* implicit */int) arr_19 [16] [16])))))));
            arr_27 [(unsigned char)14] [i_3] |= ((/* implicit */_Bool) arr_5 [i_1]);
        }
        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 4; i_7 < 19; i_7 += 2) 
            {
                arr_35 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_29 [i_7 + 2] [i_7 + 1] [i_7 - 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((unsigned int) ((((/* implicit */_Bool) 16960793778113649910ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)9)))))));
                arr_36 [20] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) (signed char)-107);
                var_19 = ((/* implicit */short) ((((((/* implicit */int) arr_33 [i_1] [i_7 + 2] [i_1] [i_7])) != (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned short)5720)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_6 [i_1]))))))) : (((((/* implicit */_Bool) arr_15 [i_7] [i_7 - 1] [i_7 + 1])) ? (((/* implicit */int) arr_15 [i_7] [i_7 + 1] [i_7 - 4])) : (((/* implicit */int) (unsigned char)147))))));
            }
            /* LoopSeq 4 */
            for (unsigned short i_8 = 1; i_8 < 20; i_8 += 3) 
            {
                arr_39 [i_1] [i_1] [i_1] = ((/* implicit */int) 15423369434698726909ULL);
                var_20 &= ((/* implicit */signed char) (~((+(((/* implicit */int) arr_37 [i_8 - 1] [19] [(_Bool)1]))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((min((arr_38 [i_6] [i_8 - 1] [i_8] [(unsigned char)4]), (arr_38 [i_1] [i_8 + 1] [(short)17] [(short)14]))) & (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_8 + 1] [i_8 + 1] [i_1]))) : (arr_38 [i_8] [i_8 + 1] [i_8] [i_1]))))))));
            }
            for (int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                arr_43 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((-(arr_42 [i_9] [i_6] [i_9] [i_9]))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (64512))) <= (arr_8 [i_6] [i_1])))))));
                var_22 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)-26));
            }
            for (signed char i_10 = 1; i_10 < 19; i_10 += 3) /* same iter space */
            {
                arr_46 [i_1] [i_6] [i_6] [i_10] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((8388607LL) - (8388593LL)))));
                arr_47 [i_1] [i_1] [i_6] [(short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_10] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) arr_23 [i_1] [i_1] [i_10 + 2] [(short)4] [i_1] [i_6])), (((unsigned int) arr_16 [i_1]))))));
            }
            for (signed char i_11 = 1; i_11 < 19; i_11 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_44 [i_11] [2] [(_Bool)1])) / (((/* implicit */int) (unsigned char)56)))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_6] [i_6] [i_11])))));
                arr_50 [i_11] [i_6] [i_6] [9U] = ((/* implicit */long long int) (-(0ULL)));
                arr_51 [i_11 + 2] [i_6] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -1590950826)) ? (arr_22 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))))))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_11 - 1] [i_6] [i_1])) ? (((/* implicit */int) arr_31 [i_1] [i_1] [i_6] [i_11])) : (-384395990)))) : (max((((/* implicit */unsigned int) (unsigned char)0)), (arr_16 [i_6]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) arr_44 [3ULL] [i_6] [i_1]))))) & (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)86)) - (61))))))))));
                arr_52 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_38 [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11])) ? (arr_38 [i_11 + 2] [i_11 - 1] [i_11 + 2] [i_11 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11 - 1] [i_11 + 1] [i_11 + 2]))))) >= (((((/* implicit */_Bool) arr_48 [i_11 + 2] [1U])) ? (((4176706246U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-15027))))) : (((unsigned int) (_Bool)1))))));
            }
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) ((arr_5 [i_6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203)))))) : (((/* implicit */int) max(((unsigned short)61918), (((/* implicit */unsigned short) arr_9 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)83)))))) : (((((/* implicit */_Bool) -17)) ? (arr_42 [i_1] [i_1] [i_1] [i_1]) : (((arr_42 [i_6] [i_1] [i_1] [(signed char)19]) - (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_6] [i_1])))))))));
            /* LoopNest 3 */
            for (signed char i_12 = 2; i_12 < 20; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) (-(((unsigned int) 939840752U))));
                            var_26 ^= ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) ((short) arr_6 [i_1]))), (((((/* implicit */_Bool) arr_54 [i_1] [i_6] [i_13])) ? (536870908U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))))));
                            arr_60 [i_14] [i_6] [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_14] [i_14] [i_12 + 1])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_44 [i_1] [i_6] [i_12 - 2])))))));
                            var_27 ^= ((/* implicit */signed char) 0ULL);
                        }
                    } 
                } 
            } 
        }
        arr_61 [i_1] = ((/* implicit */short) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) (short)7661)) ? (((((/* implicit */_Bool) (unsigned short)44341)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)0))) ? (((/* implicit */int) arr_63 [i_15])) : (((/* implicit */int) arr_63 [i_15])))))))));
        var_29 |= ((/* implicit */signed char) (unsigned char)0);
        var_30 = ((/* implicit */short) (unsigned char)248);
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)14757), (((/* implicit */unsigned short) (unsigned char)199)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-11884)) : (((/* implicit */int) var_9)))) == (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) 18446744073709551599ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)153)) && (((/* implicit */_Bool) (unsigned char)103))))))))));
    var_32 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min(((unsigned char)248), ((unsigned char)164)))) ? (max((((/* implicit */unsigned long long int) var_2)), (14255176545574385415ULL))) : (((/* implicit */unsigned long long int) ((-1) * (((/* implicit */int) (unsigned short)24983)))))))));
    var_33 |= ((/* implicit */unsigned char) var_7);
    var_34 = ((/* implicit */_Bool) var_5);
}
