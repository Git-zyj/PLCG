/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64112
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1159846871)) ? (4294967295U) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)21895)), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_0])) ? (((long long int) arr_2 [i_1] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                var_17 = ((/* implicit */unsigned long long int) max((487016223), (487016223)));
            }
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((((var_3) ? (arr_1 [i_5] [i_0]) : (((/* implicit */int) var_5)))) - (38302)))))) + (((long long int) (+(arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 3])))))))));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((_Bool) min((max((6068817366510214839LL), (var_0))), (((/* implicit */long long int) arr_3 [i_0] [i_5] [i_0]))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) arr_1 [i_1] [i_3]);
                var_21 = ((/* implicit */long long int) -487016223);
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((signed char) arr_11 [i_0] [i_1 + 2] [i_3] [i_1] [i_1] [i_0] [i_1]))), (min((arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [19U] [i_0] [i_3]), (arr_11 [i_0] [i_1 - 1] [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_0])))));
            }
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
            {
                arr_18 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_9 [i_0 - 2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_1 + 1] [i_0]), (((/* implicit */long long int) var_7))))) ? ((+(arr_10 [i_1 - 1] [5U] [i_0]))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_14))))))) : (((arr_2 [i_0] [i_0]) << (((arr_10 [i_1 - 1] [i_6] [i_6]) - (3959367971U)))))));
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2]) + (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)-84))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_7]))) : (arr_13 [i_0] [i_1] [i_0] [i_7] [i_0])));
                    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 3] [i_0 + 3] [i_7] [i_1 + 1])) || (((/* implicit */_Bool) 8103017628472455703ULL))))), (((arr_16 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_25 -= ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6] [i_0]);
                    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_6] [i_6] [i_0 + 2] [i_1] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6]))))))) ^ (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_6])) : (((arr_2 [i_1] [i_0]) / (((/* implicit */long long int) 1870187180U))))))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    arr_25 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [0ULL] [i_1 - 1] [i_1] [0ULL]))))) ? (((/* implicit */int) (short)-21895)) : (((/* implicit */int) arr_17 [i_0] [i_1 + 2]))))), (((((min((((/* implicit */long long int) arr_23 [i_0] [i_0] [(unsigned char)4] [i_6] [i_8])), (var_0))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_6] [i_8 - 1] [i_8] [i_6] [4LL])))))))));
                    var_27 = ((/* implicit */int) ((unsigned long long int) min((((((/* implicit */_Bool) 2829198445U)) ? (((/* implicit */int) var_3)) : (var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_0 - 1] [6LL] [i_6]))) ? (arr_3 [i_0 + 1] [10U] [i_8 - 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (-487016223)))))) : ((~(arr_4 [i_0 - 3] [(short)14] [i_6])))));
                    arr_26 [i_0] [i_0] [i_6] [i_0] [i_8] = ((/* implicit */unsigned char) arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 3]);
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) min((-487016223), (((/* implicit */int) (signed char)84))))) ^ (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0))))));
                }
                var_30 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((-6068817366510214840LL) & (((/* implicit */long long int) 0))))));
                arr_27 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) arr_21 [(unsigned short)4] [i_0] [i_1 - 1] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_7 [2] [i_1] [i_0]))))))));
                var_31 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) (-(487016219)))) * (((((/* implicit */long long int) 18U)) / (var_0))))) / (((/* implicit */long long int) min((((arr_20 [i_0] [i_1] [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) 487016223)))))));
            }
            arr_28 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [2U] [i_1 - 1])) ? (arr_4 [i_0 - 3] [i_0 - 3] [i_1 + 1]) : (arr_4 [i_0 + 3] [i_1] [i_1 + 1]))));
            var_32 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) ((unsigned char) ((-16) > (((/* implicit */int) (unsigned char)212))))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [14ULL] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1465768851U));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 3; i_11 < 22; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */short) (+(((/* implicit */int) var_12))));
                            var_34 += ((/* implicit */signed char) min((((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) arr_34 [i_0] [i_0] [i_9] [i_9] [22ULL]))))) ? (arr_16 [i_9]) : (((/* implicit */unsigned long long int) arr_8 [(unsigned short)20] [i_11] [i_11] [i_0 - 1] [(unsigned short)20])))), (((((/* implicit */_Bool) arr_12 [i_0] [i_9] [i_11])) ? (((/* implicit */unsigned long long int) ((arr_32 [i_10] [i_0] [i_9]) / (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_0 [i_9])))))));
                            arr_36 [i_0] [i_10] [i_9] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) ((arr_30 [i_0] [i_1 + 2] [i_0]) >= (arr_30 [i_0 - 1] [i_1 - 1] [i_0])))) << (((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_9)))) ? (arr_16 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_10] [i_10])) ? (arr_8 [i_0] [i_1] [i_9] [i_1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) - (8273264217865269466ULL)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((arr_30 [i_0] [i_1 + 2] [i_0]) >= (arr_30 [i_0 - 1] [i_1 - 1] [i_0])))) << (((((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_9)))) ? (arr_16 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_10] [i_10])) ? (arr_8 [i_0] [i_1] [i_9] [i_1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) - (8273264217865269466ULL))) - (18207951597262868000ULL))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) /* same iter space */
        {
            arr_41 [i_0] [i_0] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0])) ? (arr_37 [i_12] [i_12] [i_0]) : (arr_37 [i_0] [i_12] [i_0]))) / ((((~(4294967269U))) & (((/* implicit */unsigned int) arr_24 [i_12] [i_12] [i_12] [i_12]))))));
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                var_35 = ((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_0] [i_12 - 1] [i_13]) & (var_8)));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            arr_48 [i_0] [i_12] [i_12] [i_12] [i_0] [i_12] [i_12] = arr_2 [i_0] [i_0];
                            arr_49 [i_15] [i_0] [i_0] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) -487016223)))));
                        }
                    } 
                } 
                arr_50 [i_13] [i_13] [i_13] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) arr_2 [i_13] [i_13]))))) / (((/* implicit */int) ((short) arr_3 [i_0 + 2] [i_13] [i_12 + 2])))));
                var_36 |= ((/* implicit */unsigned long long int) arr_32 [(unsigned short)14] [i_12 + 2] [i_12]);
            }
            var_37 &= ((/* implicit */long long int) -487016224);
        }
        arr_51 [i_0] = ((/* implicit */unsigned char) max(((~(((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) | (arr_43 [i_0] [i_0]))))), (((/* implicit */long long int) ((unsigned int) arr_44 [i_0 + 2] [i_0 + 2])))));
        arr_52 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_46 [i_0]);
    }
    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 1) 
    {
        var_38 = ((/* implicit */unsigned short) arr_29 [i_16] [i_16] [i_16] [i_16]);
        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) (short)-29)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_37 [i_16] [i_16] [(unsigned short)22]) <= (arr_37 [i_16] [i_16] [(unsigned char)4])))))));
        var_40 = ((/* implicit */long long int) ((signed char) ((((_Bool) arr_1 [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))))) : (arr_3 [(short)0] [8U] [22LL]))));
        var_41 -= ((/* implicit */unsigned char) min((((/* implicit */signed char) ((var_11) > (6)))), (var_4)));
        /* LoopNest 2 */
        for (unsigned char i_17 = 1; i_17 < 17; i_17 += 4) 
        {
            for (unsigned char i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                {
                    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) arr_11 [i_18] [i_17] [i_18] [i_18] [i_16] [i_18] [i_18]))));
                    var_43 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_0)) ? (arr_13 [i_16] [i_16] [i_17] [i_17 - 1] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))), (((/* implicit */unsigned long long int) (~(arr_37 [i_17 - 1] [i_17 + 1] [i_18]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            {
                                var_44 &= ((/* implicit */_Bool) var_11);
                                var_45 = ((/* implicit */unsigned short) arr_37 [i_17 + 1] [i_17] [i_18]);
                                var_46 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(arr_40 [i_18] [i_17 - 1]))))));
                                var_47 = ((/* implicit */int) var_2);
                                var_48 = ((/* implicit */long long int) (+(3895234534U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 1) 
    {
        arr_69 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (((((/* implicit */_Bool) arr_65 [i_21] [i_21])) ? (arr_65 [i_21] [(unsigned char)17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19)))))));
        var_49 = ((/* implicit */unsigned int) arr_65 [i_21] [i_21]);
    }
    var_50 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7168)) ? (5299008842232662556LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168)))));
    var_51 = ((/* implicit */short) var_3);
    var_52 = ((((/* implicit */_Bool) min(((unsigned short)58376), (var_5)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), (var_9)))));
}
