/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82801
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 -= ((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_1 [i_1 - 2] [i_1 + 1]) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned char)255)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) arr_9 [i_2] [i_4]))))));
                                var_18 = ((/* implicit */unsigned long long int) (-(var_8)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_17 [i_1 - 2] = ((/* implicit */short) 6ULL);
                                arr_18 [i_0] [i_1] [i_2] [i_0] [3U] = ((/* implicit */_Bool) -860481495);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((max((18446744073709551610ULL), (((/* implicit */unsigned long long int) (+(-1LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 - 2] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (var_9))))))));
                    var_20 = ((/* implicit */signed char) (unsigned char)255);
                }
                for (int i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) (unsigned char)255);
                    var_22 -= ((/* implicit */long long int) min((((/* implicit */int) ((signed char) var_6))), ((~(var_13)))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2] [i_1 + 2])) ? (((/* implicit */int) arr_22 [i_1 + 1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 2]))));
                                var_24 ^= (+(((var_11) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) -1210679793)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) var_7)) % (14312173735656628791ULL))));
                    var_26 = ((/* implicit */unsigned short) arr_26 [i_0] [i_1 - 2] [i_8] [i_1 - 2] [i_8]);
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */long long int) 125227936U)) : (-6518244105639495196LL)))) ? (((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_1] [i_1] [i_8] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_8]))) : (-1LL))) : (((/* implicit */long long int) ((int) -1)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) 6ULL);
                        var_29 ^= ((/* implicit */unsigned char) (-(arr_24 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_8 + 1])));
                        var_30 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1 - 1] [i_8 - 2] [i_8]))) : (var_4));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 3; i_12 < 14; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [14] [i_1] [17] [i_1])) ? (((/* implicit */long long int) arr_21 [i_0])) : (-7523922575597963839LL)));
                            var_32 = ((/* implicit */unsigned int) ((int) arr_28 [i_1 - 2] [i_8 - 1] [i_8 + 1]));
                            var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_8 + 1]))));
                            var_34 = ((/* implicit */unsigned long long int) (unsigned char)0);
                        }
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((long long int) 3700440270281706779ULL)))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_36 = ((/* implicit */short) var_7);
                        var_37 = ((/* implicit */unsigned char) var_3);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 1; i_15 < 16; i_15 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned short)4375)))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1] [i_8 + 2] [i_15 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (arr_15 [i_0] [i_1 + 1] [i_8 + 2] [i_15 + 2])));
                        }
                        var_40 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_37 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_8 - 1] [i_8 - 2] [i_8 - 2]))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    var_41 = ((/* implicit */int) ((((/* implicit */long long int) ((var_13) ^ (((/* implicit */int) var_6))))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_14)) : (var_0)))));
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2047)) ? (-860481495) : (((/* implicit */int) var_2))));
                    arr_46 [i_16] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_40 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 1])) - (var_9)));
                }
                var_43 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_1] [i_1 + 1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_28 [i_1 - 2] [i_1] [i_1])) : (7ULL))), (((((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_2 [i_1]))) % (((/* implicit */unsigned long long int) min((var_0), (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 1) 
    {
        for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 13; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 3; i_20 < 12; i_20 += 2) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_44 = ((((/* implicit */_Bool) (~(arr_5 [i_19] [i_20 - 2] [i_20 - 3])))) ? (var_9) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (2237220640U)))), (var_4)))));
                                arr_59 [i_17] [i_18] [i_19] [i_20] [i_18] = (-(2057746655U));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) min((((((/* implicit */int) max((var_10), (arr_44 [i_17] [i_17] [i_17])))) >> (((((/* implicit */int) var_11)) % (((/* implicit */int) var_11)))))), ((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_11 [i_17] [i_17] [15U] [i_17] [i_17] [i_18] [i_19])) : (((/* implicit */int) (_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 13; i_22 += 3) 
                    {
                        for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) 
                        {
                            {
                                arr_64 [7ULL] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-114)), (var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)32))))) || (((/* implicit */_Bool) ((arr_54 [i_17] [i_17] [i_17] [i_22] [i_23]) - (((/* implicit */int) (unsigned char)46)))))))) : (((/* implicit */int) ((short) var_4)))));
                                var_46 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) (unsigned char)255))))) ? (arr_57 [i_17] [i_17] [i_19] [i_18] [i_17] [i_22] [i_22]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3U)), (arr_15 [i_17] [i_18] [i_18] [i_23])))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_47 [i_18])))) | ((~(116728372U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
