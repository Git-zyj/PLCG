/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76920
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
    var_13 ^= ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1800934617U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (26ULL)))) ? (max((((/* implicit */long long int) (unsigned char)181)), (max((((/* implicit */long long int) (signed char)23)), (3537372798627547575LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_3 - 3] [i_4] [7ULL] [i_0] = ((/* implicit */unsigned int) (unsigned short)0);
                                arr_15 [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] [i_4] = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (unsigned short)2);
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_3 [i_2] [i_1] [i_0]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                for (int i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    for (unsigned short i_8 = 3; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)-17)) && (((/* implicit */_Bool) 137438920704LL)))));
                            arr_30 [i_5] [i_5] = ((/* implicit */_Bool) -1601730126);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_16 = ((/* implicit */_Bool) (~(arr_18 [i_0] [i_0] [i_0])));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_0])) ? (((/* implicit */int) (short)13886)) : (((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (signed char i_10 = 2; i_10 < 15; i_10 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 12; i_11 += 4) 
                {
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */_Bool) ((unsigned int) arr_18 [i_5] [i_11] [i_12]));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)26)) - (((/* implicit */int) (unsigned short)18248)))) - (((/* implicit */int) (short)32753)))))));
                            var_21 ^= ((/* implicit */signed char) ((_Bool) arr_5 [i_0] [i_5] [i_10 - 1] [i_12]));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 2; i_13 < 15; i_13 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_13 + 1]))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-32754)))))))));
                            arr_49 [i_15] [i_15] [i_14] [i_13] [i_15] [i_0] = (!(((/* implicit */_Bool) (short)18)));
                            var_24 = ((/* implicit */signed char) arr_41 [i_0] [i_5] [i_15] [i_13 + 1] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_13 - 2])) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) arr_0 [i_13 + 1])))) - (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56910))) : (-3711305631966969710LL)))) ? ((-(((/* implicit */int) (signed char)-8)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_55 [i_0] [i_5])) : (((/* implicit */int) (unsigned short)2))))))));
                            arr_56 [i_0] [i_0] [i_0] [i_13] [i_16] [i_17] = ((/* implicit */short) arr_13 [i_5] [i_13] [i_16] [2LL]);
                        }
                    } 
                } 
            }
        }
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65533)), (18446744073709551605ULL))))));
        var_27 ^= ((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)1)), ((short)6043)));
        /* LoopSeq 2 */
        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            var_28 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1431263218)) ? (var_9) : (1619218622)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))), (((/* implicit */long long int) ((2147483642) == (((/* implicit */int) (unsigned short)14670)))))));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                for (unsigned short i_21 = 1; i_21 < 7; i_21 += 3) 
                {
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (unsigned short)42242)) : (((/* implicit */int) (unsigned short)23312))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) 13148110195433931899ULL))));
                            arr_71 [i_18] [i_18] [i_20] = ((/* implicit */short) 0ULL);
                        }
                    } 
                } 
            } 
            var_31 ^= var_3;
            var_32 = ((/* implicit */unsigned short) ((arr_41 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1]) ? (((/* implicit */unsigned long long int) 36028797018963967LL)) : (399048354744316104ULL)));
        }
        /* vectorizable */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) ((_Bool) arr_39 [i_23] [i_18 - 1] [i_23] [i_18 - 1] [i_18]))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)10550))))));
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_18] [i_23 - 1] [i_18 - 1] [i_23] [i_23 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19281))) : (arr_46 [i_23] [i_23 - 1] [i_18 - 1] [i_23] [i_23])));
        }
        var_35 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) 474903780)) * (7U))));
        var_36 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807ULL)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned short)23414))))));
    }
    var_37 ^= var_3;
    /* LoopNest 2 */
    for (unsigned short i_24 = 0; i_24 < 17; i_24 += 4) 
    {
        for (short i_25 = 0; i_25 < 17; i_25 += 2) 
        {
            {
                arr_80 [i_24] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)14673)))) ? (((((/* implicit */_Bool) (short)8064)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_9))) : (((/* implicit */int) arr_77 [i_24])))) : (((var_8) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) max((((/* implicit */short) (signed char)-6)), ((short)8078))))))));
                arr_81 [i_24] = (~(((/* implicit */int) (!(((/* implicit */_Bool) -1518029263))))));
            }
        } 
    } 
}
