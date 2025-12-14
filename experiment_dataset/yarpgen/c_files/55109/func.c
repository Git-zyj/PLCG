/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55109
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
    var_16 = ((/* implicit */short) var_6);
    var_17 = var_9;
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((17785031992775655888ULL) % (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))) ? ((-(((/* implicit */int) arr_4 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (arr_0 [i_0 - 4])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_19 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((/* implicit */long long int) arr_9 [i_2 - 1])) : (9090101724381947728LL))) ^ (((/* implicit */long long int) (~(arr_9 [i_1]))))));
                            arr_12 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (9090101724381947728LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (((+(var_15))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1]))))))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            var_22 *= ((/* implicit */unsigned int) arr_6 [i_2] [i_1] [i_1] [10U]);
                            arr_18 [i_6] [i_6] = ((/* implicit */int) 1282772234U);
                        }
                        arr_19 [i_0 + 2] [i_1] [i_3] = ((/* implicit */_Bool) arr_15 [i_0] [i_0 - 3] [i_0 - 2]);
                    }
                    var_23 = ((/* implicit */long long int) ((((arr_10 [i_0] [i_0] [i_2 + 2] [i_2 + 1] [i_0 + 3]) - (arr_10 [i_2 + 2] [i_1] [i_2 + 1] [i_2 + 1] [i_2]))) << (((((((arr_0 [i_2 + 3]) + (2147483647))) << (((var_14) - (6374312870655722478LL))))) - (1736651635)))));
                    arr_20 [i_2 + 2] [i_0 - 3] [i_1] [i_0 - 3] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((661712080933895727ULL) >= (661712080933895725ULL))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9090101724381947728LL)))) != ((~(17785031992775655888ULL)))))) : (min(((~(arr_9 [i_2 + 1]))), (arr_7 [i_0] [i_1] [i_1] [2U] [i_0] [2U]))));
                }
                var_24 = (+(min((((/* implicit */int) var_10)), (0))));
                arr_21 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_12);
                /* LoopSeq 4 */
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    arr_25 [i_1] [i_7] = ((/* implicit */unsigned long long int) ((short) (+(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_14 [i_0] [i_0] [i_7] [i_1] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                    {
                        arr_28 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] = (~(((/* implicit */int) var_11)));
                        var_25 = ((((/* implicit */int) (unsigned char)18)) - (((/* implicit */int) (unsigned short)63880)));
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_29 [i_0] [i_0] [i_7] [i_9]))));
                        var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [i_1])), (min((((/* implicit */unsigned long long int) (-(2147483647U)))), (((unsigned long long int) (unsigned short)53212))))));
                    }
                }
                for (int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (int i_12 = 2; i_12 < 14; i_12 += 1) 
                        {
                            {
                                arr_39 [i_11] [i_12] [i_12] [i_0 - 4] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_6 [i_1] [i_1] [i_1] [i_12]), (arr_4 [i_1])))) >> ((((~(arr_16 [i_12 + 1] [i_10] [i_10] [i_0 - 2] [i_0 - 2]))) - (1481059489)))));
                                arr_40 [i_0 + 1] [i_12] = ((/* implicit */unsigned int) (-((+(arr_14 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0])))));
                            }
                        } 
                    } 
                    var_28 = arr_7 [i_0] [i_1] [2LL] [2LL] [i_10] [i_1];
                }
                for (int i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0])) : (arr_38 [i_0] [i_1] [i_1] [i_13] [i_1] [i_15])))) && (((/* implicit */_Bool) min((((((/* implicit */long long int) 367348760)) & (9223372036854775803LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_13] [i_14] [i_15]))))))))));
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(arr_22 [i_0 - 2] [i_1] [i_0 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [4U] [i_13] [i_14]))) : (((-9153192200587945726LL) % (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
                                arr_50 [i_15] [i_14] [i_13] [i_1] [i_0 + 1] = ((/* implicit */int) min((((((/* implicit */_Bool) (-(8796093022207LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_1] [i_15] [i_0 + 1] [i_1] [i_1] [i_1] [i_0 + 1]))) != (-9015074504867111636LL))))) : ((-(2147483649U))))), ((~((~(2128817636U)))))));
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0] [i_15] [i_14] [i_15])), (((((/* implicit */_Bool) 2147483649U)) ? (arr_22 [i_13] [i_1] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_13] [i_14] [i_15])))))))) ? (((((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (arr_13 [(signed char)3] [i_1] [i_13] [i_14] [i_15])))) + (var_15))) : (((/* implicit */unsigned int) 7936)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 15; i_16 += 2) 
                    {
                        for (int i_17 = 1; i_17 < 13; i_17 += 1) 
                        {
                            {
                                arr_57 [i_0] = ((/* implicit */_Bool) var_8);
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16)) ? ((((_Bool)1) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12312))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1] [i_13] [i_16] [i_17 + 2])) ? (arr_37 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 3] [i_0] [i_0 - 3]) : (arr_36 [i_13] [i_1]))))))) ? (((((/* implicit */_Bool) (~(14437306547751315015ULL)))) ? (((/* implicit */unsigned long long int) (+(9223372036854775807LL)))) : (arr_14 [i_17 - 1] [i_16] [i_13] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 9223372036854775803LL))) ? ((~(-145134844))) : ((+(((/* implicit */int) var_12)))))))));
                                arr_58 [i_0] [9] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 15; i_18 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_63 [i_1] [i_1] [i_0] [i_18] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_24 [i_13])) ? (((/* implicit */int) arr_59 [i_0] [i_1])) : (((/* implicit */int) arr_24 [i_0 + 1]))))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_1] [i_18])) >= (((/* implicit */int) arr_6 [i_0 - 4] [i_0] [i_0 - 4] [i_18]))))) & (((((/* implicit */_Bool) arr_38 [i_18] [i_18] [i_18] [i_18] [i_0 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)4)) : (arr_38 [i_18] [i_18] [i_18] [i_18] [i_0 - 2] [i_0])))));
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_0 - 4] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((arr_48 [i_0] [i_1] [i_0 - 2] [i_18] [i_0 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_13] [i_1] [i_0])))))) : ((+(18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (arr_34 [i_18] [i_1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_3)) ? (3686658972U) : (((/* implicit */unsigned int) arr_17 [i_0] [i_1] [14U] [i_13] [i_0] [i_13] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 4])))))));
                        arr_64 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (-((-(min((((/* implicit */unsigned int) arr_44 [i_0 + 1] [i_0 + 1] [i_13] [i_18] [i_0 + 1])), (var_0)))))));
                    }
                    for (int i_19 = 0; i_19 < 15; i_19 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) 4294967293U);
                        arr_69 [i_0] [i_1] = ((((/* implicit */_Bool) min((11838581607510421243ULL), (((/* implicit */unsigned long long int) var_0))))) ? (max((((/* implicit */int) var_12)), (arr_26 [i_0 - 1]))) : (((/* implicit */int) ((signed char) max((var_9), (((/* implicit */unsigned int) arr_42 [i_0] [i_0] [i_0])))))));
                    }
                    arr_70 [i_0] [i_1] [5] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | ((~(((/* implicit */int) (short)32750))))));
                }
                for (int i_20 = 0; i_20 < 15; i_20 += 3) /* same iter space */
                {
                    arr_75 [i_0] [i_1] [i_1] [(unsigned short)12] = ((/* implicit */int) (!(((/* implicit */_Bool) (((+(74487824U))) >> (((1657031610) - (1657031586))))))));
                    arr_76 [i_0] [i_1] |= ((/* implicit */long long int) (_Bool)1);
                    var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_20] [i_0 - 1] [(unsigned short)10])) | (((/* implicit */int) arr_6 [7ULL] [i_1] [i_0 - 3] [i_0 - 3]))))) ? (((/* implicit */long long int) ((arr_10 [i_0 + 3] [i_0 - 4] [i_0] [i_0 + 1] [i_0 - 1]) ^ (arr_10 [i_0 + 2] [12] [13ULL] [i_0 - 3] [i_0 + 3])))) : (((((/* implicit */_Bool) (short)32750)) ? (((/* implicit */long long int) 6582575)) : (5360486932419833010LL)))));
                }
            }
        } 
    } 
}
