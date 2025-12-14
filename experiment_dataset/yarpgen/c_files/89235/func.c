/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89235
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_1 - 1] [i_0] [i_2]))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_9 [i_0] [i_0])))) ? (((4873736551055835758LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)78))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) -175859873)), (arr_5 [i_3 + 1] [i_3 - 2] [i_3 + 1])))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) var_4);
                            arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (+(2147483647)));
                            arr_13 [i_0] [i_0] [i_0] [i_3 + 1] = ((unsigned int) (unsigned char)122);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) var_3))))) | (((arr_5 [i_5 + 3] [i_5] [i_5]) & (arr_5 [i_5 + 1] [i_5] [i_5])))));
                            arr_19 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned short) (signed char)64);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -2147483643))))) >> (((arr_17 [i_1] [i_6] [i_1] [i_0]) + (5225320088031089359LL))))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((long long int) ((arr_6 [i_0] [i_1 - 1] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 1]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) (short)32767)) >> (((((/* implicit */int) (signed char)-28)) + (31))));
                            arr_31 [16] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 340001166)) || (((/* implicit */_Bool) (signed char)-29))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_8] [(signed char)14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (0U))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 11; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 10; i_14 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((min(((-(((/* implicit */int) arr_1 [i_11] [i_10])))), (((/* implicit */int) (signed char)0)))) + (2147483647))) >> ((((+(((((/* implicit */int) var_7)) << (((((arr_9 [i_12] [i_11]) + (769986470))) - (9))))))) - (10485758))))))));
                                var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10 - 1] [i_10 - 1] [i_14 + 2])) ? (arr_5 [i_10 - 1] [i_10 - 1] [i_14 + 2]) : (arr_5 [i_10 - 1] [i_10 - 1] [i_14 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) -613918874)) ? (((/* implicit */unsigned long long int) 1307567511U)) : (2251799813685247ULL)))));
                                arr_43 [i_10] [i_10] [i_11] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */signed char) (~((((-(var_6))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-256), (((/* implicit */short) (_Bool)1))))))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_37 [i_10] [i_11] [7] [i_14])))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_13))));
                            var_26 *= ((/* implicit */unsigned int) ((long long int) ((long long int) (unsigned char)117)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_17 = 2; i_17 < 9; i_17 += 4) 
                {
                    for (int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min((((max((((/* implicit */long long int) var_15)), (var_13))) - (((/* implicit */long long int) min((((/* implicit */int) (signed char)-68)), (858896147)))))), (((/* implicit */long long int) ((int) (_Bool)1))))))));
                            arr_59 [i_10 + 1] [1] [i_10 - 2] [(signed char)7] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) var_8)));
                            var_28 = ((/* implicit */long long int) max((max((13561128820229828738ULL), (((/* implicit */unsigned long long int) arr_56 [i_17 + 2] [i_10 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_17 + 2] [i_10 - 1])) ? (arr_56 [i_17 - 2] [i_10 - 1]) : (arr_56 [i_17 + 3] [i_10 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_19 = 2; i_19 < 10; i_19 += 2) 
                {
                    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        for (short i_21 = 1; i_21 < 11; i_21 += 4) 
                        {
                            {
                                var_29 *= ((/* implicit */unsigned char) var_1);
                                arr_68 [i_10] [11U] [i_10 - 1] [i_10] [i_10 - 2] = ((/* implicit */signed char) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_24 = 1; i_24 < 23; i_24 += 1) 
                {
                    for (unsigned char i_25 = 2; i_25 < 23; i_25 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_72 [i_22] [7U] [i_24 - 1]))) - (((/* implicit */int) arr_71 [i_22]))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((var_6) >> (((/* implicit */int) min(((signed char)102), (((/* implicit */signed char) ((_Bool) (short)-253)))))))))));
                            arr_78 [i_24] [i_24] [i_22] [i_24] [(signed char)22] [i_25] = ((/* implicit */signed char) min((((((((/* implicit */int) var_3)) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)255)) ? (var_12) : (((/* implicit */long long int) var_17)))) - (1591987548538065658LL))))), (var_17)));
                            arr_79 [i_22] [i_23] [(unsigned short)20] [i_25 - 2] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-22)) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) != ((+(arr_75 [i_25 + 1] [(unsigned char)10] [i_25 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        for (signed char i_28 = 0; i_28 < 24; i_28 += 1) 
                        {
                            {
                                arr_86 [15ULL] [i_22] [i_22] [i_27] [i_22] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)62))));
                                var_32 = ((/* implicit */long long int) ((int) (-(var_13))));
                                var_33 *= ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 3) 
                {
                    for (short i_30 = 0; i_30 < 24; i_30 += 4) 
                    {
                        {
                            arr_94 [i_23] [i_29] [i_23] [i_23] [i_22] = ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_89 [i_22]))));
                            var_34 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((arr_73 [i_22] [i_23] [i_30]), (((/* implicit */long long int) var_7))))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((-((-(((/* implicit */int) (unsigned char)114))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
    {
        for (unsigned char i_32 = 1; i_32 < 8; i_32 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_33 = 1; i_33 < 10; i_33 += 3) 
                {
                    for (unsigned int i_34 = 0; i_34 < 11; i_34 += 3) 
                    {
                        {
                            var_35 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_31] [(signed char)22] [i_34])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) var_17)))))))) > (((/* implicit */int) var_9)));
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) min((3056006136U), (((/* implicit */unsigned int) (unsigned short)65535)))))));
                            var_37 |= ((/* implicit */int) arr_67 [i_34] [i_33] [i_33] [i_32] [i_31]);
                            var_38 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 14345466276094083242ULL)) || (((/* implicit */_Bool) arr_56 [i_31] [(short)3])))) || (((((/* implicit */_Bool) 2353323810U)) && (arr_4 [i_31] [(signed char)6] [i_31]))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_32] [1] [i_34])) ? (arr_54 [i_32]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_35 = 0; i_35 < 11; i_35 += 1) 
                {
                    for (unsigned char i_36 = 0; i_36 < 11; i_36 += 4) 
                    {
                        {
                            arr_109 [i_31] [i_31] = ((/* implicit */short) (-((+(((int) 2147483647))))));
                            var_39 = ((/* implicit */unsigned long long int) arr_69 [i_31]);
                            arr_110 [i_36] [i_35] [(unsigned short)2] [i_31] &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_100 [i_36] [i_31] [i_31])) | (((/* implicit */int) var_9)))) % (((((/* implicit */_Bool) arr_100 [8ULL] [i_31] [i_35])) ? (((/* implicit */int) arr_100 [2ULL] [8LL] [2ULL])) : (((/* implicit */int) arr_100 [i_35] [i_32] [i_31]))))));
                            arr_111 [i_31] [i_32] [i_35] [i_36] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_91 [i_31] [i_32 + 3])) ? (((/* implicit */int) arr_62 [i_35] [i_35] [i_32 + 2])) : (((/* implicit */int) arr_62 [(signed char)9] [i_32] [i_32 + 2]))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_75 [i_31] [i_36] [i_32 + 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_37 = 0; i_37 < 11; i_37 += 4) 
                {
                    for (int i_38 = 0; i_38 < 11; i_38 += 2) 
                    {
                        {
                            var_40 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_37] [i_38] [(_Bool)1])), (arr_99 [(signed char)8] [i_32])))))) ? ((~((~(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) -4422657401585603117LL)) ? ((~(((/* implicit */int) arr_98 [i_32])))) : (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) var_5)) : (var_17)))))));
                            arr_118 [i_31] [i_32] [i_32] [i_37] [i_37] [i_38] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25256)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (_Bool)1))));
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_15) - (((/* implicit */int) var_9)))) + (((((/* implicit */int) var_2)) >> (((arr_29 [i_37]) - (12460933950302945299ULL)))))))) ? (((((/* implicit */_Bool) ((signed char) var_4))) ? ((-(((/* implicit */int) var_16)))) : ((-(((/* implicit */int) (signed char)-4)))))) : (((/* implicit */int) ((unsigned char) max((arr_27 [i_32 + 2] [i_32 + 2] [(short)2] [i_38]), (((/* implicit */long long int) var_5))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
