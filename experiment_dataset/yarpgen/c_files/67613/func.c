/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67613
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) (short)17432)), (arr_1 [i_1]))))))));
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(short)4])) ? ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) (short)-17433)))))) : (248697361)));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_11 [i_3] = ((/* implicit */unsigned int) arr_0 [i_1]);
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17410)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [21LL])) : (1040196274)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17432))) : (var_4)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_4))) : (((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned long long int) -248697361)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (17592186044384ULL))))))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 1) 
                    {
                        var_13 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (2892134523885618536ULL) : (((/* implicit */unsigned long long int) 16777212U)))), (((/* implicit */unsigned long long int) (~(arr_4 [22ULL] [i_1] [i_2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -248697361)) ? (-248697361) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)20])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4 - 3])) : (((/* implicit */int) (unsigned short)24998))))) : (min((((/* implicit */unsigned long long int) var_4)), (arr_6 [i_0] [23]))))) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [0ULL] [24LL])));
                        var_14 &= ((/* implicit */signed char) var_9);
                        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((int) (short)17432))))));
                        arr_14 [i_0] [i_0] |= ((/* implicit */short) (~(18446744073709551615ULL)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [(short)13] [(_Bool)0] [i_5] = ((/* implicit */long long int) (~(arr_16 [i_0] [i_0] [i_2] [i_5])));
                        var_16 += ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_5]));
                        arr_20 [i_5] = arr_10 [i_0] [24LL] [i_0] [i_5];
                        arr_21 [i_0] [i_2] [i_5] |= ((/* implicit */int) 17592186044361ULL);
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((int) arr_13 [i_0] [i_1] [i_2] [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_18 = (+(((/* implicit */int) var_5)));
    var_19 = ((/* implicit */unsigned long long int) (~((+(var_8)))));
    /* LoopSeq 2 */
    for (short i_6 = 1; i_6 < 13; i_6 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            var_20 = 248697361;
            /* LoopSeq 2 */
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_9 = 3; i_9 < 13; i_9 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), ((~(((((/* implicit */_Bool) 707619351)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9 - 2]))) : (arr_22 [i_7] [i_8])))))));
                    arr_35 [8ULL] [i_7] [i_6] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1040196274)) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3163920428U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_8] [i_9]))))))));
                }
                for (int i_10 = 4; i_10 < 10; i_10 += 2) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(arr_16 [i_6] [i_7] [i_8] [18]))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) 2135185802))));
                }
                arr_39 [i_6] = var_4;
                arr_40 [(short)2] [8U] [i_8] |= ((/* implicit */short) ((unsigned long long int) arr_13 [i_6] [i_7] [i_8] [i_8]));
            }
            for (short i_11 = 1; i_11 < 11; i_11 += 2) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) 4278190102U)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_31 [i_6 - 1] [i_6] [9U] [i_11])))));
                var_25 = ((/* implicit */int) var_3);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_42 [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-17439)))));
                            var_27 = ((/* implicit */unsigned short) arr_0 [i_12]);
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_27 [i_6] [i_7]) ? (var_3) : (var_3)))) ? (-248697361) : ((~(((/* implicit */int) arr_5 [i_7]))))));
                            arr_48 [i_6] [i_7] [i_11] [i_12] [i_12] |= ((/* implicit */unsigned int) ((short) 17650565606986253697ULL));
                            var_29 = ((/* implicit */unsigned int) (short)17409);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            arr_55 [i_6] [i_6] [i_7] [i_11] [i_6] [i_15] [i_15] = ((/* implicit */_Bool) arr_3 [i_6 - 1] [i_6 - 1]);
                            arr_56 [i_6] [(unsigned char)6] [i_6] [12LL] [1U] [12LL] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_6] [(signed char)2] [4ULL] [i_11] [i_6] [i_15])) ? (((/* implicit */int) arr_42 [i_6])) : (((/* implicit */int) arr_42 [i_6]))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17592186044361ULL)) ? (var_4) : (((/* implicit */unsigned int) 2147483628)))))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                for (unsigned int i_18 = 3; i_18 < 12; i_18 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_27 [i_6] [i_18 + 2]))));
                        arr_64 [i_6] [i_16] [i_6] [i_17] [3ULL] [i_18] = ((/* implicit */short) max((var_7), (var_0)));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_5))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_16])) ? (arr_34 [i_16] [i_16]) : (((((/* implicit */_Bool) ((arr_27 [i_16] [(unsigned short)5]) ? (-1999762260599473541LL) : (((/* implicit */long long int) 564860181))))) ? (arr_18 [i_6] [i_16] [i_17] [i_18]) : (var_6)))));
                        var_33 = ((/* implicit */int) ((unsigned long long int) arr_62 [i_6] [i_16] [i_6] [i_18]));
                    }
                } 
            } 
        } 
        arr_65 [i_6] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_5)))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
    {
        arr_68 [i_19] [i_19] = ((/* implicit */unsigned long long int) (~(min((0LL), (((/* implicit */long long int) (short)-32432))))));
        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_19])))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (13466935238230715932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17410)))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_19])), (var_8)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_8)) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        arr_69 [i_19] = ((/* implicit */signed char) var_6);
    }
}
