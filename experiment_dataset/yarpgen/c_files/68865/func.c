/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68865
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
    var_15 = ((/* implicit */long long int) var_11);
    var_16 = var_6;
    var_17 += ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_12))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_4] [i_2 + 1] [i_3] [i_3] [i_4] = arr_1 [i_0];
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_14 [i_3] [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_3]))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) var_11);
                            arr_20 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)0))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */int) var_3);
                            var_22 = (!(((/* implicit */_Bool) min((var_14), (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_11)))))))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_7] [i_0] = (-(((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_3])));
                            var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18528))))), (((unsigned long long int) (+(-4130013535982603786LL))))));
                            arr_27 [i_7] [i_1] [i_1] [i_3] = ((/* implicit */int) (unsigned char)0);
                        }
                        for (unsigned short i_8 = 3; i_8 < 12; i_8 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) (signed char)-1);
                            arr_30 [i_0] [i_1] [i_1] [12] [i_1] [i_3] [i_8 - 3] = (~(var_4));
                        }
                    }
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        var_25 += ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
                        var_26 = (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)27)), ((unsigned char)67)))));
                        var_27 = ((/* implicit */_Bool) var_14);
                        var_28 &= ((/* implicit */_Bool) (unsigned char)255);
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        var_29 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_0] [i_2 + 2] [i_2 - 1] [i_10] [i_10] [i_10] [i_10]))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [i_10] [i_10] [i_2] [i_2 + 2] [i_2])))))));
                    }
                    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_28 [i_2 - 1] [(signed char)14] [i_2] [i_2 + 3] [i_2 + 1] [i_2] [i_2 - 1])))), ((-((-(var_4)))))));
                        var_32 = ((/* implicit */_Bool) 8756498313954623989ULL);
                        var_33 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)0)))) - (((/* implicit */int) (signed char)120))));
                        arr_40 [i_0] [i_1] [i_2] [i_2 + 3] [i_0] [i_2 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (unsigned char)57)) : ((-(var_14)))));
                        var_34 = ((/* implicit */int) var_0);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        var_35 = min((arr_18 [i_12] [i_2] [i_1] [i_1] [i_12]), (((/* implicit */long long int) ((unsigned char) (unsigned char)0))));
                        /* LoopSeq 4 */
                        for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            var_36 = ((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)5] [i_12] [i_2 + 2] [i_12]);
                            arr_47 [i_1] [i_1] [i_1] [i_1] &= var_9;
                            var_37 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((var_14), (var_2)))), (((arr_3 [i_13]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_12] [i_1])) ? (((/* implicit */int) (signed char)20)) : (900416495)))) : (681003567345515050LL)))));
                            var_38 = ((/* implicit */unsigned char) max((arr_34 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2]), (arr_34 [i_2 + 1] [i_2 + 1] [i_2 + 3] [2ULL])));
                        }
                        for (unsigned char i_14 = 2; i_14 < 12; i_14 += 1) /* same iter space */
                        {
                            var_39 += ((/* implicit */signed char) max((max((-2351120295396085625LL), ((+(-4130013535982603786LL))))), (((/* implicit */long long int) (unsigned char)43))));
                            var_40 = ((/* implicit */_Bool) min((max((1696213428), ((-(((/* implicit */int) var_3)))))), ((-(var_14)))));
                            arr_50 [i_14] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) max((((unsigned short) arr_43 [i_1] [i_12] [i_2] [i_1] [i_1] [i_0])), (((/* implicit */unsigned short) var_12)))))));
                            var_41 = ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_4)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)));
                        }
                        for (unsigned char i_15 = 2; i_15 < 12; i_15 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned short) ((signed char) (unsigned char)135))))))));
                            arr_55 [(unsigned short)13] [i_1] [4ULL] [i_12] [i_15 - 1] [i_15] = ((/* implicit */unsigned short) ((unsigned int) 8135530079074247578ULL));
                            var_43 ^= ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) (short)8327)))));
                        }
                        for (short i_16 = 2; i_16 < 14; i_16 += 3) 
                        {
                            var_44 |= (~((-(arr_52 [i_0] [i_0] [i_1] [i_2] [i_1] [i_16 - 2]))));
                            var_45 = ((/* implicit */_Bool) ((unsigned int) (-(arr_52 [12] [i_2] [i_2] [i_2 + 2] [i_16 - 1] [i_16 - 1]))));
                            var_46 = ((/* implicit */int) arr_21 [i_0] [i_16] [i_2 + 1] [i_16] [i_1]);
                        }
                        var_47 = ((/* implicit */short) var_14);
                        var_48 = ((/* implicit */_Bool) arr_41 [i_2 - 1] [i_2 + 3] [i_2 + 3] [i_1] [i_1]);
                        arr_59 [(_Bool)1] [i_1] [i_2 + 1] [i_12] = var_5;
                    }
                    for (unsigned int i_17 = 1; i_17 < 14; i_17 += 1) 
                    {
                        var_49 |= ((/* implicit */unsigned char) min(((+(arr_16 [i_1] [(_Bool)1] [i_2]))), (((/* implicit */unsigned long long int) var_11))));
                        var_50 = ((/* implicit */short) -1242058150);
                    }
                    /* vectorizable */
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 3) 
                    {
                        arr_66 [i_2 - 1] = arr_60 [i_0] [i_0] [i_2 + 1] [i_2 + 3] [i_18];
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_71 [i_2] [i_18] [i_2] [i_0] = ((/* implicit */signed char) ((long long int) (unsigned char)0));
                            arr_72 [i_19] [i_18] [i_18] [i_2] [2U] [8] = ((/* implicit */int) arr_49 [i_18] [i_1] [i_1] [i_2 + 1] [(_Bool)1] [0U]);
                            arr_73 [i_19] [i_18] [i_2] [(_Bool)1] [i_0] = ((/* implicit */_Bool) var_10);
                            var_51 = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_2]) >= ((-(((/* implicit */int) arr_44 [i_0] [i_0]))))));
                            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) (-((-(((/* implicit */int) arr_37 [i_18] [i_2] [i_1] [i_0])))))))));
                        }
                        for (signed char i_20 = 2; i_20 < 13; i_20 += 4) 
                        {
                            var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((arr_8 [i_20 + 2]) ? (((/* implicit */int) arr_8 [i_20 + 1])) : (((/* implicit */int) arr_8 [i_20 + 1])))))));
                            var_54 = ((/* implicit */unsigned long long int) arr_23 [i_2 + 3] [(signed char)8] [i_2] [i_2 - 1] [i_20 - 1]);
                        }
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_21 = 2; i_21 < 14; i_21 += 4) 
                    {
                        var_55 = ((/* implicit */int) max((var_55), ((-(((/* implicit */int) ((_Bool) (signed char)1)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) 900416498))));
                            var_57 = ((/* implicit */unsigned int) ((signed char) 347244602551951132LL));
                            arr_81 [i_0] [i_1] [i_2 + 2] [i_21 + 1] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                            var_58 ^= ((/* implicit */unsigned char) var_9);
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                        {
                            var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_23] [i_21] [i_2] [i_1] [i_0])) || ((!(var_3)))));
                            var_60 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -7803684178703195251LL))))) * (((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                        {
                            arr_87 [i_24] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_49 [i_2 + 3] [i_21 + 1] [i_21] [i_21] [i_21 - 1] [i_24]))));
                            arr_88 [i_0] [i_2] &= ((/* implicit */long long int) var_6);
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                        {
                            var_61 ^= ((/* implicit */int) (-(arr_22 [i_0] [i_21 + 1] [i_2 + 1] [i_0] [i_2])));
                            arr_92 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                        }
                        var_62 = ((/* implicit */unsigned int) ((arr_10 [i_21 + 1] [i_2] [i_2] [i_1] [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        /* LoopSeq 2 */
                        for (signed char i_26 = 0; i_26 < 15; i_26 += 2) 
                        {
                            var_63 *= ((/* implicit */unsigned char) (~(arr_64 [i_0] [i_0] [i_0] [i_0])));
                            var_64 = ((/* implicit */long long int) arr_94 [i_2 + 1] [i_21 - 1] [i_21] [i_21 - 2] [i_21] [i_26]);
                        }
                        for (long long int i_27 = 0; i_27 < 15; i_27 += 3) 
                        {
                            var_65 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                            var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_16 [i_2] [i_27] [i_27])));
                        }
                    }
                    for (signed char i_28 = 0; i_28 < 15; i_28 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_29 = 1; i_29 < 13; i_29 += 4) 
                        {
                            arr_103 [i_0] [i_29 + 2] [(_Bool)0] [i_29] [i_28] [i_29] [i_2 + 2] = ((/* implicit */long long int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) (~(arr_6 [i_0]))))));
                            var_67 = ((/* implicit */unsigned int) arr_25 [i_29 + 2] [i_28] [i_28] [i_2 + 2] [i_1] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned int i_30 = 0; i_30 < 15; i_30 += 1) 
                        {
                            var_68 ^= ((/* implicit */int) (~(var_0)));
                            var_69 = ((/* implicit */_Bool) max((var_69), (((/* implicit */_Bool) (~(var_9))))));
                        }
                        var_70 = min((((/* implicit */unsigned long long int) (signed char)-98)), (((((/* implicit */_Bool) -1408361298)) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (11715164636467634817ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-1), (var_10))))))));
                    }
                    for (int i_31 = 2; i_31 < 14; i_31 += 3) 
                    {
                        var_71 = ((/* implicit */unsigned long long int) max((((int) (unsigned char)8)), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8338)))))));
                        arr_109 [i_0] [i_31] [i_2 + 2] [i_31] = (i_31 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */short) arr_102 [i_2 - 1] [i_31] [i_31] [i_31] [i_31 + 1])), ((short)-8334)))) + (2147483647))) >> (((min((arr_33 [i_31 - 2] [i_31 - 1] [i_31 - 2] [i_31] [i_2 + 3]), (arr_33 [i_31] [i_31 + 1] [i_31 + 1] [i_2] [i_2 + 1]))) + (523784648)))))) : (((/* implicit */signed char) ((((((((/* implicit */int) max((((/* implicit */short) arr_102 [i_2 - 1] [i_31] [i_31] [i_31] [i_31 + 1])), ((short)-8334)))) - (2147483647))) + (2147483647))) >> (((min((arr_33 [i_31 - 2] [i_31 - 1] [i_31 - 2] [i_31] [i_2 + 3]), (arr_33 [i_31] [i_31 + 1] [i_31 + 1] [i_2] [i_2 + 1]))) + (523784648))))));
                        var_72 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-8335))));
                    }
                    for (_Bool i_32 = 0; i_32 < 0; i_32 += 1) 
                    {
                        arr_112 [i_0] [i_1] [(_Bool)1] [i_32] [i_32] = ((/* implicit */unsigned int) var_3);
                        /* LoopSeq 2 */
                        for (int i_33 = 0; i_33 < 15; i_33 += 4) 
                        {
                            arr_116 [i_2] [i_32] [i_2] [i_2] [i_2] = ((int) min((arr_9 [i_2 + 3] [i_33] [i_2] [i_32 + 1] [i_33] [i_2]), (((/* implicit */long long int) (signed char)-112))));
                            var_73 = ((/* implicit */signed char) ((unsigned short) max((((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_49 [i_33] [i_0] [i_2 + 2] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_107 [i_32] [11] [i_2] [i_32 + 1] [i_32])))));
                            var_74 = ((/* implicit */int) arr_98 [i_0] [6LL] [6LL] [i_32]);
                            var_75 = ((long long int) min((-1152921504606846976LL), (((/* implicit */long long int) (+(arr_63 [i_33] [i_2] [i_0] [i_0]))))));
                        }
                        for (long long int i_34 = 2; i_34 < 11; i_34 += 2) 
                        {
                            var_76 = ((/* implicit */int) max((var_76), (((/* implicit */int) max((min((var_0), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (-(arr_78 [i_0] [i_2 + 3] [i_34 + 2])))))))));
                            arr_119 [i_0] [i_1] [i_32] [i_32] [10] = arr_102 [i_0] [i_32] [(signed char)10] [i_32] [i_34];
                            arr_120 [i_32] [i_32 + 1] [i_2 + 1] [i_2] [i_1] [i_32] = var_10;
                            arr_121 [i_32] [i_2 + 1] [i_32 + 1] = ((signed char) (+(var_2)));
                            var_77 |= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_110 [i_2 + 1] [i_34] [i_34] [i_2]))))));
                        }
                        arr_122 [i_32] [i_32 + 1] [i_32] [i_32] = ((/* implicit */unsigned short) (+(var_13)));
                        var_78 = ((/* implicit */unsigned short) var_12);
                    }
                }
            }
        } 
    } 
    var_79 = ((/* implicit */int) var_7);
}
