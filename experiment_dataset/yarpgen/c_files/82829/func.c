/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82829
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(arr_6 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_14 [5ULL] [i_2] [(signed char)4] = ((/* implicit */long long int) (-(var_1)));
                            arr_15 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_0])) && (((/* implicit */_Bool) var_12))))) != (((/* implicit */int) (signed char)-117)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)3] [i_3 - 1] [(short)3] [i_3] [i_3 + 2] [i_3]))) : (arr_12 [(short)5] [i_1] [i_2] [i_2])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), ((-(((/* implicit */int) arr_4 [3U] [i_1] [i_1]))))));
                            arr_23 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_17 [i_4 + 1] [i_4 - 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_4 - 1] [i_4 + 1] [i_5 - 1]))))));
                            arr_24 [i_0] [i_1] [i_5] [i_5 + 1] = ((/* implicit */short) (~(((((/* implicit */int) arr_7 [i_1])) ^ (((/* implicit */int) var_7))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : ((~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */long long int) ((/* implicit */int) ((signed char) 68719476735ULL)))) | ((~(arr_6 [(signed char)7] [i_4]))))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744004990074881ULL)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_0]))) : (min((1818184910U), (((/* implicit */unsigned int) arr_7 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_19 -= ((/* implicit */unsigned int) (-(arr_35 [i_7] [i_8] [i_9])));
                            arr_38 [i_9] [4ULL] [i_7] [3U] = ((/* implicit */signed char) arr_32 [i_7]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((1818184899U) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (18446744004990074881ULL)))))))))))));
                                arr_47 [i_11] [i_7] = ((/* implicit */signed char) ((min((arr_33 [(short)13] [(short)13]), ((!(((/* implicit */_Bool) arr_32 [i_7])))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_44 [i_6] [i_7] [i_10] [(short)0] [i_12]))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (16051339160932572075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */int) min((arr_45 [i_6] [i_7] [i_6] [i_11] [i_12]), (((/* implicit */unsigned int) (~(((var_14) ? (((/* implicit */int) arr_25 [i_12])) : (((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 3; i_13 < 13; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 12; i_14 += 4) 
                    {
                        {
                            arr_54 [i_6] [i_14] = ((/* implicit */unsigned short) (-(arr_45 [i_6] [i_13 + 1] [i_13] [i_14] [i_14])));
                            var_22 = ((/* implicit */long long int) ((var_0) && (((/* implicit */_Bool) max((arr_34 [i_6] [i_13] [i_14 + 2]), (arr_34 [i_13 + 1] [i_13] [i_13]))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_41 [i_6] [i_7] [i_13] [i_14]) ? (((/* implicit */int) ((short) (unsigned char)1))) : (((/* implicit */int) ((signed char) var_3)))))) ? (((/* implicit */int) arr_32 [i_6])) : (((/* implicit */int) ((arr_39 [i_13] [i_14 + 1] [i_14] [4ULL]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)5648), (arr_46 [i_6] [i_6])))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_15] [i_7])))))))) || (((((/* implicit */int) var_2)) >= (((/* implicit */int) var_2))))));
                            arr_60 [i_16] [i_7] [i_7] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_44 [i_6] [i_7] [i_16] [i_16] [i_6])) << (((arr_34 [i_7] [i_7] [8LL]) - (2026210488U)))))));
                            var_25 = ((/* implicit */int) (~(arr_45 [i_6] [i_7] [i_7] [i_15] [i_7])));
                            var_26 = ((/* implicit */_Bool) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_17 = 4; i_17 < 20; i_17 += 2) 
    {
        for (signed char i_18 = 3; i_18 < 19; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                    {
                        for (unsigned long long int i_21 = 3; i_21 < 20; i_21 += 4) 
                        {
                            {
                                var_27 ^= ((/* implicit */short) min((var_8), ((+(arr_65 [i_17] [i_18 - 3] [i_19 + 2])))));
                                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_68 [(_Bool)1] [i_18] [(_Bool)1] [i_20])), (var_5))), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)105))))) : (1589693544U)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min(((!(((/* implicit */_Bool) -1375355236)))), (((((/* implicit */_Bool) ((unsigned int) 18422526570301936817ULL))) && (((/* implicit */_Bool) ((var_11) ? (arr_63 [i_17] [i_17]) : (((/* implicit */int) var_3))))))))))));
                    var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_67 [(unsigned short)11])))))))));
                    /* LoopNest 2 */
                    for (short i_22 = 1; i_22 < 20; i_22 += 2) 
                    {
                        for (signed char i_23 = 4; i_23 < 18; i_23 += 3) 
                        {
                            {
                                arr_79 [(unsigned char)11] [i_18 - 1] [i_19] [(unsigned char)11] [i_22] = ((/* implicit */short) var_6);
                                var_31 *= arr_68 [i_23] [i_22 - 1] [i_18] [i_18];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_24 = 0; i_24 < 10; i_24 += 2) 
    {
        for (long long int i_25 = 2; i_25 < 7; i_25 += 2) 
        {
            for (int i_26 = 2; i_26 < 8; i_26 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 1) 
                    {
                        for (unsigned short i_28 = 0; i_28 < 10; i_28 += 3) 
                        {
                            {
                                var_32 += ((/* implicit */unsigned long long int) ((unsigned char) var_7));
                                arr_94 [i_24] [i_25] [i_25] [i_27] [4ULL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17870283321406128128ULL)) && (((/* implicit */_Bool) var_3)))))) == ((~(((562949953420800LL) | (((/* implicit */long long int) 256229349))))))));
                                arr_95 [i_24] [i_24] [i_26] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_89 [i_24])) && (((/* implicit */_Bool) ((signed char) var_4)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_29 = 1; i_29 < 8; i_29 += 2) 
                    {
                        for (short i_30 = 0; i_30 < 10; i_30 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_100 [i_24] [i_24] [i_26 - 2] [i_30] [i_30] [i_30] [i_26])) % (((/* implicit */int) var_11)))))));
                                arr_101 [i_24] [i_29] = ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)254))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)254))))) : ((+(4294967295U))))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_12))), (arr_89 [i_30]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
