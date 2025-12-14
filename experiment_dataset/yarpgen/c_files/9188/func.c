/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9188
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
    var_10 = ((/* implicit */short) ((min(((+(((/* implicit */int) var_7)))), (var_8))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) min((min((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */unsigned char) ((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (var_6)))) : (((/* implicit */int) (_Bool)1))))), (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((((arr_4 [i_1]) & (arr_4 [i_1]))), (((unsigned int) arr_1 [i_1])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_5] [i_2]) | (((unsigned int) var_5))))) ? (min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_3 - 1] [i_3] [i_4 - 2] [i_5 - 2]))))))) : (((((((/* implicit */int) (short)12)) <= (((/* implicit */int) (signed char)-13)))) ? (arr_11 [i_2] [i_3] [i_2] [1ULL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (short)11)))))))));
                            var_13 = var_1;
                            arr_15 [i_5] = ((/* implicit */short) (~((-(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_3])))))));
                            arr_16 [i_5 - 2] [i_5] [i_5] [i_3 - 1] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-22075)) * ((+(((((/* implicit */int) var_0)) / (((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5 - 2]))))))));
                            var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_11 [i_5] [i_2] [i_2] [i_1]) != (((/* implicit */long long int) 3553417198U)))) ? (((/* implicit */int) arr_13 [i_5 - 1] [i_5] [i_2] [i_2] [i_4] [i_3 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13)))))))) ? (arr_5 [i_1] [i_2]) : (min((((/* implicit */unsigned int) min((665371291), (((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_4] [i_4] [i_4]))))), (3813866112U)))));
                        }
                    } 
                } 
            } 
            var_15 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_2])))) || (((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_2] [i_2] [6U])))))));
            var_16 = ((/* implicit */_Bool) (unsigned char)74);
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 8; i_7 += 4) 
            {
                for (signed char i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_17 [i_7 - 1]), (arr_17 [i_9])))) ? (max((min((arr_11 [i_1] [i_6] [i_9] [i_8]), (((/* implicit */long long int) var_4)))), (((arr_24 [i_6] [i_6] [3U] [(unsigned char)7] [i_9]) ^ (((/* implicit */long long int) arr_17 [i_6])))))) : (((/* implicit */long long int) min(((~(arr_23 [i_8]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_9] [i_8] [i_7] [i_6]))))))))));
                            arr_26 [i_9] [i_8 + 1] [i_7 + 3] [i_1] [i_6] [i_1] [i_1] = ((max((((/* implicit */unsigned int) arr_20 [i_1] [i_6] [i_7] [i_8])), (max((var_9), (((/* implicit */unsigned int) var_7)))))) << (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))));
                        }
                        for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            var_18 = (i_10 % 2 == zero) ? (((/* implicit */_Bool) min((((((((/* implicit */int) max((((/* implicit */short) (signed char)-13)), (arr_21 [(_Bool)1] [i_1])))) + (2147483647))) << ((((((-(((/* implicit */int) arr_13 [i_1] [4ULL] [i_10] [i_7] [i_8] [i_10])))) + (25))) - (24))))), (((/* implicit */int) var_1))))) : (((/* implicit */_Bool) min((((((((/* implicit */int) max((((/* implicit */short) (signed char)-13)), (arr_21 [(_Bool)1] [i_1])))) + (2147483647))) << ((((((((-(((/* implicit */int) arr_13 [i_1] [4ULL] [i_10] [i_7] [i_8] [i_10])))) + (25))) - (24))) - (1))))), (((/* implicit */int) var_1)))));
                            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7 + 2] [i_7 + 2] [i_10] [i_10] [i_10] [i_10]))) < (var_9))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_3))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned char)82)), (var_8))))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_12 [i_11] [i_8] [i_7 + 3] [i_6] [i_6] [i_1]))));
                            var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) 1083800203U)) || (((/* implicit */_Bool) 17990734079966672630ULL)))) ? (arr_28 [i_1] [i_6] [i_6] [i_7 + 2] [i_7 + 2] [i_8 + 1] [i_8]) : ((-(arr_28 [i_6] [i_7] [i_7] [i_7 + 3] [i_8] [i_8 - 1] [i_8])))));
                        }
                        var_24 = ((/* implicit */_Bool) arr_27 [i_1] [2] [i_7] [i_8] [i_1] [i_8]);
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 3; i_12 < 9; i_12 += 1) 
                        {
                            arr_34 [i_12] = ((unsigned int) ((var_6) % (((/* implicit */int) (signed char)-13))));
                            var_25 ^= ((/* implicit */unsigned char) arr_27 [i_12] [i_12] [i_8] [i_7] [i_6] [8]);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_1 [i_8 - 1])))))))));
                        }
                        var_27 = ((/* implicit */short) arr_17 [i_1]);
                        var_28 = ((/* implicit */short) max((arr_10 [i_8] [i_7 - 1] [i_6] [i_1]), (((((/* implicit */_Bool) ((var_6) / (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)146)) ? (-1618708158) : (((/* implicit */int) var_4))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7 + 3]))) * (arr_4 [i_6])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) max((max((0LL), (((/* implicit */long long int) arr_35 [i_13])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_17 [i_6]) > (var_6)))), ((+(var_9))))))));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (long long int i_15 = 2; i_15 < 10; i_15 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((unsigned int) (~(((/* implicit */int) arr_25 [i_1] [i_6] [i_13] [i_14] [i_14] [i_15 - 1] [i_15])))))));
                            var_31 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) ((signed char) 4177920U))), (481101184U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((((/* implicit */unsigned int) var_0)), (arr_10 [i_17] [(unsigned char)8] [i_6] [i_1]))) != (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))))) << (((((/* implicit */int) var_7)) - (74)))));
                            var_33 = ((/* implicit */_Bool) ((max((arr_27 [i_1] [i_6] [i_13] [i_16] [i_1] [i_17]), (arr_27 [8U] [i_16] [i_13] [i_1] [i_13] [i_1]))) + (((/* implicit */unsigned long long int) (-((~(arr_7 [i_13] [i_6]))))))));
                            arr_47 [i_17] [i_16] [i_13] [i_16] [i_1] = ((/* implicit */unsigned char) (-(min((arr_40 [i_17] [i_16] [4U] [i_6] [4U]), (((/* implicit */unsigned int) arr_44 [i_1] [i_6] [i_13] [i_16]))))));
                            arr_48 [1U] [1U] [i_13] [i_16] [i_6] [i_6] [i_1] = ((/* implicit */long long int) max((max((arr_28 [i_1] [i_6] [i_13] [i_16] [i_17] [i_1] [i_13]), (arr_30 [i_1] [i_6] [i_13] [i_16] [i_17]))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_43 [i_1] [i_16] [i_16] [i_17])) < (((/* implicit */int) var_4))))) <= ((~(((/* implicit */int) arr_18 [i_16])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    for (short i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        {
                            var_34 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((arr_33 [i_19] [i_18] [3U] [(unsigned char)5] [i_6] [i_6] [3U]), (arr_36 [i_1])))) ? (((long long int) arr_43 [i_19] [i_13] [i_13] [i_6])) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)13)), (var_9)))))));
                            arr_54 [i_1] [i_18] [i_13] [i_18] [i_19] = ((/* implicit */_Bool) arr_5 [i_13] [i_13]);
                            arr_55 [i_1] [i_6] [(unsigned char)6] [i_18] [i_1] [i_6] = ((min(((~(((/* implicit */int) arr_42 [i_1] [i_6] [i_1] [i_18])))), ((-(((/* implicit */int) (signed char)0)))))) % (((/* implicit */int) arr_1 [i_1])));
                            arr_56 [i_18] = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) 14289095435473627466ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_13]))) : (2562632791U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (arr_18 [i_6]))))))));
                            arr_57 [i_1] [(unsigned char)7] [i_18] [i_18] [i_19] = ((/* implicit */short) var_1);
                        }
                    } 
                } 
            }
            for (unsigned int i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                arr_60 [i_1] [i_6] [i_20] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-64)), ((-((~(((/* implicit */int) var_4))))))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 4; i_21 < 7; i_21 += 3) 
                {
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) (unsigned char)150);
                            arr_66 [i_1] [i_6] = ((((((/* implicit */_Bool) ((int) arr_31 [i_22] [i_21] [i_20] [i_20] [5LL] [(_Bool)1] [i_1]))) || ((!(((/* implicit */_Bool) 4290789376U)))))) && (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_1)), (var_5))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [6] [i_21 - 2] [i_20] [6])) % (((/* implicit */int) var_0)))))))));
                            var_36 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_38 [i_21] [(unsigned char)7] [i_20] [i_22] [i_22])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), ((~(((((/* implicit */int) var_3)) | (((/* implicit */int) arr_32 [10] [i_6] [i_20] [i_21] [i_22]))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_23 = 2; i_23 < 8; i_23 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 1) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            arr_77 [i_1] [i_26] [i_24] [i_25] [i_26] [i_26] [i_25] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_71 [i_23 + 3] [i_23] [i_23] [i_23 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */unsigned long long int) arr_28 [i_1] [i_1] [i_1] [i_24] [i_24] [i_25] [10])) ^ (576460743713488896ULL)))))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) max((((_Bool) arr_72 [i_23 + 3] [i_23 + 3] [i_24] [i_24] [i_25])), (((_Bool) arr_72 [i_23 - 2] [i_25] [i_25] [i_25] [i_25])))))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((arr_63 [i_1] [(signed char)9] [i_24] [i_25] [(signed char)9]), (((/* implicit */unsigned int) arr_14 [i_1] [i_23] [i_26] [i_25] [i_26] [i_1] [i_26])))) - (var_5)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_26] [i_25] [i_24] [i_26]))))) ? (((/* implicit */int) arr_46 [i_26] [i_25] [i_24] [i_1] [i_1] [i_1])) : (var_6))) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) arr_62 [i_23] [i_23] [i_1]))));
        }
        var_40 = ((((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1])) && (((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) min((arr_11 [i_1] [i_1] [(_Bool)1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) var_0)))))))));
    }
    for (unsigned short i_27 = 0; i_27 < 11; i_27 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) var_2)), (max((arr_79 [i_27] [i_27]), (((/* implicit */short) arr_13 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]))))))) != (((/* implicit */int) arr_73 [i_27] [i_27] [i_27]))));
        var_42 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_3)))), ((~((~(((/* implicit */int) arr_12 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]))))))));
    }
    for (unsigned short i_28 = 0; i_28 < 11; i_28 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_29 = 0; i_29 < 11; i_29 += 3) 
        {
            for (int i_30 = 0; i_30 < 11; i_30 += 3) 
            {
                {
                    var_43 = ((/* implicit */int) ((unsigned int) (((-(var_9))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)-14086))) | (481101204U))))));
                    arr_91 [i_30] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (884036424U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned short) var_2)), (arr_32 [i_30] [i_28] [i_29] [i_30] [i_30])))))) : ((+(4290789370U))));
                    arr_92 [i_28] [i_29] [i_30] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_83 [i_30])) + (((/* implicit */int) arr_83 [i_28]))))) ? (((/* implicit */int) min((arr_83 [i_28]), (arr_83 [i_28])))) : (((((/* implicit */int) arr_83 [i_30])) & (((/* implicit */int) arr_83 [i_28]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_31 = 1; i_31 < 10; i_31 += 1) 
        {
            for (short i_32 = 0; i_32 < 11; i_32 += 2) 
            {
                for (unsigned char i_33 = 1; i_33 < 8; i_33 += 3) 
                {
                    {
                        arr_100 [i_33] [i_32] [i_31] [8U] = (~(((/* implicit */int) max(((unsigned short)14112), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)74)))))))));
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_21 [i_32] [i_31]), (((/* implicit */short) var_1)))))))) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_36 [i_28])), (arr_65 [i_32] [i_31] [i_32] [i_33] [i_28] [i_32])))) > ((+(((/* implicit */int) arr_37 [i_33] [i_31 - 1] [i_31 + 1] [i_33 + 1]))))))) : (min((((arr_82 [i_28]) ? (((/* implicit */int) arr_96 [i_28] [i_31 - 1] [i_32] [i_33])) : (((/* implicit */int) arr_38 [i_32] [i_31 - 1] [3U] [i_33] [1U])))), (((/* implicit */int) var_1))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_34 = 3; i_34 < 8; i_34 += 1) 
                        {
                            arr_103 [(short)2] [i_34] [(unsigned char)3] [i_32] [i_31] [i_28] [i_28] = ((/* implicit */long long int) arr_94 [i_28] [i_31 - 1] [i_32]);
                            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) var_6))));
                        }
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_28] [i_28] [i_28] [i_28] [4U] [i_28] [i_28]))))), (((arr_88 [i_28] [i_28] [i_28] [i_28]) % (((/* implicit */unsigned int) var_8))))))));
        var_47 = ((/* implicit */unsigned int) max((arr_53 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]), (((arr_53 [i_28] [(signed char)4] [i_28] [i_28] [(signed char)4] [i_28]) + (arr_53 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])))));
    }
    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_2), (var_3))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
}
