/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81780
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)164)) : (-1155377736)))) ? (var_15) : (max((1155377750), (((/* implicit */int) var_5)))))) ^ (((/* implicit */int) (unsigned char)102)));
        arr_3 [i_0] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(signed char)7])) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_0 [(signed char)11])) : ((+(((/* implicit */int) (signed char)67)))))) : (1155377744)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1361777078)) ? (var_15) : (((/* implicit */int) (unsigned char)121))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_9 [i_0] [(unsigned char)10] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), (var_10))))))), (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_17)))), (((/* implicit */int) (signed char)122))))));
                    var_21 = -1155377725;
                }
            } 
        } 
    }
    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)97)) ? (-1155377739) : (((/* implicit */int) arr_10 [i_3]))));
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (max((((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 + 3]))) : (var_12))), (((/* implicit */unsigned int) ((signed char) arr_11 [i_3])))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */int) var_18)), (1155377741))), (((((/* implicit */int) arr_10 [i_3])) | (((/* implicit */int) var_2))))))) ? (((((/* implicit */int) var_2)) ^ (((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)187)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_2)) >> (((/* implicit */int) var_0))))))));
        arr_13 [1] = (~((-(((/* implicit */int) var_16)))));
    }
    for (unsigned char i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (signed char i_6 = 4; i_6 < 9; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 3; i_7 < 8; i_7 += 3) 
                    {
                        arr_25 [(unsigned char)1] = ((/* implicit */short) min((((/* implicit */int) arr_19 [i_7 - 2] [i_4] [i_5] [i_4])), ((+(((/* implicit */int) ((short) arr_14 [i_4])))))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned int) (~(((/* implicit */int) arr_15 [i_6 - 1]))))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) (+(arr_6 [i_4] [i_4] [i_4])));
                            arr_29 [i_4] [i_8] [i_6] [i_7 - 3] [(signed char)5] [(signed char)1] [i_5] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((arr_16 [i_4 + 3] [i_4 + 3] [i_6]) >> (((-1155377747) + (1155377747)))))) && (((/* implicit */_Bool) ((arr_11 [i_4]) / (((/* implicit */int) (unsigned char)205)))))))));
                            var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (min((arr_11 [i_4 + 2]), (arr_11 [i_4 + 3])))));
                        }
                        for (int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max(((+(((((/* implicit */int) var_1)) / (arr_6 [i_4 + 1] [i_5] [i_5]))))), (((/* implicit */int) ((((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned char)15)))) && (((/* implicit */_Bool) max((arr_0 [(signed char)3]), ((signed char)-123))))))))))));
                            var_28 = ((/* implicit */short) arr_28 [i_4] [(unsigned char)10] [i_5] [i_4] [i_7] [i_9]);
                        }
                    }
                    arr_32 [i_4 + 1] [i_4 + 1] [i_6] [i_4 + 1] = max(((-(((arr_16 [i_4] [i_4] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))))), (((/* implicit */unsigned int) ((arr_11 [i_6]) > (((/* implicit */int) var_18))))));
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned char) -1155377725);
    }
    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        var_30 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))));
        arr_36 [i_10] = var_11;
        var_31 += ((/* implicit */short) max(((+(((/* implicit */int) arr_10 [i_10])))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >> (((max((((/* implicit */unsigned int) var_2)), (var_12))) - (250560768U)))))));
        /* LoopSeq 4 */
        for (signed char i_11 = 2; i_11 < 9; i_11 += 2) 
        {
            arr_39 [(short)1] [2] [i_10] = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) 1155377751)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))));
            var_32 = ((/* implicit */unsigned char) min((max((((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (var_13)))), (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_11]))))))))));
            arr_40 [i_10] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_34 [i_11 + 3] [(signed char)8])) ? (max((arr_11 [i_10]), (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_8 [i_10] [i_11] [i_10] [i_11]))))));
        }
        for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            arr_43 [i_10] [i_12] = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) & (((((/* implicit */int) (unsigned char)58)) & (((/* implicit */int) arr_34 [i_10] [i_10])))))));
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_9))));
                var_34 += ((/* implicit */unsigned char) (-(((int) arr_42 [i_10] [i_10]))));
            }
            for (signed char i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
            {
                var_35 += ((/* implicit */signed char) var_12);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        var_36 = var_17;
                        var_37 -= ((/* implicit */unsigned char) var_3);
                        var_38 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_53 [i_10] [i_10] [i_10] [(signed char)7]))))));
                        var_39 = ((/* implicit */unsigned char) arr_38 [i_12] [i_15]);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        arr_56 [i_14] [i_10] = arr_48 [i_10] [i_12] [i_14] [i_14] [i_17];
                        arr_57 [i_10] [(unsigned char)5] [i_12] [i_12] [i_10] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) < ((-(((/* implicit */int) arr_48 [i_10] [i_12] [i_12] [i_15] [i_17]))))));
                        var_40 = arr_38 [i_10] [(unsigned char)0];
                    }
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        arr_62 [i_10] [i_10] [i_14] = var_0;
                        var_41 += ((16383) | (((/* implicit */int) (unsigned char)187)));
                        arr_63 [(unsigned char)7] [i_12] [i_14] [i_12] [i_18] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((signed char) (unsigned char)197)))));
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10] [i_10])) ? (((/* implicit */int) arr_58 [i_10] [i_10])) : (((/* implicit */int) arr_47 [i_10] [i_12] [i_12] [i_12]))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_6))))) : (((/* implicit */int) var_18))));
                    }
                }
                /* vectorizable */
                for (signed char i_19 = 2; i_19 < 11; i_19 += 3) 
                {
                    var_43 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) & (((/* implicit */int) var_9)))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_0)))) - (50)))));
                    var_44 = ((/* implicit */signed char) var_6);
                }
                /* LoopNest 2 */
                for (unsigned char i_20 = 2; i_20 < 10; i_20 += 3) 
                {
                    for (unsigned char i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        {
                            arr_72 [(unsigned char)8] [i_10] [i_14] [i_20] [0U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)50)) : (((((/* implicit */int) (unsigned char)97)) | (((/* implicit */int) arr_53 [i_10] [10U] [i_10] [i_20])))))) >> (((((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_1 [(unsigned char)10])))))) - (73)))));
                            arr_73 [i_10] [i_12] [i_12] [i_10] [(signed char)10] = ((/* implicit */unsigned char) arr_71 [(unsigned char)5] [(signed char)6] [i_20] [i_10] [i_20 - 1]);
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_22 = 0; i_22 < 13; i_22 += 1) 
        {
            arr_77 [i_10] [i_22] = arr_1 [i_10];
            var_45 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_22])) : (((/* implicit */int) arr_0 [(unsigned char)13])))));
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-111)), (var_6))))))) * (((/* implicit */int) arr_51 [i_10] [(signed char)10] [i_10] [i_10] [i_10] [i_10] [i_22]))));
        }
        for (signed char i_23 = 4; i_23 < 10; i_23 += 2) 
        {
            var_47 = ((/* implicit */signed char) var_4);
            /* LoopSeq 3 */
            for (unsigned char i_24 = 0; i_24 < 13; i_24 += 1) 
            {
                var_48 += ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_34 [i_10] [i_23])) >> (((((/* implicit */int) (unsigned char)159)) - (142))))) * (((var_15) / (((/* implicit */int) arr_48 [i_10] [i_10] [i_10] [i_23] [i_24])))))) + (min((((((/* implicit */int) arr_1 [i_24])) - (((/* implicit */int) arr_66 [i_24] [i_24] [i_23] [i_23] [i_10] [i_10])))), (((((/* implicit */_Bool) arr_53 [i_10] [i_23 - 1] [i_24] [(signed char)10])) ? (((/* implicit */int) var_10)) : (arr_44 [i_23] [i_10])))))));
                arr_82 [i_10] [i_24] [i_24] = ((/* implicit */signed char) ((int) ((signed char) min((arr_37 [i_10] [i_23] [i_24]), (((/* implicit */unsigned char) var_0))))));
            }
            for (signed char i_25 = 3; i_25 < 12; i_25 += 1) 
            {
                arr_87 [i_10] [i_10] [i_25 + 1] [i_10] = (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_10])) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_8 [i_25] [(signed char)11] [i_10] [i_10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))));
                var_49 = ((signed char) max((var_6), (var_8)));
                var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_15))))) - (1)))))) ? (((/* implicit */int) (unsigned char)64)) : ((-(((((/* implicit */int) arr_66 [(signed char)8] [i_23 + 1] [i_23] [i_23] [i_23 - 1] [i_10])) - (((/* implicit */int) var_10)))))))))));
            }
            for (unsigned char i_26 = 0; i_26 < 13; i_26 += 3) 
            {
                var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)-18))))))) ? (((/* implicit */int) min((var_7), (arr_8 [i_10] [i_23] [i_26] [i_23])))) : (((/* implicit */int) var_11))));
                var_52 -= ((/* implicit */signed char) arr_76 [i_23]);
                /* LoopSeq 3 */
                for (signed char i_27 = 1; i_27 < 10; i_27 += 4) 
                {
                    arr_93 [i_10] = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_65 [i_10] [i_10] [i_23] [i_10] [i_10] [i_27])), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))) & (((((/* implicit */int) arr_89 [i_23 + 2] [i_27 + 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) 268435455U)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_28 = 1; i_28 < 11; i_28 += 1) 
                    {
                        arr_98 [i_28 - 1] [i_27 + 1] [i_10] [(unsigned char)9] [i_10] [i_23] [i_10] = ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_37 [i_10] [i_26] [i_27])) : (((/* implicit */int) var_0)))) & (arr_97 [i_23 - 2] [i_23] [i_10] [i_27 + 3] [i_28 - 1]))));
                        arr_99 [i_10] [i_10] [i_26] [10] [i_10] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_11 [i_28 - 1])))) && (((((/* implicit */_Bool) arr_81 [i_10] [i_10] [i_27 + 2])) || (((/* implicit */_Bool) max(((short)32755), (((/* implicit */short) var_8)))))))));
                        var_53 -= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_68 [i_23])) + (2147483647))) << ((((((((~(((/* implicit */int) var_7)))) + (2147483647))) << (((((/* implicit */int) var_1)) - (13))))) - (2147483557)))));
                    }
                    var_54 &= ((/* implicit */unsigned char) ((max((((unsigned int) var_7)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))) + (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_16)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_71 [i_10] [i_10] [i_26] [i_23] [i_26])) : (((/* implicit */int) var_13)))))))));
                }
                /* vectorizable */
                for (unsigned char i_29 = 1; i_29 < 12; i_29 += 2) 
                {
                    arr_103 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((((((/* implicit */int) arr_94 [i_10] [i_23] [i_23 - 3] [i_10] [i_23] [i_29] [i_29])) + (2147483647))) >> (((((/* implicit */int) var_17)) + (137))))) * (((/* implicit */int) (short)-5080))));
                    var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_95 [i_10] [i_23]) / (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_66 [i_10] [i_10] [i_10] [i_10] [i_10] [(short)11])) : (((/* implicit */int) var_16))));
                    arr_104 [i_10] = ((/* implicit */unsigned int) ((signed char) arr_54 [i_10] [i_29] [i_29 + 1] [i_29] [i_29] [i_29]));
                }
                for (signed char i_30 = 0; i_30 < 13; i_30 += 3) 
                {
                    var_56 = (((+(((((/* implicit */int) (unsigned char)100)) | (((/* implicit */int) var_11)))))) >> (((((((/* implicit */int) (unsigned char)146)) >> (((((/* implicit */int) arr_42 [i_10] [i_26])) + (74))))) - (9))));
                    var_57 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_23 + 3]))));
                    var_58 = ((/* implicit */signed char) max(((-(arr_95 [i_10] [i_23 - 4]))), (((/* implicit */int) (unsigned char)61))));
                    var_59 = ((/* implicit */unsigned int) (+(((((((/* implicit */int) var_0)) > (((/* implicit */int) var_4)))) ? (((/* implicit */int) ((signed char) arr_83 [i_10]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_8))))))));
                }
            }
            arr_107 [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_92 [i_23] [i_23] [i_23 + 1]))) == (arr_4 [9] [i_23]))) ? ((-(((((/* implicit */int) (unsigned char)193)) / (((/* implicit */int) var_3)))))) : (((/* implicit */int) arr_86 [i_10] [i_10] [i_10]))));
        }
    }
    var_60 = ((/* implicit */signed char) var_2);
    var_61 ^= (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) var_7)))));
}
