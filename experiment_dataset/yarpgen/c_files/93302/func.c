/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93302
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                            {
                                var_18 ^= ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 2]))))), (((arr_2 [i_0 + 2]) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_1 - 1])))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) min((4991553852499925795LL), (((/* implicit */long long int) (short)-10656))))) : (var_6)));
                                var_20 = ((/* implicit */unsigned long long int) 4294967295U);
                            }
                            for (short i_5 = 2; i_5 < 13; i_5 += 2) 
                            {
                                var_21 = ((/* implicit */int) ((long long int) 4991553852499925813LL));
                                arr_20 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 1] = ((/* implicit */unsigned long long int) var_16);
                                arr_21 [i_5 - 1] [i_3 + 1] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_2]);
                            }
                            for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned short) ((unsigned int) 1820849713U));
                                var_23 = ((/* implicit */unsigned long long int) var_17);
                            }
                            var_24 = ((/* implicit */_Bool) (+(-4991553852499925803LL)));
                            arr_26 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_4 [i_3 + 1] [i_2] [i_1]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_19 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_1] [i_1 - 3]))) ? (((int) (_Bool)1)) : ((-(((/* implicit */int) arr_1 [i_0 + 1])))))))));
                /* LoopNest 3 */
                for (short i_7 = 1; i_7 < 13; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) max((min((((arr_4 [i_0 - 2] [i_1] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((signed char) var_6))))), (((/* implicit */unsigned long long int) ((((-4991553852499925803LL) + (((/* implicit */long long int) var_11)))) + (((/* implicit */long long int) ((int) arr_28 [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 2]))))))));
                                var_26 = ((/* implicit */signed char) ((4991553852499925815LL) << (((1820849690U) - (1820849690U)))));
                                arr_34 [i_0 + 1] [12ULL] [i_1] [i_7] [i_8] [i_8] [i_9] &= var_16;
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)0))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (int i_12 = 4; i_12 < 13; i_12 += 2) 
                        {
                            {
                                arr_41 [i_0] [i_1] [i_10] [(signed char)7] [i_12] = ((/* implicit */int) arr_10 [i_0 - 1] [i_1 - 2] [i_12 - 4] [i_12 - 4] [i_0 - 1]);
                                arr_42 [i_0] [i_1] [i_10] [i_11] [i_10] = ((/* implicit */unsigned char) arr_14 [i_12] [i_12] [i_12] [i_12 - 4] [i_12 - 3] [i_12]);
                                var_28 -= ((/* implicit */unsigned long long int) arr_27 [i_12] [i_12 - 4] [i_12]);
                                arr_43 [i_0] [i_0 + 1] [i_0] [i_10] [i_11] [i_11] [i_0 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1552002588))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 12; i_13 += 2) 
                    {
                        var_29 = ((/* implicit */int) ((_Bool) ((long long int) arr_2 [i_0 + 2])));
                        var_30 = arr_35 [(unsigned char)13] [i_1 - 2] [i_1];
                        var_31 += ((/* implicit */short) ((arr_6 [i_0 + 3] [i_13 + 1]) ? (arr_15 [i_13 - 1] [i_1] [11] [i_1] [i_1] [i_1 - 3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1552002588))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            {
                                arr_54 [i_15] [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) arr_9 [i_10])))))));
                                var_32 ^= ((/* implicit */unsigned char) ((short) (_Bool)1));
                                var_33 = ((/* implicit */long long int) ((unsigned short) arr_30 [i_14] [4LL] [i_1 + 1] [i_14]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 1; i_16 < 13; i_16 += 2) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                        {
                            {
                                arr_59 [i_0] [i_0] [i_16] [i_17] = ((/* implicit */short) ((long long int) var_0));
                                var_34 = ((/* implicit */int) arr_38 [i_10] [i_16] [i_17]);
                                arr_60 [i_17] [i_16 - 1] [i_10] [i_1] [i_0 + 3] = ((/* implicit */_Bool) var_3);
                                arr_61 [i_0 + 3] [(short)10] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_39 [i_1] [i_1] [i_1]) != (((/* implicit */long long int) arr_14 [i_17] [i_0] [i_16 - 1] [i_10] [i_1 - 3] [i_0]))))) >> (((((unsigned long long int) var_9)) - (7987671453774090882ULL)))));
                                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -1552002596)) != (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_45 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0 + 3] [i_0 + 3] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1]))) : (var_13)))) && (((/* implicit */_Bool) arr_62 [i_0] [i_1 + 2] [i_18])))))));
                    var_37 -= ((/* implicit */short) arr_32 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_0] [i_0 + 3]);
                    arr_64 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                    arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) var_15));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
    {
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_21 = 4; i_21 < 10; i_21 += 2) 
                {
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) var_1);
                                arr_80 [i_20] [i_22] [i_22] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) | (-1))) <= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((arr_74 [i_19] [i_19] [i_21] [i_22] [i_23] [i_23]), (arr_12 [i_23] [i_19])))) : (arr_79 [i_22] [i_22] [i_22 + 1] [i_22] [i_22 + 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_24 = 1; i_24 < 7; i_24 += 2) 
                {
                    for (unsigned short i_25 = 3; i_25 < 10; i_25 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) (((_Bool)1) ? (571386609U) : (((/* implicit */unsigned int) -123938605))));
                            var_40 = ((/* implicit */int) ((((((/* implicit */_Bool) 123938605)) ? (((/* implicit */long long int) 0U)) : (4991553852499925790LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) -2305843009213693952LL)) ? (((/* implicit */int) (short)2522)) : (((/* implicit */int) (_Bool)0)))))));
                            arr_87 [i_24] [i_24 + 4] [i_24] = ((/* implicit */short) arr_11 [i_19] [i_19] [i_19] [i_19]);
                        }
                    } 
                } 
            }
        } 
    } 
}
