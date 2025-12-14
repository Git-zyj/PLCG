/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70985
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
    var_10 = ((/* implicit */int) 657570149U);
    var_11 = ((/* implicit */long long int) var_9);
    var_12 = (-(((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) (+(min((-8158648640490959022LL), (((/* implicit */long long int) (signed char)0))))));
            var_14 -= ((/* implicit */unsigned long long int) var_0);
            var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) (unsigned char)226))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (arr_1 [i_1])))))));
            arr_4 [i_0] [i_0] [i_0] = var_4;
        }
        var_16 = ((/* implicit */long long int) var_9);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((long long int) ((long long int) (unsigned char)29))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) arr_5 [(_Bool)1] [i_0] [i_0]);
                        arr_15 [i_0] = ((/* implicit */long long int) ((19ULL) | (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) > (arr_5 [i_0] [i_0] [(short)8]))) ? (arr_5 [i_0] [i_2] [i_3]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) var_7)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 2; i_7 < 14; i_7 += 3) 
            {
                var_19 &= ((unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_7]))) : (3791893030580936268LL))));
                arr_22 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5] [i_5])) * (((/* implicit */int) arr_20 [i_7 - 1] [i_6 - 1]))))) ? (max((((long long int) 18446744073709551615ULL)), (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_5] [i_5]))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_16 [6ULL] [i_7])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
            }
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_8 = 3; i_8 < 11; i_8 += 2) 
            {
                var_20 += ((/* implicit */short) var_0);
                arr_25 [i_8] [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_6] [i_8]);
            }
            for (unsigned int i_9 = 1; i_9 < 14; i_9 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) arr_16 [i_6 - 1] [i_6 - 1])), (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6]))) - (arr_19 [i_5] [i_5]))))), (((/* implicit */long long int) (+(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_17 [i_9] [i_6]))))))))));
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) ((int) arr_27 [i_5] [i_6 - 1] [i_9]))), (min((((/* implicit */long long int) (unsigned char)223)), (-510385366376533968LL)))))));
                var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_9])) | (((((/* implicit */_Bool) arr_17 [(unsigned char)3] [(unsigned char)3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_5] [i_5]))))))), (((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_9 - 1])) ? (((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [i_6 - 1] [i_9 - 1]))) : (arr_24 [i_5] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_9 + 1] [i_6 - 1] [i_6] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_5] [i_9])))))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_5))));
                arr_29 [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_28 [i_9] [i_6 + 1] [i_5]))))));
            }
            /* vectorizable */
            for (unsigned char i_10 = 3; i_10 < 12; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (short i_11 = 2; i_11 < 13; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) -39976293688745580LL);
                            var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) var_5))));
                        }
                    } 
                } 
                arr_40 [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_10 - 1]))) < (arr_21 [i_5] [i_5] [i_6 - 1] [i_5])));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((signed char) var_1)))));
                    arr_43 [i_5] [i_6 - 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_6] [i_6])) | (((/* implicit */int) var_3))));
                    var_28 = ((((/* implicit */_Bool) arr_31 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5])))))) : (((((/* implicit */_Bool) arr_19 [i_5] [i_13])) ? (arr_26 [i_13] [i_6] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                }
            }
            for (long long int i_14 = 1; i_14 < 14; i_14 += 2) 
            {
                var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) ((short) var_4)))))), (min((arr_19 [1ULL] [i_6 + 1]), (arr_19 [i_6] [i_6 - 1])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 1) 
                {
                    arr_49 [i_5] [i_6] [i_5] = ((/* implicit */signed char) arr_28 [(signed char)6] [i_6] [i_5]);
                    var_30 = ((/* implicit */long long int) (-(arr_21 [i_14] [1U] [i_5] [i_5])));
                }
                for (unsigned char i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    arr_53 [i_5] [i_5] [i_6 - 1] [i_14] [i_5] = ((/* implicit */unsigned int) arr_47 [i_5] [i_5] [i_6] [i_14] [i_14] [i_14]);
                    var_31 = ((/* implicit */_Bool) (~(((arr_19 [i_5] [i_14 + 1]) | (((/* implicit */long long int) arr_30 [i_5] [i_14 + 1] [i_6 - 1] [i_16]))))));
                }
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        arr_60 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_23 [i_6] [i_14] [i_18]);
                        var_32 += ((/* implicit */unsigned char) var_1);
                        arr_61 [i_5] [0U] [i_5] [i_5] [i_18] = ((unsigned char) max((((long long int) arr_52 [i_5])), (((/* implicit */long long int) ((signed char) arr_32 [i_5] [i_5])))));
                    }
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_33 = -39976293688745580LL;
                        var_34 = ((/* implicit */int) ((((long long int) var_4)) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_6] [i_14 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)184))));
                        arr_67 [i_5] [i_17 - 1] = ((/* implicit */unsigned long long int) arr_19 [i_6 - 1] [7U]);
                        arr_68 [i_20] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_33 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1])))));
                        arr_69 [i_5] [i_5] [i_5] = ((/* implicit */short) ((6923837134159951113LL) > (8347353076130661245LL)));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_36 &= ((/* implicit */unsigned char) ((unsigned long long int) 39976293688745580LL));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_8)))))) - ((-(max((arr_35 [i_21] [i_6 - 1] [i_5]), (((/* implicit */unsigned int) arr_34 [i_6] [i_14 + 1])))))))))));
                        arr_74 [i_14] [i_14] = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_39 [i_5] [i_5] [i_6 - 1] [i_5] [i_17 - 1] [i_14 - 1])))), ((!(((/* implicit */_Bool) max(((short)2924), (((/* implicit */short) var_0)))))))));
                        arr_75 [i_5] [i_6] [i_14] [i_17 - 1] [i_21] = ((/* implicit */_Bool) max((max((arr_41 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_5] [i_6] [i_14] [i_17])) >> (((/* implicit */int) arr_47 [i_5] [i_21] [i_21] [i_17] [(unsigned char)3] [i_5]))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)48)) % (((/* implicit */int) (unsigned char)13))))), (((((/* implicit */_Bool) arr_37 [i_5] [i_14] [i_5] [i_5] [i_21] [i_5] [i_6 - 1])) ? (arr_48 [i_21] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_1), (arr_31 [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_6 - 1] [i_14] [i_6 - 1] [i_5]))) : (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_28 [i_5] [i_14] [i_5]))))) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (arr_35 [i_5] [i_5] [i_5])))) ? (3732255105U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_44 [i_5] [i_5] [i_14]))))))) - (3732255095U))))))));
                }
                for (unsigned long long int i_22 = 3; i_22 < 13; i_22 += 2) 
                {
                    arr_78 [i_5] = ((/* implicit */long long int) var_7);
                    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((long long int) arr_70 [i_6] [i_6 - 1] [i_14 + 1] [i_22 + 2] [i_22 + 2])))));
                }
            }
            /* LoopSeq 1 */
            for (signed char i_23 = 0; i_23 < 15; i_23 += 2) 
            {
                var_40 = ((/* implicit */unsigned long long int) ((long long int) var_0));
                var_41 = ((/* implicit */unsigned char) max((arr_42 [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)48)) && (((((/* implicit */_Bool) 39976293688745579LL)) && (((/* implicit */_Bool) -8585252919471867322LL)))))))));
                var_42 = ((/* implicit */long long int) arr_48 [i_5] [i_5]);
                var_43 &= arr_39 [i_23] [8U] [i_23] [i_6] [i_6] [i_5];
                /* LoopSeq 3 */
                for (int i_24 = 0; i_24 < 15; i_24 += 1) 
                {
                    var_44 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (((arr_24 [i_5] [i_5]) / (arr_19 [i_6] [i_5])))))), ((~(((((/* implicit */int) var_5)) | (((/* implicit */int) arr_64 [i_5] [i_5] [i_5] [i_24]))))))));
                    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (max((arr_83 [i_6 + 1] [i_6]), (((/* implicit */unsigned long long int) (-(arr_45 [(unsigned char)0] [(unsigned char)0])))))) : (((/* implicit */unsigned long long int) ((max((arr_30 [i_24] [i_23] [i_6] [i_5]), (((/* implicit */unsigned int) arr_20 [i_5] [i_6 - 1])))) << (((((/* implicit */int) min((((/* implicit */short) arr_39 [i_5] [i_5] [i_6] [i_23] [i_5] [i_24])), (arr_59 [i_5] [i_5] [i_5] [i_5] [i_5])))) - (171)))))))))));
                    arr_84 [i_5] [i_5] [i_6 - 1] [i_23] [i_5] [i_24] = ((/* implicit */unsigned long long int) ((-39976293688745580LL) & (((/* implicit */long long int) 0U))));
                    arr_85 [i_5] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((arr_42 [i_5] [i_5] [i_5] [i_5] [i_5]) >> (((((/* implicit */int) (unsigned short)43971)) - (43910))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 + 1])))))), (max((arr_48 [i_24] [i_6 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_56 [i_5] [i_6] [i_23] [i_23]))))))));
                }
                for (short i_25 = 0; i_25 < 15; i_25 += 4) 
                {
                    arr_88 [i_6] [i_25] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)230))))) ? (min((((long long int) arr_48 [i_25] [i_25])), (((/* implicit */long long int) arr_17 [i_25] [i_25])))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                    var_46 = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 + 1] [i_25]))) : (arr_30 [i_5] [i_25] [i_23] [i_25]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_26 [i_25] [i_23] [i_6] [i_5]) < (((/* implicit */unsigned long long int) arr_28 [i_6] [i_6] [i_6])))))))));
                    arr_89 [i_6] [i_6] [(unsigned char)13] [i_6 + 1] = ((/* implicit */long long int) arr_39 [i_5] [i_5] [11LL] [i_5] [i_23] [i_25]);
                }
                for (long long int i_26 = 1; i_26 < 12; i_26 += 3) 
                {
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15833)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))) : (16927957935740879665ULL)))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) 3395731698533749684LL)) || (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) max(((unsigned char)197), (arr_39 [i_5] [i_6 - 1] [i_6] [i_6] [i_23] [i_26]))))));
                    var_48 += ((/* implicit */short) min((((int) arr_39 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_26 + 2] [i_26 + 3])), (((/* implicit */int) min((var_6), (((/* implicit */short) arr_39 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_26 - 1] [i_26 + 1])))))));
                    var_49 = ((/* implicit */unsigned int) ((unsigned char) min((((arr_54 [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_5] [i_5]))) : (var_1))), (((/* implicit */long long int) ((arr_46 [i_6] [i_23]) >> (((((/* implicit */int) arr_34 [9LL] [i_5])) + (496)))))))));
                }
            }
            var_50 = ((/* implicit */unsigned char) arr_81 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6]);
            arr_93 [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)41))))) || (((/* implicit */_Bool) (short)-788)))));
        }
        var_51 -= ((/* implicit */unsigned char) arr_79 [i_5] [i_5] [i_5] [i_5]);
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        var_52 = ((/* implicit */unsigned int) (signed char)1);
        arr_96 [i_27] = arr_21 [i_27] [i_27] [i_27] [i_27];
    }
    var_53 = ((/* implicit */unsigned long long int) var_3);
}
