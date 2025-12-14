/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6570
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_13 += ((/* implicit */_Bool) -1617362013);
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_14 = ((/* implicit */signed char) (-(-1045590400)));
                    var_15 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3675726469U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (0U)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] [9ULL] [i_1] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2]);
                        arr_17 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)2048)) == (((/* implicit */int) (unsigned short)63487))))) : (((/* implicit */int) (short)32767))));
                        var_16 |= ((/* implicit */unsigned short) arr_7 [i_0] [i_2]);
                        var_17 = ((signed char) (-(((/* implicit */int) (unsigned short)2044))));
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) (((_Bool)0) && (((/* implicit */_Bool) 3465977905U))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) 5327652403251913586ULL))));
                        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        arr_25 [i_0] [i_0] [i_0] |= ((((arr_23 [i_0] [i_1 - 1] [i_2]) + (2147483647))) >> (((17246007061955196324ULL) - (17246007061955196309ULL))));
                        arr_26 [i_0] [i_1 + 3] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1905152592)) ? (arr_19 [i_6] [i_6] [i_6] [i_1] [i_1 + 3] [i_1 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        arr_27 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (-2147483644) : (((/* implicit */int) (_Bool)1))))) ? (1200737011754355292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_31 [i_0] [i_1] [i_1 + 3] [i_2] [i_1 + 3] [i_3] [i_7] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (signed char)-122)) % (1073737728))));
                        arr_32 [i_0] [i_1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)-115)) ? (16316667739613850517ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2041))));
                        var_21 = ((/* implicit */int) (signed char)126);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)108)) : (855771344)))) ? (((/* implicit */long long int) arr_29 [i_1] [i_1 + 1] [i_2] [i_3] [i_0])) : ((-(34359738367LL)))));
                        var_23 += ((/* implicit */short) arr_30 [i_0] [i_1 - 1] [i_0] [i_0] [i_7] [i_7]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 2731160686U)) ? (arr_14 [i_0] [i_1] [i_0] [(unsigned char)10] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))))));
                        var_25 = ((/* implicit */signed char) ((arr_29 [i_8] [i_3] [(signed char)2] [i_1] [i_0]) > (((/* implicit */unsigned int) 1073737722))));
                        arr_36 [i_0] [1ULL] [0U] [0U] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((2731160686U) >> (((332310468U) - (332310454U)))));
                        arr_37 [i_0] &= ((/* implicit */unsigned short) 7075407042562349602LL);
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((signed char) arr_24 [i_0] [i_0] [i_0])))));
                    }
                    var_27 ^= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_28 [i_0] [(signed char)4] [i_2] [i_2] [i_3]) : (((/* implicit */int) (short)-1)))));
                }
                arr_38 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)34)) > (((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_2] [i_2]))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 4) 
                {
                    var_28 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)-30)) != (((/* implicit */int) arr_18 [(unsigned short)11] [(unsigned short)11] [(unsigned short)11]))));
                    var_29 = ((/* implicit */int) (unsigned short)14474);
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) 12074973022392749906ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 3]))) : (6405677335227510482LL))))));
                }
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2074)) ? (((/* implicit */int) (unsigned short)7676)) : (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1073737724)))))) : (((1563806620U) << (0ULL))))))));
                var_32 = ((/* implicit */int) -2325436237763643589LL);
                var_33 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-28))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_45 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned int) arr_34 [i_1 + 2] [i_1 + 2] [i_1 - 1])) : (7U)));
                var_34 = ((/* implicit */short) 566781617U);
                var_35 = (((_Bool)1) ? (-690931169) : (arr_5 [i_1 - 1] [i_1] [i_1]));
            }
        }
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            arr_48 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 249695712U)) ? (arr_19 [i_0] [i_0] [i_0] [i_12] [i_0] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
            var_36 = ((((/* implicit */_Bool) (signed char)116)) ? (-855771370) : (((/* implicit */int) (_Bool)1)));
        }
        for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            var_37 = ((/* implicit */int) (unsigned char)224);
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                arr_55 [8U] = ((/* implicit */unsigned int) arr_1 [i_13]);
                var_38 ^= ((/* implicit */signed char) -2007278135);
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    for (long long int i_17 = 2; i_17 < 9; i_17 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-26200)))) * (((/* implicit */int) ((-4611686018427387904LL) > (4961147556738495367LL)))))))));
                            arr_64 [2LL] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_0] [i_13] [i_15] [i_16] [i_17 + 3]))));
                        }
                    } 
                } 
            } 
        }
        var_40 |= ((((/* implicit */_Bool) 3346562234061087096ULL)) && (((/* implicit */_Bool) ((unsigned char) var_11))));
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1148417904979476480LL)) && (((/* implicit */_Bool) arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        var_42 = ((/* implicit */signed char) ((((/* implicit */long long int) 1073737753)) < (2944283399703097910LL)));
        arr_65 [i_0] = ((/* implicit */int) ((unsigned char) 670801975));
    }
    var_43 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) max(((signed char)-14), (((/* implicit */signed char) (_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)32923)) : (((/* implicit */int) (short)24717)))))) > ((-(((((/* implicit */int) var_8)) % (((/* implicit */int) var_2))))))));
}
