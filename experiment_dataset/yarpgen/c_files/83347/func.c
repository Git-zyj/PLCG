/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83347
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_10 &= ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned short)21732)) : (((/* implicit */int) (unsigned short)65531)))) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1 - 3] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_1 + 3])) == (((/* implicit */int) arr_0 [i_1 - 2])))) ? (((/* implicit */int) min((arr_0 [i_1 - 1]), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) ((((/* implicit */long long int) 2067762277U)) == (-2475798479636169081LL))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 4) 
                        {
                            var_11 -= ((/* implicit */unsigned char) ((signed char) arr_6 [i_4 + 2] [i_2] [i_2]));
                            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (+(1757673405))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65502)))))));
                            var_14 &= ((/* implicit */unsigned short) (unsigned char)241);
                        }
                        for (short i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)17), ((unsigned short)65500)))) ? (max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)22))))), ((-(((/* implicit */int) (unsigned short)14)))))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_17 [i_6] [(signed char)10] [i_6] [i_1 + 1]))))));
                            var_16 = max((((/* implicit */unsigned short) ((((unsigned int) (short)-5607)) > (4015614487U)))), (((unsigned short) 16777215LL)));
                            var_17 = 4123168604160LL;
                        }
                        var_18 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)12490)) ? (((/* implicit */int) arr_6 [i_1 + 4] [i_2] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_2] [i_1 - 2])))) == (((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), ((short)12516))))));
                        var_19 *= ((/* implicit */unsigned short) -2147483630);
                        var_20 -= ((/* implicit */signed char) (unsigned short)29672);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned int) (unsigned short)7936);
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 9; i_8 += 2) 
        {
            for (long long int i_9 = 1; i_9 < 8; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_10 + 1] [i_11]))))) ? ((~(min(((-9223372036854775807LL - 1LL)), (-2475798479636169081LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-12484))) | (117388422U))))))));
                            }
                        } 
                    } 
                    var_24 ^= arr_7 [5ULL] [i_8 - 1];
                }
            } 
        } 
        var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)42885)), (2147483646)))) ? ((~(((/* implicit */int) arr_8 [i_7] [i_7])))) : (((((/* implicit */int) arr_8 [i_7] [i_7])) & (((/* implicit */int) arr_8 [i_7] [i_7]))))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_13 = 3; i_13 < 20; i_13 += 4) 
        {
            for (int i_14 = 2; i_14 < 20; i_14 += 2) 
            {
                for (unsigned char i_15 = 1; i_15 < 19; i_15 += 1) 
                {
                    {
                        var_26 = ((((/* implicit */_Bool) 2147483628)) ? (16777225LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16751))));
                        arr_43 [i_12] [i_13] [i_14] [i_13 - 2] [(unsigned char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_12 - 1])) && (((/* implicit */_Bool) arr_33 [11ULL]))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2475798479636169094LL)) ^ (7543829351936649564ULL)))) ? (((((/* implicit */_Bool) 13689080508031568181ULL)) ? (((/* implicit */int) (unsigned short)65507)) : (((/* implicit */int) arr_42 [i_12] [i_13] [i_14] [i_15])))) : (-1187269649)));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_16 = 3; i_16 < 19; i_16 += 4) 
        {
            var_28 = ((/* implicit */unsigned char) 117388433U);
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (int i_18 = 2; i_18 < 21; i_18 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            arr_55 [i_12 - 1] [i_12] [(short)16] [i_12] [i_12] &= ((unsigned long long int) (unsigned char)193);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)17)) >= (((/* implicit */int) arr_37 [i_12] [i_17 + 1] [i_19] [i_19]))));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)216)) || ((_Bool)0)));
                        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 4) 
            {
                for (unsigned char i_22 = 3; i_22 < 20; i_22 += 1) 
                {
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_22 + 2] [i_12 - 1] [i_12 - 1] [i_12 + 2])) ? (((/* implicit */unsigned int) -1187269641)) : (arr_34 [i_12 + 2] [i_22 - 3])));
                        var_33 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (short)12498))) / (-1187269638)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_23 = 3; i_23 < 21; i_23 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_67 [i_12] [i_12 + 1] [i_12] [i_12 - 1] [i_23 + 1])) & (((/* implicit */int) arr_67 [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_23 - 3]))));
                    arr_68 [i_12] [i_20] [i_12] [i_24] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_58 [i_24] [i_24] [i_23])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)32))))));
                }
                for (unsigned char i_25 = 0; i_25 < 22; i_25 += 4) 
                {
                    arr_72 [i_12] [i_25] [i_23] = ((/* implicit */short) ((unsigned short) (short)26860));
                    arr_73 [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_32 [i_23 - 2] [i_12 + 1]);
                }
                for (short i_26 = 0; i_26 < 22; i_26 += 4) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_74 [i_12] [i_12 + 1] [i_12] [i_12 - 1] [i_12 + 2] [i_12 + 1])) ? (arr_64 [i_12 + 1] [i_12 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_12] [i_20] [i_23] [i_26] [i_12 - 1] [i_12 - 1])))));
                    arr_76 [i_12 + 1] [i_20] [i_20] [(_Bool)1] [i_26] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_71 [i_20] [i_26]))));
                }
                for (unsigned int i_27 = 0; i_27 < 22; i_27 += 4) 
                {
                    var_36 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_37 [i_12 - 1] [i_12] [i_12 - 1] [i_12]))));
                    var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_66 [i_12] [(unsigned char)2] [13U] [i_27] [(short)19]))));
                    arr_81 [i_12] [(unsigned short)4] [i_23] [i_23] = ((((/* implicit */int) arr_69 [i_23] [i_12 + 1])) ^ (((/* implicit */int) (unsigned short)7907)));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_79 [i_23] [i_23 - 1] [i_12] [i_23 - 1] [i_23 - 1] [i_12])) ^ (((/* implicit */int) (short)12483))));
                    var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 902890857U)) & (5483253977069873099LL)))) ? (((/* implicit */unsigned long long int) 3227298151165418691LL)) : (9306323007552017926ULL)));
                }
                var_40 = ((/* implicit */unsigned char) (+(3392076450U)));
            }
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (-(9140421066157533689ULL))))));
            /* LoopNest 2 */
            for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
            {
                for (unsigned short i_30 = 0; i_30 < 22; i_30 += 4) 
                {
                    {
                        var_42 = ((/* implicit */int) ((long long int) arr_67 [i_12 + 2] [i_28] [i_29 + 1] [i_12 + 1] [(unsigned short)8]));
                        arr_88 [i_29] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7936)) > (((/* implicit */int) (unsigned short)38905))));
                    }
                } 
            } 
            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((17ULL) & (arr_70 [i_12] [i_12 + 1] [i_28] [i_12] [i_28] [i_12 + 2]))))));
            arr_89 [i_12] [i_12] = ((/* implicit */short) arr_45 [i_12 + 2]);
            var_44 *= ((/* implicit */unsigned char) (~(-13LL)));
        }
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            var_45 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)51)) == (((/* implicit */int) (unsigned char)190)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_67 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1]))));
            var_46 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (-36LL) : (-1579257587731749557LL))) | ((~(-1579257587731749557LL)))));
            /* LoopSeq 2 */
            for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
            {
                arr_95 [10U] [10U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) 41LL)))));
                /* LoopNest 2 */
                for (unsigned short i_33 = 3; i_33 < 20; i_33 += 1) 
                {
                    for (unsigned char i_34 = 0; i_34 < 22; i_34 += 4) 
                    {
                        {
                            arr_102 [i_12] [i_31] [i_33] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) (unsigned char)211))));
                            arr_103 [i_33] [i_31] [19ULL] [19ULL] [19ULL] = ((/* implicit */short) (~(((/* implicit */int) arr_59 [i_12 - 1] [i_32 - 1] [i_33 - 3] [i_33 - 3]))));
                        }
                    } 
                } 
                arr_104 [i_32 - 1] [i_31] [i_12] = ((/* implicit */unsigned short) ((arr_45 [i_12 + 1]) / (arr_45 [i_12 + 2])));
            }
            for (unsigned int i_35 = 0; i_35 < 22; i_35 += 2) 
            {
                var_47 *= ((/* implicit */signed char) -25LL);
                var_48 = ((/* implicit */unsigned long long int) ((short) arr_51 [i_12 + 1]));
                var_49 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -2916927050373273500LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (arr_56 [i_12 - 1] [(_Bool)1])));
                var_50 = ((/* implicit */unsigned char) ((short) arr_34 [i_12 + 1] [i_12 + 1]));
            }
            /* LoopNest 2 */
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                for (unsigned char i_37 = 3; i_37 < 21; i_37 += 4) 
                {
                    {
                        var_51 = ((/* implicit */unsigned char) (unsigned short)20459);
                        var_52 = ((((/* implicit */int) arr_77 [i_12] [i_37 - 1] [i_36] [i_36])) == (((/* implicit */int) (unsigned char)0)));
                    }
                } 
            } 
            var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_12] [i_31])) ? (((/* implicit */long long int) 2047)) : (-32LL)));
        }
    }
    var_54 = ((/* implicit */signed char) max((var_1), (((/* implicit */unsigned long long int) (!(((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
}
