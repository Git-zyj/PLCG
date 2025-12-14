/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6148
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_10 *= ((/* implicit */long long int) arr_0 [i_0]);
            var_11 &= ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)25191)), (((((arr_2 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)34579)))))))));
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [11U]))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_13 += ((/* implicit */unsigned short) ((unsigned char) ((arr_8 [i_0] [i_1] [(signed char)9] [i_2]) | (arr_8 [i_0] [i_0] [i_0] [i_0]))));
                var_14 = ((/* implicit */unsigned char) ((int) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)191)))), (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_2])))));
            }
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_15 = ((/* implicit */unsigned int) var_9);
                var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (arr_8 [i_0] [i_1] [i_1] [i_3])))) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [3U])), ((unsigned short)25190)))))))) < (((-5717852983592167023LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26753)))))));
                arr_12 [i_1] = ((/* implicit */unsigned short) ((int) (short)7339));
            }
        }
        arr_13 [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)193)), (min(((short)15308), (arr_5 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25163))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned short)63362)) : (((/* implicit */int) (unsigned char)184))))) ? (max((3875294872U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (signed char i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)20724))) ? (((/* implicit */long long int) min((1595646700U), (((818958764U) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : (min((((arr_14 [i_4] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
                        var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)166)) ? (((var_2) - (((/* implicit */unsigned long long int) arr_11 [i_5 - 2] [i_4 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (unsigned char)72)), (arr_20 [i_4] [i_4] [i_4] [i_6]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            arr_30 [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (arr_15 [i_4] [i_4]))))) | (arr_27 [i_4 - 1] [i_4 - 1])))), (arr_14 [i_4] [i_4])));
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_35 [i_8] [11LL] [i_8] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [(short)4] [i_9 + 1] [i_4 - 1])) || (((/* implicit */_Bool) arr_9 [i_9] [i_9 + 1] [i_4 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_34 [i_4 - 1] [i_4] [i_9 + 1]), (((/* implicit */unsigned char) ((_Bool) 2699320590U))))))) : (((unsigned int) arr_27 [1] [6ULL]))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (short)5317))) + (((/* implicit */int) var_3))));
                var_20 = ((long long int) (~(((/* implicit */int) arr_4 [i_4 - 1] [i_8] [i_9]))));
            }
            /* vectorizable */
            for (short i_10 = 3; i_10 < 13; i_10 += 4) 
            {
                var_21 = ((/* implicit */short) arr_19 [i_4 - 1] [i_10 - 1] [i_10 - 1]);
                var_22 = (~(arr_26 [i_4]));
                /* LoopSeq 3 */
                for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    arr_41 [i_4] [i_11] [i_4] [i_11] [i_4] &= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_2)))));
                    var_23 |= ((/* implicit */int) ((((/* implicit */int) arr_7 [i_4 - 1] [i_10 + 1] [i_4 - 1])) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    var_24 = ((/* implicit */short) arr_8 [i_4] [i_8] [i_10 + 1] [i_11]);
                }
                for (short i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_46 [i_4] [i_8] [i_4] = ((/* implicit */int) ((short) (-(arr_1 [i_4]))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 5717852983592167023LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [i_8] [i_4])))))) : (5717852983592167023LL)));
                        var_26 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_43 [9U] [i_8] [i_8] [i_8] [(unsigned short)2])) / (((/* implicit */int) arr_9 [i_4 - 1] [i_8] [i_10 - 3])))) ^ ((((_Bool)1) ? (((/* implicit */int) (short)-5318)) : (((/* implicit */int) (short)-21467))))));
                    }
                    for (unsigned short i_14 = 2; i_14 < 11; i_14 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) (unsigned short)48803);
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_48 [i_4]))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */_Bool) (+((~(arr_37 [i_8] [i_12] [i_15])))));
                        var_30 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)72)) && (((/* implicit */_Bool) (unsigned short)56471)))) ? (((/* implicit */int) ((var_7) || (((/* implicit */_Bool) (unsigned char)120))))) : (arr_18 [i_12])));
                        arr_51 [i_4] [i_4] [i_4] [(unsigned short)8] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_15] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)34603)) <= (((/* implicit */int) (unsigned short)4830)))))) : (((((/* implicit */_Bool) (short)-6228)) ? (var_2) : (((/* implicit */unsigned long long int) arr_23 [12ULL] [i_8] [i_4]))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_4 - 1] [i_4] [i_10 - 1] [i_4 - 1] [i_4 - 1] [i_8])) - (((/* implicit */int) arr_39 [i_4 - 1] [i_8] [i_8] [i_12] [i_15 - 2] [i_12]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        var_32 = ((/* implicit */short) ((arr_36 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30932)))));
                        var_33 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                        var_34 |= ((/* implicit */int) (unsigned char)15);
                    }
                    for (signed char i_17 = 1; i_17 < 12; i_17 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) (+(arr_47 [i_4] [i_4] [i_10] [(unsigned char)8] [(unsigned short)8] [0ULL] [i_4])));
                        var_36 = ((/* implicit */long long int) (-(976732554)));
                        var_37 += (unsigned short)48796;
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_38 = ((/* implicit */short) (~(((/* implicit */int) arr_44 [i_4] [i_4] [i_8] [(short)4] [i_4] [i_8] [i_18]))));
                        var_39 = ((/* implicit */unsigned char) (-(750866560U)));
                    }
                    arr_59 [i_4] [i_8] [0] [i_10] [i_12] &= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_8] [i_8])) >= (((/* implicit */int) var_8))));
                    arr_60 [i_4] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((arr_58 [i_4 - 1] [i_12] [i_12]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_9))));
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_4 - 1] [i_4 - 1] [i_10 - 1])) & (((/* implicit */int) var_7)))))));
                }
                for (short i_19 = 0; i_19 < 14; i_19 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_8])) ? (arr_17 [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    arr_63 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_10] [i_19] = ((/* implicit */long long int) arr_45 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]);
                    arr_64 [i_4 - 1] [i_4 - 1] [i_4] = ((/* implicit */unsigned int) ((arr_1 [i_4 - 1]) / (((/* implicit */long long int) arr_57 [i_4 - 1] [i_8] [i_10 - 3] [i_19] [9ULL] [i_19] [(_Bool)1]))));
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 14; i_20 += 4) 
                    {
                        var_42 += (!(((/* implicit */_Bool) arr_23 [i_4 - 1] [i_10] [i_19])));
                        arr_69 [i_4] [i_8] [i_4] [i_19] [i_4] = ((/* implicit */int) ((arr_47 [i_4] [i_10] [(unsigned char)8] [(short)12] [i_4] [(unsigned short)11] [i_4]) << (((((/* implicit */int) (unsigned short)40331)) - (40303)))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (!((_Bool)1))))));
                        var_44 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_5)))));
                    }
                    var_45 = ((/* implicit */long long int) arr_24 [i_8] [i_8] [i_4] [i_8] [i_10 + 1]);
                }
                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4 - 1])) || (((/* implicit */_Bool) arr_18 [i_4 - 1])))))));
            }
            /* vectorizable */
            for (short i_22 = 4; i_22 < 13; i_22 += 4) 
            {
                arr_75 [i_4] [i_8] [i_4] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1])) >= (((/* implicit */int) arr_40 [i_4 - 1] [i_4 - 1]))));
                var_47 = ((/* implicit */int) (-(var_6)));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 14; i_23 += 4) 
                {
                    for (unsigned short i_24 = 3; i_24 < 13; i_24 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-2707433874840384746LL) >= (var_5))))) & (11892791752372764437ULL)));
                            var_49 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) && (var_7))));
                        }
                    } 
                } 
            }
        }
        for (short i_25 = 3; i_25 < 10; i_25 += 4) 
        {
            arr_83 [i_4] [i_25] = arr_61 [i_4];
            var_50 = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned short) (short)-5305)), ((unsigned short)25206)))));
        }
        for (unsigned short i_26 = 2; i_26 < 12; i_26 += 4) 
        {
            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? ((+(arr_16 [i_26]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37865))))))))));
            var_52 += ((/* implicit */unsigned long long int) ((short) (-((+(arr_16 [i_26]))))));
        }
        arr_88 [i_4] [i_4] = (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_56 [i_4] [i_4] [i_4] [i_4]))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_49 [i_4] [3] [i_4] [(_Bool)1] [i_4 - 1] [i_4] [11U])) - (34811))))))))));
    }
    var_53 = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) * (((/* implicit */int) ((var_5) >= (((/* implicit */long long int) var_6))))))));
    var_54 = ((/* implicit */_Bool) 1324753454U);
}
