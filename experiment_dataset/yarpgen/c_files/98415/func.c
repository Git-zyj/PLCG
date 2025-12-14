/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98415
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_11 = ((/* implicit */signed char) ((unsigned short) var_2));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_2 [i_0 - 2])));
            var_12 = ((/* implicit */short) (_Bool)0);
            arr_7 [i_0 - 3] = (-(((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
            arr_8 [i_1] = ((/* implicit */unsigned long long int) (~((~(2294058854U)))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
    }
    var_13 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) var_6)), (((long long int) var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_14 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (arr_13 [i_2])))));
        var_15 = ((/* implicit */unsigned long long int) arr_11 [i_2 - 1]);
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_20 [i_4] = ((/* implicit */long long int) arr_18 [i_3]);
            arr_21 [i_4] [i_3] = ((/* implicit */unsigned char) arr_18 [i_3]);
            var_16 = ((/* implicit */unsigned short) arr_17 [i_3]);
            /* LoopSeq 4 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_3))));
                        var_18 = ((/* implicit */unsigned short) ((short) (-(arr_31 [i_6] [i_7] [i_7 + 2] [i_5] [i_7]))));
                        var_19 = ((/* implicit */_Bool) ((unsigned char) 2000908441U));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7 - 1] [i_7 + 3] [i_7 + 3])))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) min((((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_5] [i_6]) < (((/* implicit */unsigned long long int) -1961535442)))))))), (((((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_5] [i_5])) ? (((/* implicit */int) var_2)) : (arr_17 [i_3]))) <= (((/* implicit */int) arr_30 [i_3] [i_5] [i_3] [i_3]))))));
                        var_22 = ((/* implicit */_Bool) var_4);
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */int) arr_29 [i_8] [i_3] [i_3] [i_5] [i_5] [i_4] [i_3])), (((arr_16 [i_4]) - (((/* implicit */int) arr_34 [i_3] [i_3] [(unsigned char)12] [i_5] [i_3]))))));
                        arr_35 [i_6] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (unsigned short)55957))))));
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_29 [i_3] [i_3] [i_4] [i_5] [i_4] [i_6] [i_4])), ((unsigned short)55957)))), (arr_19 [i_3] [i_6] [i_8]))))));
                    }
                }
                var_25 |= ((/* implicit */long long int) ((((/* implicit */int) max((arr_24 [i_3] [i_3] [12ULL] [i_5]), (arr_24 [i_3] [i_4] [4U] [4U])))) - (((((/* implicit */int) arr_24 [i_3] [i_4] [(unsigned char)6] [i_4])) / (((/* implicit */int) arr_24 [i_3] [i_4] [20U] [i_5]))))));
            }
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) (unsigned char)219);
                var_27 = ((/* implicit */_Bool) (-(min((((/* implicit */int) arr_15 [i_9])), (arr_17 [i_3])))));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_4] [i_4] [i_9] [i_4])) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (arr_28 [i_3] [i_4] [(signed char)0] [i_3]))))))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) ((arr_38 [i_4]) - (arr_38 [i_3])));
                    var_30 = ((/* implicit */short) ((((long long int) arr_34 [i_4] [i_10] [i_4] [i_10] [i_3])) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_11]))))))));
                }
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_3] [i_3] [i_13] [i_3])) % ((~(arr_22 [i_13])))));
                        arr_46 [(short)16] [i_10] [18ULL] [(_Bool)1] [i_10] [i_3] = ((/* implicit */unsigned char) var_8);
                        arr_47 [i_10] [i_12] [i_10] [i_4] [i_10] = ((/* implicit */signed char) arr_38 [i_3]);
                    }
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        var_32 |= ((/* implicit */signed char) (short)-14683);
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_24 [i_3] [i_4] [(short)10] [i_12])), (-1334691194))) <= (((/* implicit */int) (unsigned short)65535)))))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) arr_40 [i_3] [i_3])) : (((/* implicit */int) arr_26 [i_4] [2LL])))), (((((/* implicit */int) arr_48 [i_3] [i_4])) % (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [i_3] [i_14] [2])))))))))));
                        var_35 = ((/* implicit */unsigned long long int) arr_34 [i_3] [i_3] [i_3] [i_10] [i_3]);
                        var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_10])) ? (arr_13 [i_3]) : ((-2147483647 - 1))));
                    }
                    var_37 = ((/* implicit */signed char) arr_45 [i_3] [i_4] [i_4] [i_12] [i_4] [i_4] [i_12]);
                    arr_51 [i_3] [i_4] [i_10] [i_10] = ((/* implicit */_Bool) min((arr_49 [i_10] [i_4] [i_10] [i_12] [i_4]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_10] [i_4])))))));
                }
                var_38 = ((/* implicit */long long int) (~((-(arr_45 [i_3] [(unsigned char)10] [i_10] [i_4] [i_10] [i_4] [i_4])))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_54 [i_3] [i_15] [i_15] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_0)))));
                var_39 = ((/* implicit */int) max((((/* implicit */unsigned int) (-2147483647 - 1))), (arr_38 [i_3])));
                var_40 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_30 [i_15] [i_15] [i_15] [i_3])))), (((/* implicit */int) (signed char)120))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    var_41 = ((/* implicit */unsigned char) ((long long int) arr_43 [i_3] [i_15] [i_3] [i_3]));
                    var_42 = (i_15 % 2 == 0) ? (((/* implicit */unsigned long long int) ((unsigned char) ((4275230059059048425ULL) << (((((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [i_15] [i_16])) - (2843))))))) : (((/* implicit */unsigned long long int) ((unsigned char) ((4275230059059048425ULL) << (((((((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [i_15] [i_16])) - (2843))) - (30441)))))));
                }
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_18 = 3; i_18 < 21; i_18 += 2) 
                    {
                        var_43 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)54656));
                        var_44 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_6)) % (((/* implicit */int) arr_39 [i_3])))), (var_1))))));
                    }
                    for (short i_19 = 0; i_19 < 22; i_19 += 3) /* same iter space */
                    {
                        var_45 = ((/* implicit */long long int) ((unsigned short) arr_45 [i_3] [i_4] [i_15] [i_17] [i_19] [i_15] [8U]));
                        var_46 = min((((/* implicit */unsigned long long int) (unsigned char)215)), (min((arr_31 [i_3] [i_3] [i_15] [i_15] [7ULL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_19] [i_15] [i_15] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_57 [i_15]))))))));
                        var_47 = ((/* implicit */long long int) 13995384094627039849ULL);
                        var_48 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_42 [i_3] [i_4] [i_15] [i_19])))));
                        var_49 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_3] [i_4] [i_15] [i_17] [12LL])) << (((((/* implicit */int) arr_34 [i_3] [i_4] [i_15] [i_17] [i_19])) - (2846)))));
                    }
                    for (short i_20 = 0; i_20 < 22; i_20 += 3) /* same iter space */
                    {
                        var_50 = ((/* implicit */signed char) -9);
                        arr_68 [i_15] = ((/* implicit */signed char) min((((var_1) % (((/* implicit */int) (signed char)79)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((2294058851U), (((/* implicit */unsigned int) (_Bool)1))))) <= (arr_45 [i_3] [i_4] [i_15] [i_17] [i_20] [i_15] [i_3]))))));
                        var_51 -= ((/* implicit */long long int) ((unsigned char) arr_55 [i_17] [(signed char)3] [i_3]));
                        var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(arr_43 [i_17] [i_15] [i_15] [i_3]))), (((/* implicit */unsigned int) arr_58 [i_15] [i_17] [i_15] [i_4] [i_15]))))) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (unsigned short)10740))));
                    }
                    for (signed char i_21 = 0; i_21 < 22; i_21 += 1) 
                    {
                        var_53 = ((((/* implicit */int) arr_39 [i_17])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_3] [i_3] [i_4] [i_15] [i_17] [i_21] [i_3]))))));
                        var_54 += ((/* implicit */signed char) arr_44 [i_21] [i_3] [i_15] [i_4] [i_3]);
                        var_55 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_2)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        var_56 = (unsigned char)200;
                        var_57 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_4)), (arr_14 [i_22] [i_3]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        arr_74 [i_3] [i_3] [i_15] [i_3] [i_3] = arr_61 [i_3] [8] [i_15] [i_17] [i_22] [i_15];
                    }
                    /* vectorizable */
                    for (int i_23 = 2; i_23 < 21; i_23 += 3) 
                    {
                        arr_79 [5LL] [i_17] [i_15] [i_4] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_23 + 1]))));
                        var_58 -= arr_45 [i_23 - 2] [i_23 - 2] [i_23 - 2] [i_23 - 1] [i_23] [i_23] [i_23 - 2];
                        var_59 = ((((/* implicit */int) (signed char)24)) < (arr_36 [i_23 + 1]));
                        var_60 = ((/* implicit */unsigned long long int) arr_50 [i_23] [i_15] [i_15] [i_4] [i_4] [i_15] [i_3]);
                        arr_80 [i_3] [i_4] [i_15] [i_15] [(_Bool)1] = ((/* implicit */unsigned char) ((int) arr_27 [i_23 - 1] [i_23 - 2] [7LL] [6] [i_23] [i_23 + 1]));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) arr_19 [i_3] [i_4] [i_4]))));
                        arr_84 [i_24] [i_15] [i_15] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_22 [i_17])))));
                        arr_85 [i_3] [10] [i_3] [(unsigned short)18] [i_15] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-6159)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 1) 
                    {
                        arr_88 [i_15] [i_4] [i_15] [i_17] [i_17] = ((/* implicit */int) arr_82 [i_25] [i_15] [i_15] [i_15] [i_3]);
                        var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) ((int) arr_43 [i_3] [i_17] [i_17] [i_25])))));
                        var_63 = ((/* implicit */unsigned char) ((_Bool) arr_33 [i_3] [i_15] [i_15] [i_17] [i_25] [i_25]));
                    }
                    for (unsigned long long int i_26 = 3; i_26 < 18; i_26 += 2) 
                    {
                        arr_91 [i_15] [i_17] [i_17] [i_15] [i_4] [i_15] = arr_75 [i_3] [i_3] [i_15] [i_17] [i_26 - 1];
                        var_64 *= ((/* implicit */signed char) arr_29 [i_15] [i_17] [i_17] [i_17] [i_17] [i_26 + 3] [i_26 + 2]);
                        arr_92 [i_3] [i_4] [i_3] [i_17] [(signed char)4] [i_26] [i_17] |= ((/* implicit */unsigned short) min((((arr_56 [i_26 - 2] [i_17] [i_17] [i_17] [i_15]) << (((((/* implicit */int) arr_48 [i_26] [i_26 + 3])) - (26651))))), (((/* implicit */long long int) arr_44 [i_26 + 3] [i_26 - 1] [i_26 - 2] [i_26 - 3] [i_26 - 3]))));
                        arr_93 [i_15] = ((unsigned long long int) (-(((int) arr_32 [i_3] [i_4] [i_15] [i_4]))));
                    }
                }
                for (unsigned short i_27 = 0; i_27 < 22; i_27 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_28 = 1; i_28 < 20; i_28 += 2) 
                    {
                        var_65 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_27])) < (((/* implicit */int) arr_15 [i_15]))));
                        arr_98 [i_15] [i_15] [i_4] [i_4] [i_27] [(unsigned char)2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_39 [i_28 - 1]))));
                        var_66 = ((/* implicit */signed char) arr_63 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (unsigned int i_29 = 0; i_29 < 22; i_29 += 2) 
                    {
                        var_67 = ((/* implicit */unsigned char) min((var_67), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_27] [i_29] [i_15] [i_15] [i_15] [i_3] [i_27]))))) * (((/* implicit */int) arr_94 [i_27])))))));
                        var_68 = ((/* implicit */unsigned short) arr_45 [i_4] [i_4] [i_27] [i_3] [i_3] [i_4] [i_3]);
                        var_69 = ((/* implicit */unsigned char) min((var_69), (((/* implicit */unsigned char) (!(((((/* implicit */int) arr_41 [i_29] [i_29] [i_29] [i_29])) != (((/* implicit */int) arr_82 [i_3] [i_29] [i_15] [i_29] [i_29])))))))));
                        var_70 = ((/* implicit */unsigned char) max((var_70), (((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_70 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))), (arr_81 [i_29] [i_29] [i_29] [i_3]))))));
                        var_71 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_75 [i_3] [i_4] [i_15] [(unsigned char)15] [i_29])) ? (((long long int) arr_72 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (arr_76 [i_3] [i_29] [i_15] [i_27] [i_29])));
                    }
                    for (long long int i_30 = 1; i_30 < 19; i_30 += 2) 
                    {
                        arr_105 [i_3] [i_4] [i_15] [i_15] [6] [i_30] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)54671)), (((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_3] [i_3] [i_15] [i_27] [i_30] [i_30 + 2]))) / (arr_76 [i_30 - 1] [i_15] [i_30 + 2] [i_30 + 1] [i_30 + 1])))));
                        var_72 = ((/* implicit */signed char) (unsigned char)247);
                    }
                    var_73 = ((/* implicit */signed char) ((((arr_36 [5U]) + (2147483647))) << (((((((/* implicit */int) ((signed char) arr_59 [i_3] [i_4] [i_15] [i_27]))) + (36))) - (10)))));
                    arr_106 [i_3] [i_4] [i_15] [i_27] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_65 [i_3] [i_3] [i_15] [i_15] [(unsigned short)7] [i_27]))) ? ((~(((/* implicit */int) arr_48 [i_3] [i_3])))) : ((~(((/* implicit */int) var_2))))));
                }
            }
        }
        var_74 *= (+(((((/* implicit */_Bool) arr_102 [0U] [i_3] [10LL] [i_3] [i_3])) ? (arr_102 [i_3] [(unsigned short)4] [(_Bool)1] [i_3] [i_3]) : (arr_102 [i_3] [i_3] [6U] [i_3] [i_3]))));
    }
}
