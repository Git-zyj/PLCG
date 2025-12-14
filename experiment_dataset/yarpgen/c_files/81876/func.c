/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81876
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
    var_12 += ((/* implicit */long long int) max((((((/* implicit */int) var_6)) | (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned char)2))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (short)-13454)) : (((/* implicit */int) arr_7 [i_0] [14LL] [i_1] [i_2]))))));
                    var_15 -= ((/* implicit */long long int) arr_0 [i_0]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (_Bool)1);
        var_17 -= ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [(_Bool)1] [i_0]))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_18 = ((/* implicit */int) arr_1 [(unsigned short)12]);
    }
    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 19; i_4 += 1) 
        {
            for (unsigned int i_5 = 4; i_5 < 19; i_5 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-69)) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-111))))))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_15 [21U] [(short)15])), ((unsigned short)6186)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4]))) - (arr_13 [i_3])))))) ? (arr_17 [i_3] [i_5] [i_5] [i_3]) : (((/* implicit */int) var_8))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_6 = 4; i_6 < 18; i_6 += 1) 
        {
            var_21 = ((/* implicit */_Bool) ((long long int) arr_17 [i_3] [i_6] [17U] [i_6]));
            var_22 -= ((/* implicit */long long int) arr_12 [21LL] [i_6 - 3] [i_6]);
            arr_20 [i_3] [i_6] [14U] = ((/* implicit */long long int) arr_11 [i_3] [17U] [i_6]);
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6186)) - (((/* implicit */int) (_Bool)1))))) ? (arr_17 [i_6] [i_6] [i_3] [(signed char)3]) : (((/* implicit */int) arr_16 [i_6] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_6] [i_6]))) : (min((max((var_11), (((/* implicit */long long int) arr_12 [15ULL] [i_6] [i_3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [19] [(unsigned char)15])) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))))))));
        }
        for (short i_7 = 1; i_7 < 18; i_7 += 2) /* same iter space */
        {
            var_24 |= ((/* implicit */short) (unsigned short)61869);
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                arr_25 [i_3] [i_7] [(short)21] = ((/* implicit */signed char) min((((/* implicit */long long int) var_7)), (var_10)));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7 + 4] [i_7 + 4] [i_7 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7]))) : (((unsigned int) arr_18 [i_8]))))) ? (max((((/* implicit */long long int) arr_17 [i_3] [i_7] [i_7 + 1] [i_7 + 1])), ((~(3167706529534038074LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)20))))) < (134217727LL))))))))));
            }
            var_26 = ((/* implicit */int) arr_13 [i_7]);
        }
        /* vectorizable */
        for (short i_9 = 1; i_9 < 18; i_9 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_27 = ((/* implicit */short) ((unsigned short) ((1570851067U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-8104))))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_9 + 1] [i_9 + 3])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned short)25947))));
                        var_29 = ((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_9 + 2] [i_9 - 1]))));
                        var_30 = ((/* implicit */signed char) ((arr_33 [i_10]) ^ (arr_33 [i_11])));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)235))))) ? (((/* implicit */unsigned int) ((((arr_33 [i_11]) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_3] [i_3] [i_10])) - (34997)))))) : (arr_22 [i_9 + 3] [i_9 + 3])));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)32422)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_15 [i_9 + 4] [15U]))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_15 [i_3] [i_9]))))) & (1653046758U)));
        }
        var_34 = max((34359737344LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (arr_33 [i_3]))) + (arr_33 [i_3])))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            for (unsigned short i_14 = 4; i_14 < 17; i_14 += 4) 
            {
                for (signed char i_15 = 1; i_15 < 16; i_15 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) arr_27 [i_12] [i_12]))));
                            var_36 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_4 [i_15] [i_15])))) | (((((/* implicit */_Bool) arr_4 [i_15] [i_15])) ? (((/* implicit */int) arr_4 [i_15] [i_15])) : (((/* implicit */int) arr_4 [i_15] [i_15]))))));
                        }
                        for (signed char i_17 = 2; i_17 < 17; i_17 += 2) 
                        {
                            var_37 = ((/* implicit */signed char) ((long long int) (~(arr_33 [i_12]))));
                            arr_50 [i_15] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_45 [i_17] [i_17 + 1] [11U] [2LL] [i_17] [11U] [i_17 + 1])) ? (arr_32 [i_17 + 1] [i_17] [i_17] [i_17] [i_17] [i_17 + 1]) : (arr_32 [i_17 + 1] [(_Bool)1] [i_17] [i_17] [i_17] [i_17 + 1]))));
                        }
                        for (long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            var_38 -= ((/* implicit */long long int) ((((/* implicit */int) var_4)) << ((((~(((/* implicit */int) (unsigned char)20)))) + (36)))));
                            arr_54 [6U] [i_15] [4LL] [i_15] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned int) 2641920537U))) ? (((/* implicit */int) arr_8 [6LL] [i_12] [i_15 + 2] [i_14 - 1])) : (((((/* implicit */int) (short)28335)) | (((/* implicit */int) (short)-8834)))))), (((arr_17 [i_15 - 1] [(short)8] [(short)8] [i_18]) ^ (arr_17 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_18])))));
                        }
                        var_39 = ((/* implicit */long long int) arr_22 [i_12] [9LL]);
                        var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60077)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (min((((/* implicit */unsigned int) (_Bool)1)), (2110538420U)))))) - (max((((/* implicit */unsigned long long int) arr_51 [i_15 + 2] [i_14] [i_14 - 4] [i_14 - 4] [i_14])), (arr_31 [i_12] [i_14 - 4] [i_14 - 1] [i_15 + 1])))));
                        var_41 |= ((/* implicit */short) (((((+(((/* implicit */int) arr_49 [i_15 + 1] [i_15 + 1] [i_15] [i_14 - 4])))) + (2147483647))) << ((((((-(arr_53 [i_15] [i_15] [i_15 - 1] [i_14 - 1] [i_13]))) + (3950711389886050215LL))) - (18LL)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 18; i_19 += 2) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) << ((((+(9223372036854775807LL))) - (9223372036854775784LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 18; i_21 += 1) 
                    {
                        for (long long int i_22 = 1; i_22 < 15; i_22 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))), ((~(((/* implicit */int) (short)18732))))));
                                arr_64 [i_12] [i_20] [5LL] [i_21] [i_21] = max((((/* implicit */long long int) max(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)1))))), (((((((/* implicit */_Bool) arr_32 [14ULL] [i_19] [i_20] [i_21] [i_22] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_12] [i_19] [(short)10]))) : (var_10))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_22 - 1] [i_22] [i_22]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_23 = 2; i_23 < 22; i_23 += 1) 
    {
        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) arr_67 [i_23] [(signed char)15])) : (((/* implicit */int) arr_66 [i_23]))))) ? (174382829U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_23] [19LL]))))) << (((/* implicit */int) ((((((/* implicit */_Bool) 2641920537U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6762))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
        var_45 = ((/* implicit */short) (-(((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) / (126100789566373888LL))))));
    }
    var_46 = ((/* implicit */unsigned short) (signed char)-109);
    /* LoopSeq 1 */
    for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 3) 
    {
        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) min((((((/* implicit */_Bool) 7773458011443013589LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1653046767U))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (short)-19733)) + (((/* implicit */int) (unsigned char)249)))))))))));
        arr_70 [i_24] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_39 [i_24]))) ^ (((/* implicit */int) (signed char)48))));
    }
}
