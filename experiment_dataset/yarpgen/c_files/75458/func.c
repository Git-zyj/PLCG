/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75458
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    var_11 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_5 [16] [i_2 + 1] [i_2 + 1] [i_1])) ? (arr_7 [12LL] [i_2 - 3] [12LL]) : (var_8))), (((/* implicit */long long int) ((unsigned char) 2277606421U)))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)7013))) ? (((/* implicit */unsigned int) ((arr_0 [i_2 - 2]) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) var_5))))) : (((unsigned int) arr_0 [i_2 - 4]))));
                    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (arr_4 [5U]) : (((/* implicit */long long int) arr_3 [i_0])))))), (((unsigned long long int) ((long long int) -6970055828977608778LL)))));
                    var_14 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (_Bool)0)) / (293840773))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 ^= ((/* implicit */short) min((((/* implicit */unsigned int) max((((short) 2017360883U)), ((short)-9910)))), (var_9)));
                    var_16 = ((/* implicit */unsigned long long int) (~(((long long int) arr_1 [i_3]))));
                }
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_17 = ((/* implicit */short) ((unsigned short) arr_10 [2] [i_1] [i_0]));
                    var_18 = ((/* implicit */long long int) (((~(arr_10 [i_1] [i_1] [i_4]))) + (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) arr_3 [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((var_4) && (((/* implicit */_Bool) var_7))));
                                var_20 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_5 + 1] [i_4]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) min((((unsigned char) 2017360882U)), (((/* implicit */unsigned char) (_Bool)1))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_20 [i_1]);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_23 [i_0])));
                    }
                    for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) ((signed char) arr_15 [i_10]));
                            var_25 = ((/* implicit */short) ((long long int) var_3));
                            var_26 = ((((/* implicit */_Bool) 7857589080387678057LL)) ? (((/* implicit */unsigned long long int) 3U)) : (385471121194501403ULL));
                        }
                        for (signed char i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) arr_28 [0U] [i_1] [i_7] [i_9] [i_11]);
                            var_28 = ((/* implicit */unsigned char) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        }
                        var_29 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (((var_4) ? (arr_28 [i_0] [i_1] [i_7] [(unsigned short)13] [(unsigned char)16]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        var_30 = var_6;
                    }
                    for (unsigned char i_12 = 3; i_12 < 16; i_12 += 4) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_14 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_7] [4ULL]))))))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            var_32 |= ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]);
                            var_33 = ((/* implicit */unsigned int) ((short) arr_15 [i_13]));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9269))) + (((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_7] [i_12] [(unsigned short)17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1]))) : (arr_32 [i_13] [i_12] [i_7] [i_1] [(unsigned short)15] [(unsigned short)15] [i_0])))));
                        }
                        var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [(unsigned short)0] [i_12 + 1] [i_0] [i_0] [i_7] [i_7] [i_12])) ? (((/* implicit */unsigned long long int) var_9)) : (10152716692826747057ULL)));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [2LL] [i_0] [17ULL]))) : (arr_7 [i_12] [(signed char)8] [i_7])));
                    }
                    var_37 = var_5;
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */int) ((long long int) arr_26 [11] [i_7]));
                                var_39 &= ((/* implicit */int) ((unsigned int) arr_26 [i_0] [i_14]));
                                var_40 = ((long long int) 6970055828977608782LL);
                                var_41 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_16 = 3; i_16 < 15; i_16 += 3) 
                {
                    for (long long int i_17 = 3; i_17 < 15; i_17 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((unsigned char) (!((_Bool)1)))))));
                            var_43 = ((/* implicit */unsigned long long int) max((max((0U), (((/* implicit */unsigned int) (unsigned char)201)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_17] [i_17 + 1] [i_17 + 1] [i_17])))))));
                            var_44 = ((/* implicit */unsigned char) ((int) -1LL));
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 18LL))) ? ((~(var_9))) : (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2277606428U)))))) ? (((((/* implicit */_Bool) (unsigned char)62)) ? (12LL) : (2047LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [(unsigned char)3] [i_17 + 2] [16LL] [i_17] [i_17 + 1] [i_17])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) : (arr_32 [(unsigned short)6] [i_16] [i_16] [i_0] [i_1] [i_0] [i_0]))))))))));
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-256)) : ((-2147483647 - 1))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5))))))) : (arr_6 [i_1] [i_1] [i_0] [i_0])));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_18 = 1; i_18 < 22; i_18 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            var_48 += ((/* implicit */unsigned short) arr_51 [i_18]);
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 24; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (unsigned short)61048)))));
                            var_50 &= ((/* implicit */short) (~(6970055828977608782LL)));
                        }
                    } 
                } 
            } 
        }
        var_51 = ((/* implicit */int) (signed char)31);
        var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61048)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_18] [i_18 + 1] [i_18] [i_18] [i_18 + 1] [i_18]))) : (var_3)));
        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned int) 911422079)) : (847547974U)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) arr_48 [i_18]))));
    }
    for (long long int i_23 = 0; i_23 < 10; i_23 += 1) 
    {
        var_54 = ((/* implicit */signed char) ((((((arr_12 [i_23] [i_23]) + (9223372036854775807LL))) >> (((arr_12 [i_23] [i_23]) + (7527717943363900456LL))))) == (((((/* implicit */_Bool) 3447419302U)) ? (arr_27 [i_23] [i_23] [i_23] [i_23]) : (arr_27 [i_23] [i_23] [i_23] [i_23])))));
        /* LoopNest 3 */
        for (unsigned long long int i_24 = 1; i_24 < 6; i_24 += 4) 
        {
            for (unsigned short i_25 = 0; i_25 < 10; i_25 += 4) 
            {
                for (unsigned char i_26 = 0; i_26 < 10; i_26 += 3) 
                {
                    {
                        var_55 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_24 [i_23] [i_24] [i_23] [i_26] [7LL] [i_24 + 3])), (70368744177663ULL)))) && (((/* implicit */_Bool) 3447419325U))));
                        /* LoopSeq 1 */
                        for (signed char i_27 = 0; i_27 < 10; i_27 += 4) 
                        {
                            var_56 = ((/* implicit */short) (-((-(arr_49 [i_23] [i_24])))));
                            var_57 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) arr_54 [i_24 - 1] [i_25] [i_26] [i_26] [i_23] [i_27])) ? (arr_54 [i_24 + 3] [i_27] [i_27] [i_27] [i_23] [i_27]) : (((/* implicit */long long int) arr_25 [i_24 + 3] [i_24] [i_25] [i_26]))))));
                            var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) (+(var_7))))));
                            var_59 = ((/* implicit */int) max((847547971U), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_5)))))));
                        }
                    }
                } 
            } 
        } 
    }
}
