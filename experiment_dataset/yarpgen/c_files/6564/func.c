/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6564
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
    var_13 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */int) max((var_14), (((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))) < (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) arr_0 [(short)14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)121)))))))))));
            var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((arr_5 [i_1]), (((/* implicit */unsigned long long int) (unsigned char)90))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_1] [2U] [i_1] = ((/* implicit */signed char) (+((-(var_8)))));
                    arr_16 [i_2] [(unsigned char)16] [i_1] [i_3] [(signed char)17] = ((/* implicit */short) ((_Bool) var_12));
                    var_16 = ((/* implicit */unsigned char) ((_Bool) ((short) var_3)));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) arr_12 [(unsigned char)8] [i_4] [20U] [i_1] [i_0]);
                        var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    }
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_6] [i_1] [(unsigned char)19] [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_1]);
                        var_19 += ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (arr_21 [(_Bool)1] [i_1] [i_2] [(signed char)12] [i_7]))))));
                        var_20 += ((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_0 [9U])))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_4] [i_2] [i_1] [i_0])))))));
                    var_22 = ((/* implicit */short) var_9);
                    arr_31 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_10 [(unsigned char)10] [i_1] [i_1] [i_4])) : (((/* implicit */int) (signed char)125)))))));
                    var_23 = ((/* implicit */unsigned char) (~(arr_6 [i_2] [i_1] [i_0])));
                }
                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_1]))))) % (((((/* implicit */_Bool) (short)19632)) ? (((/* implicit */long long int) var_6)) : (var_8)))));
                /* LoopSeq 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_25 = ((/* implicit */signed char) (short)-21611);
                    var_26 = ((/* implicit */unsigned int) arr_18 [i_0] [i_1]);
                }
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    arr_38 [10ULL] [10ULL] [10ULL] [i_1] [i_9] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 4294967281U))) ? (((var_8) & (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)19626))));
                        var_28 ^= ((/* implicit */unsigned int) ((arr_5 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_33 [16LL] [i_1] [i_2] [i_9]))));
                        arr_41 [i_1] [i_10] [i_9] [i_0] [(short)12] [i_1] = ((/* implicit */unsigned short) var_3);
                    }
                    for (unsigned int i_11 = 1; i_11 < 21; i_11 += 2) 
                    {
                        arr_44 [i_0] [8U] [i_1] [i_2] [i_1] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)126)) / (((/* implicit */int) (signed char)-47))))) & (var_0))))));
                    }
                    var_31 |= ((/* implicit */short) arr_22 [i_1] [i_1] [i_2] [i_9] [i_9] [20U] [i_2]);
                    arr_45 [i_0] [i_0] [i_0] [i_0] [i_1] = (+(((/* implicit */int) (short)-1)));
                }
                for (unsigned char i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    arr_49 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_12] [i_12 + 2] [i_12] [i_12 + 1] [i_12 + 2] [i_1] [i_12]))));
                    arr_50 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2924)) % (((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] [6ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_26 [i_0] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 2])) : (((/* implicit */int) arr_26 [i_12] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]))));
                        arr_55 [i_0] [i_1] [8LL] [i_1] [i_0] = ((/* implicit */int) (-(var_0)));
                        arr_56 [i_0] [i_1] [i_2] [i_1] [i_13] [i_12 - 1] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                    }
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_59 [(_Bool)1] [i_1] [i_2] [i_12] [i_14]))));
                        var_33 = ((/* implicit */unsigned long long int) ((arr_7 [i_0] [(signed char)17] [i_2] [i_12 - 1]) << ((((~(var_3))) - (4754209668582065992ULL)))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        arr_63 [i_15] [i_1] [i_2] [i_1] [12U] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) var_10))));
                        var_34 -= ((/* implicit */_Bool) ((signed char) var_1));
                    }
                }
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) var_9))));
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_36 ^= (+((-(var_3))));
                        arr_69 [i_16] [i_1] = ((/* implicit */_Bool) ((arr_46 [i_1] [i_1] [i_16] [i_17]) << (((18446744073709551615ULL) - (18446744073709551587ULL)))));
                        arr_70 [i_1] [i_16] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)15);
                    }
                    for (short i_18 = 0; i_18 < 22; i_18 += 3) 
                    {
                        arr_74 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)105))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_12))));
                        arr_75 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_18] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) (short)27)) | (((/* implicit */int) (short)-19625))));
                        arr_76 [i_18] [i_16] [i_16] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_17 [i_0] [(unsigned char)13] [i_16] [i_16] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                    }
                    arr_77 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_2);
                    var_38 = ((/* implicit */long long int) arr_19 [i_16] [i_1] [i_1]);
                }
                for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    arr_80 [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_36 [i_1] [i_2] [i_2] [i_0]))));
                    var_39 = ((/* implicit */long long int) ((unsigned int) var_1));
                    var_40 = ((/* implicit */unsigned int) max((var_40), ((+(((unsigned int) var_5))))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19639)) ? (((/* implicit */int) (short)19629)) : (((/* implicit */int) (signed char)117))));
                            var_42 = ((/* implicit */unsigned short) ((arr_1 [i_0]) ? (((((/* implicit */int) (_Bool)1)) << (((arr_78 [i_1] [i_21]) - (8975334545649343128LL))))) : (((((/* implicit */int) (short)19613)) & (((/* implicit */int) var_5))))));
                            var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_20] [i_21])))))) >= (var_0))))));
                            var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_45 = ((/* implicit */_Bool) arr_61 [i_0] [i_1] [i_1] [(_Bool)1] [i_20]);
                    var_46 = ((/* implicit */int) max((((unsigned char) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_1))))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)65510), (arr_59 [i_1] [i_0] [(signed char)8] [i_20] [(_Bool)1])))) || (((/* implicit */_Bool) arr_33 [i_23] [i_20] [i_0] [i_0])))))));
                }
                for (short i_24 = 0; i_24 < 22; i_24 += 1) 
                {
                    arr_93 [i_20] [i_20] |= ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */_Bool) 1352423493473837588ULL)) ? (var_3) : (((/* implicit */unsigned long long int) 2305843009213693951LL)))) >= (((/* implicit */unsigned long long int) ((arr_3 [i_1]) ? (var_0) : (arr_22 [i_0] [i_0] [(short)14] [i_24] [i_0] [i_20] [i_20])))))));
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) max((((arr_60 [6LL] [i_1] [i_20] [i_20] [i_20]) ? (((/* implicit */long long int) (-(arr_28 [i_0] [i_20] [i_1] [21LL] [i_0])))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (4127459676180404954LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_0] [i_1]))) % (var_2))))))));
                }
                var_48 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_65 [(short)18] [i_20] [i_0])) ? (arr_29 [i_0] [i_0] [i_0] [i_0] [(signed char)20]) : (arr_29 [i_0] [i_1] [i_1] [i_1] [i_1]))), ((-(arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [14LL] [14LL] [0U] [i_1] [i_1] [i_20])))))));
            }
        }
        for (unsigned int i_25 = 0; i_25 < 22; i_25 += 3) /* same iter space */
        {
            arr_96 [(_Bool)1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) - (var_3)))) ? (var_3) : (((/* implicit */unsigned long long int) var_6))))));
            /* LoopSeq 1 */
            for (short i_26 = 0; i_26 < 22; i_26 += 1) 
            {
                arr_99 [i_26] [i_25] [i_25] = ((/* implicit */signed char) arr_71 [i_0] [i_0] [i_0] [i_0]);
                var_50 += ((max((((/* implicit */long long int) var_12)), (arr_51 [i_0] [i_0] [19ULL] [(unsigned short)15] [i_0] [i_25] [i_0]))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_73 [i_26] [i_0] [i_26] [i_25] [i_0] [i_25] [i_0]))))));
                var_51 -= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (var_4))))) & (arr_17 [i_0] [(unsigned char)4] [i_26] [i_25] [i_25] [i_26]))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                arr_100 [i_26] [10ULL] [i_26] = ((/* implicit */unsigned int) var_2);
                arr_101 [i_26] = ((/* implicit */signed char) max(((+(var_3))), (((/* implicit */unsigned long long int) (short)-2))));
            }
        }
        var_52 += ((/* implicit */short) arr_67 [i_0] [(_Bool)1] [i_0] [2] [i_0] [(_Bool)1] [i_0]);
        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_68 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_57 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_57 [i_0] [i_0] [i_0]))))))))));
        var_54 *= ((/* implicit */long long int) min(((-(((/* implicit */int) (!(var_4)))))), (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (max(((short)(-32767 - 1)), (((/* implicit */short) arr_98 [i_0] [i_0] [i_0])))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 2) 
    {
        for (short i_28 = 1; i_28 < 15; i_28 += 1) 
        {
            {
                var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) max(((+(((/* implicit */int) (short)19602)))), (((/* implicit */int) var_7)))))));
                var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */short) (_Bool)1)), (var_12))))) ? (((/* implicit */int) ((((/* implicit */int) (short)19605)) < (((/* implicit */int) (short)11997))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_107 [i_27] [i_27] [i_28 + 2]))))))));
                var_57 = (((~(arr_62 [9] [i_28 + 2] [i_28] [i_27] [i_27] [i_28 + 1] [9ULL]))) >> (((((((/* implicit */_Bool) arr_62 [i_27] [(_Bool)1] [i_27] [i_28 + 2] [i_27] [i_28 - 1] [i_27])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_62 [i_27] [i_28 + 1] [i_27] [i_27] [i_27] [i_28 + 2] [i_27]))) - (1612121986ULL))));
            }
        } 
    } 
    var_58 -= ((/* implicit */unsigned long long int) var_4);
}
