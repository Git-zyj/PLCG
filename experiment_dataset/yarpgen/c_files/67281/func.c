/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67281
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) ((arr_0 [i_0 - 1]) < (arr_0 [i_0 - 1])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_19 = arr_4 [1] [7] [i_0 - 1];
            /* LoopNest 3 */
            for (short i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_20 = (!(((((/* implicit */int) (signed char)-16)) <= (((/* implicit */int) var_5)))));
                            var_21 += ((/* implicit */unsigned long long int) arr_7 [i_2 + 1] [i_2] [i_2 - 2]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_16 [i_0 - 1] [i_0 - 1] [(short)4] [(unsigned short)9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)12879))));
                arr_17 [i_0 - 1] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 17; i_6 += 2) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)122))))) ? (arr_0 [i_0 - 1]) : (var_17)))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)4)))))));
                var_25 *= ((/* implicit */unsigned char) var_10);
            }
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                var_26 ^= ((/* implicit */signed char) arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]);
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((var_17) <= (((/* implicit */int) arr_19 [i_0] [i_0 - 1] [2ULL] [i_0])))))));
                    arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_21 [i_0] [11U] [i_0 - 1] [i_10] [i_10]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_9))));
                        var_29 += ((/* implicit */short) (_Bool)1);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                    {
                        var_30 = ((arr_5 [i_0 - 1] [i_1] [i_9]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 1]))));
                        arr_40 [i_13] [i_1] [i_9] [i_11] [(short)3] = ((/* implicit */long long int) var_1);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((unsigned short) arr_34 [i_0] [i_0 - 1] [i_9] [i_11] [i_14] [i_0 - 1])))));
                        var_32 = arr_31 [i_0] [i_0] [i_0 - 1] [5U] [i_0 - 1];
                        var_33 += ((/* implicit */unsigned char) 9223372036854775807LL);
                    }
                    arr_43 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                    var_34 += ((/* implicit */unsigned int) ((arr_18 [(signed char)7] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_1]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                }
            }
            arr_44 [i_0] = ((/* implicit */_Bool) (~(arr_23 [12] [4ULL] [i_1])));
        }
        var_35 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)4)))) & ((~(((/* implicit */int) arr_18 [i_0] [(unsigned short)14] [(unsigned short)14] [i_0] [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned short i_15 = 3; i_15 < 16; i_15 += 2) 
        {
            arr_47 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) arr_38 [(short)2] [i_15] [i_15] [i_15 + 2] [(short)2]);
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_17))));
        }
        for (unsigned short i_16 = 2; i_16 < 17; i_16 += 4) 
        {
            arr_51 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)251)) << (((arr_7 [i_0 - 1] [i_0] [i_16 - 1]) + (3946512133656640327LL)))));
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)1)))))))));
            arr_52 [i_16] = ((/* implicit */short) arr_46 [i_0 - 1] [i_0 - 1]);
        }
    }
    for (unsigned int i_17 = 3; i_17 < 12; i_17 += 1) 
    {
        var_38 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) max((arr_37 [i_17] [i_17] [i_17] [i_17 - 3] [i_17]), (((/* implicit */unsigned char) var_5))))))), (var_17)));
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 13; i_18 += 4) 
        {
            for (signed char i_19 = 1; i_19 < 9; i_19 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 13; i_20 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) arr_1 [i_17 - 2]);
                        var_40 = ((/* implicit */short) arr_35 [i_18] [(signed char)0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        var_41 = (~(((/* implicit */int) ((arr_42 [i_17 - 1]) || ((_Bool)0)))));
                        var_42 |= ((/* implicit */int) ((var_5) ? (arr_39 [6U] [6U] [i_18] [i_19 - 1] [i_19]) : (arr_39 [i_17 + 1] [1LL] [i_19] [i_19 + 4] [i_21])));
                        arr_65 [i_17] [i_17] [i_19] = ((/* implicit */int) (-(arr_61 [i_17] [i_18] [i_19 + 1] [i_21])));
                        var_43 *= ((/* implicit */unsigned short) (!(var_14)));
                    }
                    var_44 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_0 [i_19 - 1]), (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_13))))))))));
                    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */int) max(((short)2), ((short)-21815)))) >> (((min((((/* implicit */long long int) var_17)), (arr_8 [i_17 - 3] [i_19 + 3]))) + (3780386236473725722LL))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
        {
            arr_70 [i_17 + 1] [i_22] = ((/* implicit */signed char) ((short) arr_14 [i_17] [i_17] [i_17] [i_17]));
            var_46 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [12ULL] [i_22 + 1] [i_22 + 1] [i_22] [i_22 + 1]))) != (arr_62 [i_17 + 1])))), (((arr_23 [i_17 - 3] [i_17] [i_22 + 1]) ^ (arr_23 [i_17 - 2] [i_22 + 1] [i_22 + 1])))));
            /* LoopNest 2 */
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) max((arr_24 [i_17 - 3]), (((/* implicit */unsigned long long int) var_14)))))));
                        var_48 = ((/* implicit */int) 1125899873288192LL);
                        var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_19 [i_17] [i_22 + 1] [i_22] [i_23])) : (((/* implicit */int) arr_19 [i_22] [i_22 + 1] [i_24] [i_24]))))) ? (((((/* implicit */int) arr_19 [i_17] [i_22 + 1] [i_23] [i_23 - 1])) | (((/* implicit */int) arr_19 [i_22 + 1] [i_22 + 1] [i_24] [i_24])))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_19 [i_17] [i_22 + 1] [i_23 - 1] [(unsigned char)7]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_25 = 0; i_25 < 13; i_25 += 2) 
            {
                var_50 += ((/* implicit */signed char) (unsigned short)21757);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_26 = 1; i_26 < 11; i_26 += 2) 
                {
                    var_51 ^= ((/* implicit */_Bool) arr_34 [i_26 - 1] [i_26 - 1] [i_26] [i_26] [i_26 + 2] [i_26 + 2]);
                    var_52 = ((/* implicit */int) ((arr_58 [(signed char)0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) var_7))))))));
                }
                var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) arr_55 [(signed char)11] [i_22 + 1] [i_25]))));
                /* LoopSeq 1 */
                for (long long int i_27 = 1; i_27 < 11; i_27 += 1) 
                {
                    arr_83 [(unsigned short)4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)253), (((/* implicit */unsigned char) arr_71 [i_22])))))) : (-3279377262679003102LL)))));
                    arr_84 [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_1 [i_25]), (((/* implicit */signed char) arr_46 [(unsigned short)9] [i_27]))))), ((-(((/* implicit */int) arr_38 [i_25] [(unsigned short)6] [(unsigned char)12] [i_27 + 1] [i_27 + 1]))))))) ? (((/* implicit */unsigned long long int) arr_66 [(short)12] [(short)12] [(short)12])) : (max((arr_5 [i_17 - 3] [i_22 + 1] [i_22 + 1]), (((/* implicit */unsigned long long int) (unsigned short)65518))))));
                }
            }
            var_54 = ((/* implicit */short) (unsigned short)43624);
        }
    }
    var_55 = ((/* implicit */unsigned short) 2012813088U);
    /* LoopSeq 2 */
    for (unsigned int i_28 = 0; i_28 < 21; i_28 += 4) 
    {
        var_56 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_86 [i_28])))) == (((((/* implicit */_Bool) arr_86 [i_28])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_86 [i_28]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_29 = 3; i_29 < 20; i_29 += 3) 
        {
            arr_93 [i_28] [i_29] = ((/* implicit */short) (-(((/* implicit */int) var_18))));
            var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) (+(((/* implicit */int) var_13)))))));
            arr_94 [i_28] [i_28] [i_28] &= ((/* implicit */short) ((((/* implicit */int) arr_86 [i_28])) << (((var_4) - (7865315239779471293LL)))));
        }
        for (unsigned short i_30 = 1; i_30 < 20; i_30 += 3) 
        {
            var_58 = (~(8074418746665784691ULL));
            var_59 = ((/* implicit */_Bool) var_15);
        }
        arr_98 [i_28] |= ((/* implicit */signed char) arr_89 [i_28] [i_28] [i_28]);
    }
    for (unsigned short i_31 = 0; i_31 < 22; i_31 += 3) 
    {
        var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) (-(((((/* implicit */int) arr_99 [i_31] [i_31])) & (((/* implicit */int) var_15)))))))));
        var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (arr_101 [(unsigned short)8] [i_31])))) ? (var_16) : (min((((/* implicit */int) (_Bool)1)), (arr_101 [20U] [20U]))))), ((-(((/* implicit */int) var_15)))))))));
    }
}
