/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93831
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((10652489688063208711ULL), (((/* implicit */unsigned long long int) 2147483647))))) ? (((((long long int) var_11)) | (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2855857553032462780LL))))))));
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (arr_1 [i_0] [i_0]))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] [8ULL] |= ((/* implicit */unsigned char) var_9);
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0])) == ((+(max((((/* implicit */unsigned long long int) var_3)), (10652489688063208682ULL)))))));
                /* LoopNest 2 */
                for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)1))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) ((max((((/* implicit */int) var_3)), (2147483627))) >= (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_2] [(_Bool)1] [i_2] [i_2] [16] [i_2])) : (arr_7 [i_0] [i_0])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551598ULL))))))))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)192))));
            }
            for (unsigned short i_5 = 3; i_5 < 21; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_5 - 3] [i_5 + 3] [i_5 + 3] [i_5 - 1]));
                            var_22 = ((/* implicit */long long int) 2147483637);
                            arr_21 [i_0] [i_6] [i_5] [i_5 + 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((-2147483617) ^ (((/* implicit */int) (unsigned char)1))))));
                        }
                    } 
                } 
                var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_5 - 1] [i_0] [i_0])) ? (arr_14 [i_1] [i_5 - 2] [i_5 + 3] [(signed char)23]) : (arr_14 [i_0] [i_5 + 2] [i_5] [i_0])))));
                arr_22 [i_0] [4] [i_0] &= ((/* implicit */unsigned int) var_15);
                arr_23 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_5])) - (arr_11 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32763))))))))));
                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_11);
            }
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            var_24 ^= ((/* implicit */int) ((signed char) arr_17 [i_0] [i_0] [i_0] [i_0]));
                            var_25 = ((/* implicit */short) (~(var_5)));
                            arr_33 [i_10] [i_1] [i_8] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) 5223143312919593936ULL);
                            var_26 = ((/* implicit */signed char) -1961976897);
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (unsigned short)18415))));
                var_28 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8192)) || (((/* implicit */_Bool) (unsigned char)56))))), (-2855857553032462786LL))), (((/* implicit */long long int) min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned short)2)))))));
            }
            /* LoopNest 3 */
            for (short i_11 = 2; i_11 < 20; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (int i_13 = 2; i_13 < 23; i_13 += 4) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_1])) ? (var_11) : (((/* implicit */int) (unsigned short)50731)))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -1100124862)) / (arr_39 [i_11] [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 1])))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                var_30 |= ((/* implicit */unsigned int) (-(arr_29 [i_15] [i_15] [i_0] [i_0] [i_0])));
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    var_31 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) -9223372036854775802LL)), (max((arr_11 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) arr_45 [i_15] [i_14] [i_0]))));
                    arr_51 [i_0] = ((/* implicit */unsigned short) ((long long int) ((arr_42 [i_0] [i_16]) ? (((/* implicit */int) arr_42 [i_15] [i_16])) : (((/* implicit */int) var_7)))));
                    arr_52 [i_0] [23] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) % (arr_3 [i_0] [i_0] [i_0])));
                    arr_53 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((-(arr_50 [i_0] [i_14] [i_16] [(short)14]))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-32459)), (arr_12 [i_0] [i_14] [i_0] [i_15] [i_15] [i_16]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) var_8)))) >= (((/* implicit */int) min((var_3), (var_10)))))))) : (arr_39 [i_0] [i_16] [i_0] [i_16] [i_16] [i_16])));
                    /* LoopSeq 2 */
                    for (int i_17 = 1; i_17 < 23; i_17 += 1) /* same iter space */
                    {
                        arr_57 [14ULL] [i_0] [i_15] [i_0] [i_0] = ((arr_4 [i_16] [i_15]) & (((/* implicit */long long int) ((/* implicit */int) var_4))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_36 [i_17] [i_17] [i_17] [i_17 - 1] [i_17]))));
                        arr_58 [(short)10] [i_14] [i_15] [i_0] [i_17 - 1] [i_14] [i_17] = ((/* implicit */_Bool) min(((+(arr_56 [i_17 - 1] [i_0] [i_17 - 1] [i_0] [i_17 + 1]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_17 - 1] [i_0] [i_17 - 1] [i_0] [i_17 + 1])) && (((/* implicit */_Bool) arr_32 [i_17 - 1] [i_0] [i_17 - 1] [i_0] [i_17 + 1])))))));
                        arr_59 [i_0] [i_0] [i_0] [i_0] [i_16] [i_17 + 1] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)32766))) & (1188515631U))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)32766)), (-1))))));
                        arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_1))));
                    }
                    for (int i_18 = 1; i_18 < 23; i_18 += 1) /* same iter space */
                    {
                        var_33 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (max(((~(18446744073709551608ULL))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_15] [i_16] [i_16] [i_18])))));
                        var_34 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1775500552)))) ? (((((/* implicit */_Bool) arr_12 [i_18 - 1] [i_18 - 1] [i_15] [i_18] [i_18 + 1] [i_18])) ? (var_5) : (((/* implicit */int) arr_12 [(short)4] [i_18 - 1] [i_14] [i_18 - 1] [i_18 - 1] [i_18 - 1])))) : ((-(((/* implicit */int) arr_31 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 - 1]))))));
                    }
                }
            }
            /* vectorizable */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_35 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-6218))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 1; i_20 < 23; i_20 += 2) 
                {
                    for (int i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) 6776533982999948519LL);
                            arr_73 [i_21] [i_0] [i_19] [i_14] [i_14] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) arr_67 [i_20 - 1]));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
            }
            var_38 = ((/* implicit */unsigned long long int) min((arr_27 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((short) ((((/* implicit */long long int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0])) + (arr_18 [i_0] [i_0] [i_0] [i_0] [i_14])))))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
        var_40 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_2)))), (((((/* implicit */int) (unsigned char)0)) << (((((unsigned long long int) var_4)) - (161ULL)))))));
        /* LoopNest 2 */
        for (long long int i_23 = 1; i_23 < 13; i_23 += 4) 
        {
            for (unsigned int i_24 = 0; i_24 < 14; i_24 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) arr_20 [i_22] [i_23] [i_22] [i_23] [2])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned long long int) 1299224355308396782LL)), (7100642444881123464ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_22] [i_22] [9LL] [i_22] [i_22] [i_22]))))))));
                        var_42 = ((/* implicit */long long int) var_6);
                        arr_84 [i_24] [i_24] [i_24] = ((/* implicit */unsigned long long int) min((1892884704084741609LL), (((long long int) ((unsigned long long int) 0U)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_26 = 2; i_26 < 13; i_26 += 2) 
                    {
                        for (unsigned short i_27 = 1; i_27 < 13; i_27 += 4) 
                        {
                            {
                                arr_90 [i_22] [i_23] [i_24] [i_26] [13ULL] = ((/* implicit */unsigned char) (+(((long long int) arr_32 [i_22] [i_24] [i_26] [i_27 - 1] [i_27 - 1]))));
                                var_43 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_9)) > (max((((/* implicit */long long int) 2147483647)), (1793838668225516836LL))))))) % (((((/* implicit */_Bool) arr_26 [i_24])) ? (arr_26 [i_24]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_28 = 0; i_28 < 14; i_28 += 1) /* same iter space */
    {
        arr_94 [i_28] [i_28] = ((/* implicit */long long int) min((-1100124874), (-514064765)));
        arr_95 [i_28] [i_28] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_4 [i_28] [i_28])))));
    }
    var_44 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1188515631U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))))));
    var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_9) << (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (max((14453710263582991959ULL), (((/* implicit */unsigned long long int) var_14)))))))))));
}
