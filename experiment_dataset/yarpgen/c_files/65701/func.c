/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65701
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) ((unsigned char) arr_1 [i_0]))), (((long long int) 18446744073709551604ULL)))));
            var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)12)))), ((+(((/* implicit */int) var_7))))));
            var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3518040634111081761ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16614366082774700210ULL)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))))) : (18446744073709551602ULL))))));
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)240)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551611ULL)))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (18446744073709551610ULL)));
                        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((18446744073709551612ULL), (((/* implicit */unsigned long long int) -1773691462))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2877773769942045088LL), (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)19)) || (((/* implicit */_Bool) (unsigned char)241)))))) : (max((arr_4 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) ^ (2877773769942045090LL)))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (18446744073709551614ULL)))))));
                    }
                } 
            } 
            arr_12 [i_2] [i_2] = ((/* implicit */long long int) ((max((arr_4 [i_0]), (arr_6 [i_0] [i_0] [i_0]))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))) ? (((3676288991U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = (~(((-1134351510355824159LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_22 [6U] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2877773769942045067LL)) ? (var_17) : (var_8)))) ? (2877773769942045084LL) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10808))) : (-2877773769942045065LL)))));
                        var_24 = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)12)) - (12)))));
                        var_25 = ((unsigned char) (_Bool)1);
                        var_26 = ((/* implicit */unsigned char) var_10);
                        arr_23 [i_0] [i_2] [i_2] [i_2] [i_5] [15ULL] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))));
                    }
                    arr_24 [i_2] [i_5] [0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2877773769942045085LL)) ? ((+(-1134351510355824152LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1134351510355824151LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_0]))))));
                }
                arr_25 [i_0] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [i_5 + 1] [i_5]))) : (5ULL)))) ? (((((/* implicit */_Bool) -8205928320788363374LL)) ? (((/* implicit */unsigned long long int) arr_8 [i_5 - 1])) : (arr_7 [i_0] [i_2] [i_5 + 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)7)))))));
                arr_26 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 1080863910568919040ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))));
            }
            for (long long int i_8 = 3; i_8 < 14; i_8 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (-(((/* implicit */int) var_13)))))));
                var_28 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)243)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [0LL] [i_8] [i_8 - 3] [14ULL]))) ^ (((14577825603969405253ULL) ^ (((/* implicit */unsigned long long int) 0U))))))));
                var_29 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
            }
            for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                arr_31 [i_0] [i_0] = 8628200079647769280LL;
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        {
                            arr_39 [9LL] [i_2] [i_9] [(unsigned char)11] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1134351510355824159LL)) ? (-1134351510355824129LL) : (((/* implicit */long long int) arr_20 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1]))))), (min((3942937414816615057ULL), (((/* implicit */unsigned long long int) arr_21 [7LL] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_11] [i_10 - 1] [i_0]))))));
                            var_30 = min((((/* implicit */long long int) (short)-3551)), (1134351510355824159LL));
                            arr_40 [i_0] [i_2] [i_9] [i_10 - 1] [i_11] [i_9] [i_2] &= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_13 [i_9] [i_2] [7U])) ? (2877773769942045088LL) : (var_16))) / (((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)12] [i_9] [i_10])) ? (-1134351510355824124LL) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [4U] [i_10 - 1] [i_9] [i_2] [i_0]))))))) / (((/* implicit */long long int) arr_14 [i_0] [i_2] [i_0] [i_10 - 1]))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_31 += ((/* implicit */unsigned int) ((19ULL) << (((/* implicit */int) (unsigned char)12))));
            var_32 ^= ((((/* implicit */_Bool) (unsigned short)19374)) ? (2877773769942045074LL) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_12]))));
        }
        var_33 = ((((18446744073709551602ULL) != (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)253)), (-2877773769942045066LL)))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (+(((/* implicit */int) (short)12675))))));
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            for (unsigned int i_15 = 1; i_15 < 13; i_15 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967271U)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12651)))));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned short) (+(1533726684U)));
                        arr_55 [i_14] [i_15] |= ((/* implicit */long long int) arr_14 [i_13] [15] [i_15] [i_16]);
                        arr_56 [2LL] [i_14] [i_13] [9] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_15 - 1] [i_15 + 1] [i_16] [i_16])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_13] [i_14] [i_15] [i_16]))))) : (((((/* implicit */_Bool) -3230863420029943594LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (1533726679U)))));
                        var_36 -= ((/* implicit */long long int) ((unsigned char) 708574212U));
                    }
                    arr_57 [i_13] [i_14] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (unsigned char)105)))));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) 35ULL))));
                    var_38 = ((/* implicit */unsigned int) arr_33 [i_13] [i_13] [(_Bool)0] [(unsigned char)17]);
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_49 [i_13] [i_13])) << (((((/* implicit */int) arr_19 [i_13] [i_13] [i_13] [i_13] [i_13] [(_Bool)1] [(short)6])) - (105)))));
    }
    for (long long int i_17 = 3; i_17 < 11; i_17 += 2) 
    {
        arr_62 [i_17] = ((/* implicit */long long int) (-((((~(var_6))) << (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_17] [i_17 + 3] [i_17] [(unsigned char)11]))) | (0LL)))))));
        var_40 = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) -4383863899711401389LL)) : (18446744073709551609ULL));
    }
    for (unsigned long long int i_18 = 1; i_18 < 7; i_18 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_19 = 2; i_19 < 8; i_19 += 4) 
        {
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_18 - 1])) ? (arr_63 [i_18 - 1]) : (arr_63 [i_18 + 2])));
            var_42 *= ((/* implicit */unsigned int) (~(arr_41 [(short)3] [i_18 + 2] [i_18 + 3])));
        }
        /* vectorizable */
        for (short i_20 = 3; i_20 < 9; i_20 += 4) 
        {
            arr_70 [i_20] = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopSeq 2 */
            for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                arr_74 [i_20] [i_20] = ((/* implicit */unsigned char) var_15);
                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) 9ULL)) ? (arr_50 [8ULL] [i_18] [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))));
                var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-13909)) + (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)200)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) arr_6 [i_18 + 1] [i_18 + 1] [i_18 + 2]))))));
                var_45 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_50 [i_20] [i_20 + 1] [i_21])) ? (4383863899711401389LL) : (((/* implicit */long long int) 4018608997U)))));
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 11; i_22 += 2) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_58 [i_18])) == (13ULL))) ? (8ULL) : (0ULL)));
                            arr_81 [i_18] [i_20] [i_21] [i_22] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_18] [(unsigned char)16])) ? (((/* implicit */int) arr_45 [i_20] [i_23])) : (arr_36 [i_18] [i_20] [i_20 - 3] [i_21] [i_22] [i_23] [(unsigned char)9])))) ? (arr_38 [i_18 + 3] [i_20 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_18] [i_20 - 2] [i_21] [i_20])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)79))))));
                            arr_82 [i_18] [8ULL] [i_21] [i_22] [i_23] [i_20] [i_23] = ((/* implicit */_Bool) 18446744073709551615ULL);
                        }
                    } 
                } 
            }
            for (unsigned char i_24 = 0; i_24 < 11; i_24 += 1) 
            {
                var_47 |= ((((/* implicit */_Bool) (unsigned char)163)) ? (18446744073709551615ULL) : (arr_50 [(_Bool)1] [i_18 + 2] [i_18 + 2]));
                arr_87 [i_20] [i_20] = ((/* implicit */unsigned long long int) ((long long int) arr_15 [i_18 + 4] [i_18 + 3] [i_18 + 4] [i_18 + 2]));
            }
        }
        var_48 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_18 + 4]))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) -7848130013309213156LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))))))) : (max(((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13913))))), (((/* implicit */unsigned int) (unsigned char)252))))));
    }
    var_49 = (+(((((/* implicit */_Bool) 3823790394110315614ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 2337270243207704050LL)) : (var_5))))));
    var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-2147483643)))) ? (((4158330441912971676ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) (-(var_0))))))) ? (((((1517334591U) + (4287401186U))) << (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(18446744073709551600ULL))))))));
    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) max((14622953679599236015ULL), (((/* implicit */unsigned long long int) var_14)))))) ? (var_14) : (((/* implicit */unsigned int) 2147483647))));
    var_52 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (var_12)))) : (var_10))) : ((~(((((/* implicit */_Bool) 3823790394110315600ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13909))) : (var_6)))))));
}
