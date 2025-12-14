/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70814
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
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
    var_14 = ((/* implicit */short) ((int) (((-(var_0))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
    var_15 &= ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_8)))), (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [(signed char)13]);
        var_17 = ((/* implicit */unsigned short) var_5);
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) 433980385U)) ? (((unsigned long long int) arr_4 [i_1])) : (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)82))))) && (((/* implicit */_Bool) (signed char)86)))))));
        arr_8 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_6 [i_1])) + (((/* implicit */int) arr_6 [3]))))))), (min((((/* implicit */unsigned long long int) arr_5 [i_1])), (17414264442461387793ULL)))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) arr_7 [i_2]);
        /* LoopSeq 3 */
        for (signed char i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)115)) >> ((((~(arr_14 [4U]))) - (5105865724443468629ULL)))))) ? (max((max((1032479631248163822ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1030709769848324787LL))))))) : (((/* implicit */unsigned long long int) ((min((var_12), (var_9))) << (((((arr_14 [4]) >> (((/* implicit */int) var_6)))) - (13340878349266082983ULL)))))))))));
            var_20 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_13 [i_2]) : (var_4))))), ((~(arr_14 [i_2])))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
        {
            var_21 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 18; i_5 += 1) 
            {
                for (int i_6 = 4; i_6 < 16; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) arr_10 [i_2]);
                        var_23 *= max((max((max((((/* implicit */unsigned long long int) var_0)), (arr_15 [(short)6] [(short)6] [i_5 - 2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)82))))))), (((/* implicit */unsigned long long int) var_8)));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_5 [i_2])), ((~(((((/* implicit */unsigned long long int) arr_10 [(signed char)10])) | (var_1))))))))));
                arr_27 [i_2] [i_2] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-55))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        {
                            arr_33 [i_2] [(unsigned short)4] [i_7] [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_9] [i_4] [i_2] [(_Bool)1])) >= (((/* implicit */int) var_11)))))) + (((((/* implicit */_Bool) arr_15 [i_2] [(signed char)14] [i_9])) ? (1030709769848324788LL) : (((/* implicit */long long int) 2687774719U))))));
                            arr_34 [9] [15LL] [i_7] [i_8] [i_2] [i_8] = ((/* implicit */signed char) -5386545746159930820LL);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 4140424600269392700LL)) ? (((/* implicit */int) arr_20 [i_2] [i_4] [i_2] [i_7])) : (((/* implicit */int) arr_9 [i_2])))) << (((((/* implicit */int) (signed char)-82)) + (105)))))), (var_5)));
            }
            for (short i_10 = 3; i_10 < 15; i_10 += 2) 
            {
                var_26 = ((/* implicit */short) ((var_12) << (((((((/* implicit */int) var_3)) + (126))) - (22)))));
                var_27 -= ((/* implicit */short) (+(var_4)));
                var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_12 = 2; i_12 < 18; i_12 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12]))) : (2687774735U))))));
                    arr_44 [i_2] [i_12] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_22 [i_2] [17] [i_11] [(short)0] [i_2] [i_12]))))));
                }
                for (int i_13 = 2; i_13 < 18; i_13 += 3) /* same iter space */
                {
                    var_30 *= ((/* implicit */unsigned int) (signed char)-42);
                    arr_47 [i_2] [i_11] [i_11] [(unsigned short)2] = ((/* implicit */signed char) arr_14 [i_2]);
                    arr_48 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_13 + 1])) ? (arr_28 [i_2] [i_4] [i_11] [i_2]) : (var_8)))) ? (1032479631248163815ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2] [i_2])) ? (arr_26 [(unsigned short)9] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_2]))))))));
                }
                for (int i_14 = 2; i_14 < 18; i_14 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_6)))));
                    arr_53 [i_2] [i_2] [i_11] [i_14] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_43 [i_4] [i_2] [i_11] [i_2] [i_11])))) % (((((/* implicit */long long int) arr_28 [i_2] [i_11] [i_4] [i_2])) % (var_5)))));
                    var_32 = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (int i_15 = 1; i_15 < 16; i_15 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) ((unsigned long long int) (+(var_9))));
                        arr_58 [i_2] [i_4] [i_11] [i_11] [(unsigned char)0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) : (9810506773476427416ULL)))) ? (((/* implicit */int) arr_55 [i_2] [i_2] [i_2] [(unsigned char)0] [i_2])) : ((+(((/* implicit */int) arr_24 [i_15] [i_2] [i_2] [i_2]))))));
                    }
                    for (int i_16 = 1; i_16 < 16; i_16 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23046))) : (((((/* implicit */unsigned long long int) 1030709769848324778LL)) * (arr_51 [i_2] [i_4] [i_11] [i_14] [i_16])))));
                        var_35 = ((/* implicit */unsigned long long int) ((((arr_4 [i_14 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_2] [i_2] [i_2] [(signed char)2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (_Bool)1)) : (var_8))))));
                    }
                }
                for (int i_17 = 2; i_17 < 18; i_17 += 3) /* same iter space */
                {
                    arr_64 [i_2] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_17] [i_17 + 1] [i_17] [i_17]))));
                    var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_17 - 1] [(short)11] [i_17] [i_17 - 1]))));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_7 [i_17 + 1]))));
                    arr_65 [i_2] [i_2] [i_2] [i_4] [i_11] [i_17] = ((/* implicit */short) arr_41 [i_2] [i_4] [i_11] [(short)14]);
                }
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-79))))) ? ((~(251658240U))) : (arr_23 [i_2])));
            }
            for (int i_18 = 4; i_18 < 17; i_18 += 1) 
            {
                var_39 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_18 - 4] [i_18 - 4] [i_18 - 4] [i_18])) >> (((((/* implicit */int) arr_17 [i_18 - 4] [i_18 - 4] [i_18] [i_18])) - (19170)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_18 + 1] [i_18 - 1] [i_18] [(signed char)7]))) : (((long long int) arr_17 [i_18 - 4] [i_18 + 1] [i_18 - 3] [i_18 + 1])));
                var_40 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) (signed char)19)) ? (1032479631248163846ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_18 - 2] [i_18 - 2] [i_18] [i_18 - 1] [i_18])) >= (((/* implicit */int) arr_52 [i_18] [i_18 - 2] [i_18] [i_18 - 1] [i_4])))))));
                var_41 *= ((/* implicit */unsigned short) ((var_8) & (max((((((/* implicit */int) (unsigned char)83)) << (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_23 [i_2])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)-11))))))));
            }
        }
        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 3) /* same iter space */
        {
            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (signed char)61))))) ? (1032479631248163804ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_36 [(signed char)0])) : (((/* implicit */int) (_Bool)1))))))))))));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_42 [i_2] [i_19] [i_19] [i_19] [i_2])), (((((/* implicit */_Bool) 1607192577U)) ? (((/* implicit */long long int) arr_19 [i_2] [i_2] [i_2] [(unsigned char)12])) : (arr_26 [i_19] [i_2])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_19])))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [i_2] [i_19] [i_2]))) / (arr_43 [i_2] [i_19] [(unsigned short)12] [(unsigned short)12] [(short)12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_20 = 0; i_20 < 19; i_20 += 1) 
            {
                arr_76 [18] &= ((/* implicit */int) var_10);
                /* LoopSeq 2 */
                for (unsigned short i_21 = 0; i_21 < 19; i_21 += 2) 
                {
                    var_44 = ((/* implicit */_Bool) arr_29 [i_20] [(unsigned short)0] [(unsigned short)0]);
                    var_45 = ((/* implicit */signed char) arr_5 [i_2]);
                    /* LoopSeq 1 */
                    for (short i_22 = 1; i_22 < 18; i_22 += 1) 
                    {
                        arr_83 [i_2] [i_20] [i_20] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_21])) ? (((/* implicit */int) arr_29 [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_7 [i_20])))));
                        var_46 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (arr_43 [i_2] [i_19] [i_20] [i_20] [i_22])))));
                        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-3030151824323518578LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_2] [i_19] [i_2] [i_22])))));
                        arr_84 [i_2] [i_2] [i_20] [i_21] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_28 [i_2] [i_19] [14U] [i_2])))) ? ((+(10951895505460109062ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [(signed char)8] [i_20] [(short)4] [i_22 - 1])))));
                    }
                }
                for (unsigned short i_23 = 3; i_23 < 17; i_23 += 1) 
                {
                    var_48 = ((/* implicit */long long int) arr_57 [i_2] [i_20] [14LL] [i_20] [13]);
                    /* LoopSeq 1 */
                    for (signed char i_24 = 0; i_24 < 19; i_24 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_2] [i_19] [i_20] [i_23 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (arr_72 [i_24] [i_2] [i_19])));
                        var_50 *= ((/* implicit */_Bool) ((short) (unsigned char)155));
                        var_51 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    }
                }
                var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_78 [i_2] [i_2] [i_19] [i_20] [i_20])) ? (arr_72 [i_20] [(short)16] [0U]) : (((/* implicit */unsigned long long int) var_8)))))));
                var_53 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_59 [i_2] [i_2] [5U] [i_2] [i_2] [i_2])))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -2029210040)) : (arr_49 [i_19] [i_19] [i_20])))));
            }
            for (unsigned int i_25 = 0; i_25 < 19; i_25 += 2) 
            {
                var_54 ^= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_81 [i_2] [i_2] [i_25] [i_2] [i_25] [i_2])) ? (((/* implicit */int) (unsigned short)32274)) : (((/* implicit */int) var_7))))), (min((((arr_80 [(signed char)17]) ? (7494848568249442553ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (max((7494848568249442553ULL), (arr_15 [i_25] [i_25] [i_25]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 1) 
                {
                    var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) max((arr_30 [i_2] [i_25] [i_25] [i_25] [(signed char)14]), (((/* implicit */unsigned short) arr_56 [i_2] [5U] [i_25] [i_26] [(unsigned short)9] [i_26])))))));
                    var_56 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_74 [i_2] [i_19] [(short)6] [i_2])) ? (((/* implicit */int) arr_36 [i_25])) : (((/* implicit */int) arr_36 [i_25])))) + (((/* implicit */int) max(((unsigned short)0), (arr_36 [i_25]))))));
                    /* LoopSeq 1 */
                    for (long long int i_27 = 2; i_27 < 18; i_27 += 3) 
                    {
                        var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_27 - 2] [i_2] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_27 - 1] [i_2] [3LL]))) : (7494848568249442554ULL)))) ? (((/* implicit */int) max((arr_18 [i_27 - 1] [i_2] [i_27]), (arr_18 [i_27 - 1] [i_2] [i_27])))) : (((/* implicit */int) var_7))));
                        arr_99 [i_2] = arr_77 [i_27 - 2] [i_26] [i_25] [i_2] [i_2];
                    }
                }
                var_58 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_94 [i_2] [i_2] [i_19] [i_19] [i_25] [i_25])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160)))));
            }
        }
        var_59 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)173)) * (((/* implicit */int) (signed char)54))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_38 [i_2] [i_2] [i_2] [i_2]))))));
    }
}
