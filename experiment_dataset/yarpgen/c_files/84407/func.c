/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84407
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) 16857321789147949475ULL)) ? (16857321789147949475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (+(1589422284561602141ULL))))) ? ((+(arr_2 [i_0]))) : (((/* implicit */unsigned int) arr_1 [4LL] [4LL])))))));
        var_22 = ((/* implicit */signed char) (unsigned char)40);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_23 = ((unsigned int) (+(var_12)));
        var_24 += ((/* implicit */long long int) arr_4 [i_1 - 1] [i_1 - 1]);
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_5 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : (((long long int) arr_3 [i_1]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                var_26 = var_10;
                var_27 = ((int) (signed char)(-127 - 1));
            }
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_7 [i_1 + 1]))));
            var_29 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) <= (arr_5 [i_1]))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (unsigned char)53))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_31 = ((/* implicit */_Bool) var_8);
            /* LoopSeq 3 */
            for (signed char i_5 = 3; i_5 < 10; i_5 += 4) 
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(17086304994180040856ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_17)));
                arr_18 [(signed char)2] = (~(var_4));
            }
            for (unsigned int i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                arr_21 [i_1 + 1] [i_6] = ((/* implicit */unsigned short) ((signed char) (signed char)(-127 - 1)));
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : ((-(1589422284561602141ULL))))))));
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_1] [i_7] = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) arr_16 [i_1] [i_6] [i_4] [i_1])));
                    arr_26 [i_1] [i_1] [(signed char)6] [i_1 + 2] [i_7] [i_1] = ((/* implicit */signed char) arr_4 [i_1] [i_1]);
                }
                for (int i_8 = 1; i_8 < 12; i_8 += 4) 
                {
                    var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((5319054051114578696LL) == (-7322166089879018036LL))))));
                    arr_29 [i_8] = ((unsigned int) var_1);
                }
                for (long long int i_9 = 4; i_9 < 13; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_35 = ((unsigned int) (unsigned short)32767);
                        var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) : (1589422284561602141ULL)))) || (((/* implicit */_Bool) arr_20 [i_10] [i_4] [i_4]))));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) arr_23 [i_10] [i_6] [i_9]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        arr_39 [i_1] [i_4] [i_4] [i_9 + 1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_24 [i_1] [i_4] [i_1] [i_9 - 2])))));
                        arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) var_4);
                        arr_41 [i_1] [i_1] [i_6 - 2] [i_9] [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) arr_28 [i_1 + 2] [i_1] [i_6 - 1] [i_9 - 1]));
                        arr_42 [i_9] = ((/* implicit */unsigned int) ((long long int) (-(-995300612))));
                    }
                }
                var_38 = ((/* implicit */int) ((unsigned long long int) ((unsigned short) var_4)));
                arr_43 [i_1] = arr_22 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1];
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_47 [i_1] [i_12] = (+(4505237090318125485ULL));
                var_39 = ((/* implicit */int) 1632037267808229856ULL);
                /* LoopSeq 1 */
                for (unsigned char i_13 = 2; i_13 < 13; i_13 += 2) 
                {
                    var_40 = ((/* implicit */_Bool) ((unsigned short) arr_31 [i_1 + 2] [i_12] [i_12] [i_12] [i_12] [i_13 - 1]));
                    arr_51 [10ULL] [i_4] [i_12] [i_13] = ((/* implicit */unsigned int) ((var_18) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11318)))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_15 = 1; i_15 < 11; i_15 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) 4240934075487040467LL))));
                        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_12 [i_1 - 1])) >= (var_18))) ? (arr_37 [i_15 - 1] [i_15] [i_15 - 1] [i_15 - 1] [i_15 + 2]) : (((/* implicit */unsigned int) arr_55 [i_15 + 3] [i_15 + 3] [i_15 + 3] [i_15] [i_15 + 1] [i_15])))))));
                    }
                    for (unsigned char i_16 = 2; i_16 < 12; i_16 += 2) 
                    {
                        arr_60 [i_1] [i_12] &= (+(3901347481638578350ULL));
                        arr_61 [i_12] [i_12] [i_12] [i_12] [i_16 + 1] = ((/* implicit */unsigned char) var_19);
                        arr_62 [i_1] [i_4] [i_1] [i_12] [i_1] [i_16] = arr_57 [i_12] [i_4] [i_12] [(short)5] [i_16];
                    }
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1])) ? (arr_22 [i_1 + 1] [i_1 + 1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) var_15))));
                    var_45 |= ((/* implicit */unsigned int) ((_Bool) arr_53 [i_1 - 2] [i_1 + 2] [i_1 - 2]));
                }
                var_46 = ((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
            }
            /* LoopSeq 2 */
            for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                var_47 = ((/* implicit */int) ((arr_2 [i_1 + 1]) * (arr_2 [i_1 + 1])));
                var_48 = ((/* implicit */unsigned long long int) ((long long int) arr_23 [i_1] [i_1 + 2] [i_1]));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 3; i_18 < 11; i_18 += 4) 
                {
                    arr_69 [i_1] [i_4] [i_4] [i_18] = (i_18 % 2 == zero) ? (((/* implicit */int) (~(((var_4) >> (((/* implicit */int) arr_56 [i_18] [i_4] [(signed char)1] [i_18] [i_17]))))))) : (((/* implicit */int) (~(((var_4) >> (((((/* implicit */int) arr_56 [i_18] [i_4] [(signed char)1] [i_18] [i_17])) + (140))))))));
                    var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_7))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_50 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_20 [i_19] [i_4] [i_4])) == ((-(arr_7 [i_4])))));
                        var_51 = ((/* implicit */unsigned int) var_11);
                        var_52 ^= ((/* implicit */int) (signed char)-87);
                    }
                    for (long long int i_20 = 0; i_20 < 14; i_20 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_66 [i_1] [i_1] [i_1 + 2]))));
                        arr_75 [i_1 - 1] [i_18] [i_17] [i_17] [i_18] [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_18] [i_20]))));
                        arr_76 [i_18] [i_18] [i_17] [i_18] [i_18 + 2] [i_20] = ((/* implicit */int) var_17);
                    }
                }
                var_54 &= ((/* implicit */unsigned long long int) var_8);
            }
            for (unsigned int i_21 = 0; i_21 < 14; i_21 += 2) 
            {
                var_55 += ((/* implicit */unsigned char) arr_73 [i_1] [i_4] [i_4] [i_4] [i_1]);
                /* LoopSeq 1 */
                for (signed char i_22 = 2; i_22 < 11; i_22 += 1) 
                {
                    var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) arr_71 [i_21] [i_22] [i_22 + 3] [i_22 + 3] [i_22]))));
                    var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 7322166089879018036LL)) ? (1589422284561602141ULL) : (((/* implicit */unsigned long long int) 1073741823U))))))));
                }
                var_58 *= ((/* implicit */unsigned char) ((unsigned int) -950336064));
                /* LoopSeq 1 */
                for (unsigned char i_23 = 0; i_23 < 14; i_23 += 2) 
                {
                    var_59 = ((/* implicit */long long int) ((signed char) arr_23 [i_21] [i_4] [i_21]));
                    /* LoopSeq 1 */
                    for (unsigned int i_24 = 0; i_24 < 14; i_24 += 3) 
                    {
                        var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_85 [i_4] = ((/* implicit */_Bool) (-((+(arr_1 [i_4] [i_4])))));
                        var_61 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_73 [i_1 + 1] [i_4] [0] [i_23] [i_21])) ? (arr_8 [i_1 - 2] [i_4] [i_21]) : (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                        var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((330876598369927908ULL) | (((/* implicit */unsigned long long int) arr_8 [11LL] [11LL] [(signed char)7])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1589422284561602141ULL)) ? (((/* implicit */unsigned int) 768867778)) : (var_14))))));
                        arr_86 [i_23] [i_23] [i_23] [i_23] [i_1] [i_24] [i_23] = ((/* implicit */unsigned short) arr_38 [i_23] [i_4]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_25 = 0; i_25 < 14; i_25 += 4) 
                    {
                        var_63 = ((/* implicit */short) -5319054051114578697LL);
                        arr_90 [i_25] [i_23] [i_4] [i_21] [i_21] [i_4] [i_1] = ((/* implicit */unsigned char) ((int) var_9));
                    }
                    var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_19 [i_1] [i_21] [i_21])))) ? (((((/* implicit */_Bool) 6957662535941839493ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)43)))) : (((/* implicit */int) ((signed char) var_19))))))));
                }
            }
            arr_91 [i_1] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 0LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1]))) : (4294967295U)));
        }
    }
    var_65 = ((((/* implicit */_Bool) ((unsigned char) 11489081537767712122ULL))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_19)));
}
