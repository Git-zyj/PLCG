/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5998
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_3 [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [(unsigned char)3])) >= (5396469508362527639ULL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [(unsigned char)5] = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)0)))) == ((+(((/* implicit */int) (signed char)-14))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3047978905U)) ? (2778277821U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1246988407U))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_15 [(short)0] |= ((/* implicit */unsigned char) arr_6 [2ULL] [i_2 - 1]);
                    arr_16 [i_2] [(signed char)8] [i_3] = ((/* implicit */unsigned int) (short)7494);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_20 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5 + 2] [i_5 - 1])) ? (((/* implicit */int) arr_24 [i_5 - 2] [i_5 + 2] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_5 - 2] [i_5 + 1]))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_24 [i_4] [i_6] [i_8]))))), (((arr_27 [4U] [i_5] [4U] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))))))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] [21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 669659698234551303ULL)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (signed char)108))))) : ((-(1074057686U)))));
                            var_21 = ((((/* implicit */_Bool) max((-5784832928125150506LL), (arr_28 [(_Bool)1] [i_5] [i_6] [i_6] [i_7] [i_8])))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (-(arr_28 [(_Bool)1] [(_Bool)1] [i_5] [10ULL] [i_7] [(_Bool)1])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)96)) <= (((/* implicit */int) (_Bool)1))))) : (((((-1985493672) + (2147483647))) >> (((((/* implicit */int) arr_21 [i_4] [i_4])) - (42131))))))));
                            var_22 = 18100378282594166570ULL;
                            var_23 = (-(((((/* implicit */_Bool) arr_22 [(unsigned char)14] [(unsigned char)19])) ? (max((-6101067831626555268LL), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [(_Bool)1] [i_6] [i_7]))))));
                        }
                        for (long long int i_9 = 2; i_9 < 20; i_9 += 4) 
                        {
                            arr_36 [i_9] [i_7] [13LL] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (unsigned char)177);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)31)) * (max((((/* implicit */int) arr_20 [i_4] [i_9 - 2])), ((-(((/* implicit */int) (unsigned char)1))))))));
                        }
                        arr_37 [i_4] [i_6] [i_4] [i_7] [i_6] = ((/* implicit */signed char) (+((-(min((((/* implicit */long long int) var_3)), (arr_32 [(signed char)0] [(signed char)0] [12] [i_4] [i_7])))))));
                        var_25 += ((/* implicit */unsigned char) ((((unsigned long long int) var_11)) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)127)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_10 = 3; i_10 < 21; i_10 += 4) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (16777215U)));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (long long int i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    {
                        var_27 += ((/* implicit */_Bool) arr_22 [i_10 - 3] [i_12 - 1]);
                        var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)53)) ? (arr_38 [(signed char)10] [i_10 - 1] [(signed char)10]) : (arr_38 [6U] [i_10 - 3] [6U])));
                    }
                } 
            } 
            arr_46 [i_4] [i_4] = ((/* implicit */unsigned char) 0U);
            /* LoopSeq 4 */
            for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                arr_49 [i_4] [i_13] [3LL] [i_4] = ((/* implicit */unsigned char) arr_21 [i_4] [10LL]);
                arr_50 [i_4] = ((/* implicit */signed char) var_13);
                arr_51 [i_4] = ((/* implicit */signed char) (unsigned char)12);
            }
            for (int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                arr_54 [i_14] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_17 [i_10] [i_4]))))) ? (((/* implicit */int) arr_22 [i_10 + 1] [i_10 - 3])) : (1985493687)));
                arr_55 [i_4] = ((/* implicit */long long int) arr_25 [i_4] [(signed char)17] [i_10 - 3] [(signed char)17]);
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_31 [i_4]))));
                var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)28237))));
            }
            for (short i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_10] [i_15] [i_16]))))) : (((/* implicit */int) arr_22 [i_4] [i_10 - 2])))))));
                    arr_60 [i_4] [1U] [i_10] [i_4] = ((/* implicit */signed char) arr_59 [i_4] [i_10] [i_4] [(unsigned char)4] [i_16]);
                    arr_61 [(signed char)17] [i_4] [i_15] [16LL] [i_15] [i_10] = (i_4 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_10 + 1] [i_16] [i_16] [i_10])) ? (((/* implicit */long long int) ((((var_1) + (2147483647))) >> (((arr_44 [i_4]) - (3915456297498531067LL)))))) : (arr_45 [i_4] [i_15] [i_4])))) : (((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_10 + 1] [i_16] [i_16] [i_10])) ? (((/* implicit */long long int) ((((var_1) + (2147483647))) >> (((((arr_44 [i_4]) + (3915456297498531067LL))) + (4651861151808874795LL)))))) : (arr_45 [i_4] [i_15] [i_4]))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_4] [i_10]))) : (1269613550409141940LL)))) ? (1985493702) : (((((/* implicit */int) var_6)) >> (((4278190073U) - (4278190046U)))))));
                    var_33 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 16769024U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_4] [i_10 + 1] [i_15] [(unsigned char)2] [i_10] [(unsigned short)19]))) : (18446744073709551602ULL)))));
                }
                for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 4) 
                {
                    arr_64 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_48 [i_17 + 1] [i_10 - 1] [i_10 - 2]))));
                    arr_65 [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10 - 1] [i_10 - 1]))) - (3933538649U));
                    arr_66 [i_4] [i_10] [i_15] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_10 - 1] [i_17 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_4]))) : (arr_23 [i_17 - 1] [i_10] [i_10 + 1])));
                }
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    for (unsigned char i_19 = 2; i_19 < 20; i_19 += 4) 
                    {
                        {
                            var_34 *= ((/* implicit */short) arr_20 [i_18] [i_18]);
                            arr_73 [i_4] [i_4] [i_4] [i_18] [i_18] [i_19] [i_19 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_69 [8] [8])) ? (((/* implicit */long long int) 65011712U)) : (((((/* implicit */_Bool) arr_58 [i_4] [19ULL] [i_15])) ? (((/* implicit */long long int) var_17)) : (arr_41 [i_4] [19ULL] [i_10] [i_4])))));
                            arr_74 [i_4] [i_10] [i_4] [i_10] [i_19] = ((/* implicit */long long int) arr_38 [i_19 + 1] [i_10] [i_4]);
                        }
                    } 
                } 
                arr_75 [i_4] [i_10] [i_4] = ((/* implicit */int) arr_19 [i_4]);
            }
            for (short i_20 = 0; i_20 < 22; i_20 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */int) arr_59 [i_10] [i_10] [i_4] [i_10 - 1] [i_10 - 2]);
                arr_78 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 268369920U))));
                arr_79 [i_4] = ((/* implicit */unsigned long long int) ((arr_28 [6] [i_10] [i_10 + 1] [i_10] [i_10 - 1] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            }
        }
        for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            var_36 ^= ((/* implicit */unsigned char) arr_42 [(unsigned short)16]);
            var_37 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-28223))) + (arr_45 [(unsigned short)6] [i_21] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((var_6) ? (((/* implicit */unsigned long long int) arr_41 [(signed char)0] [i_21] [(short)12] [i_21])) : (6626151151269674939ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)20))))), (((((/* implicit */_Bool) (unsigned char)132)) ? (4278190081U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
        }
        arr_83 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_16)) | ((+(14687672650200218461ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) 
        {
            for (unsigned short i_23 = 0; i_23 < 22; i_23 += 3) 
            {
                {
                    arr_90 [13] [i_22] [i_4] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -24LL)) ? (16777184U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25)))))));
                    var_38 += ((/* implicit */unsigned long long int) arr_77 [i_4] [18U] [(unsigned char)7]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_24 = 2; i_24 < 20; i_24 += 1) 
        {
            var_39 = ((/* implicit */unsigned int) var_2);
            var_40 -= ((/* implicit */_Bool) arr_63 [(short)12] [i_24 - 2] [i_24] [i_24]);
            var_41 = ((/* implicit */unsigned char) 4194303U);
            var_42 = ((/* implicit */unsigned long long int) (-(16777190U)));
        }
    }
}
