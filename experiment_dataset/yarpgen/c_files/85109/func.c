/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85109
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
    var_12 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) var_8))))))), (min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) var_1))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)64)) << (((4294967295U) - (4294967276U)))))))) ? (min((((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])), (((((/* implicit */int) var_10)) >> (((var_8) - (5526380516679053200ULL))))))) : (max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2 - 1])), (((arr_3 [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_11 [i_4] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) arr_10 [i_0] [i_0] [(_Bool)1] [i_0 - 1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_7 [i_3]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])) ? (28U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) / (((((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) (short)32064)))))) / (var_7)))));
                                var_14 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) var_2)))), (((/* implicit */int) max(((unsigned short)30275), (((/* implicit */unsigned short) var_10))))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0)))))));
                                arr_12 [i_4] [i_3] [i_2] [i_2 - 1] [i_0 - 2] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_3 [i_4])), (arr_9 [i_1] [i_0] [i_2] [i_0] [i_1] [i_0])))), (max((4294967295U), (((/* implicit */unsigned int) var_0)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) max(((short)-32064), (((/* implicit */short) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min(((((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) > (((/* implicit */int) (unsigned char)255))))))), (((/* implicit */int) ((unsigned char) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                                var_16 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (-1) : (((/* implicit */int) (short)-32064))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (unsigned short)30275))))))) ? (((arr_10 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_5 - 1] [i_5 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [(unsigned char)12])) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) < (var_7))))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)0)), (-831206325))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max((min((var_2), (((/* implicit */unsigned char) var_1)))), (var_0))))) >= (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_0))))) : (((((/* implicit */_Bool) 1116892707587883008LL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    var_20 = max((min((((/* implicit */unsigned int) var_11)), (((unsigned int) var_6)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)127))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (signed char i_9 = 2; i_9 < 24; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 3; i_10 < 24; i_10 += 4) 
                    {
                        var_21 = (-(((((/* implicit */int) var_1)) % (var_6))));
                        arr_31 [i_7] [i_8] [i_10] = ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7)));
                    }
                    var_22 *= ((/* implicit */unsigned char) (-(12358466400208237925ULL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            for (unsigned char i_12 = 2; i_12 < 24; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 3; i_14 < 22; i_14 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_18 [i_7] [i_14])))) + (((((/* implicit */_Bool) 134217727ULL)) ? (-757057758) : (arr_35 [i_7])))));
                                arr_45 [i_7] [i_14] [i_14] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */int) (short)32071)) : (((/* implicit */int) arr_27 [i_14] [i_12 - 2] [i_11] [i_14]))));
                                arr_46 [i_7] [i_7] [i_14] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) (~((~(var_8)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 24; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            {
                                arr_53 [i_7] [i_11] [i_11] [i_7] [i_12] [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31)) || (((/* implicit */_Bool) var_11))))) % (var_6)));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_38 [i_7]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_50 [i_16] [i_7] [i_11] [i_11] [i_7]))))) : (((((/* implicit */_Bool) arr_47 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15])) ? (arr_23 [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                        {
                            {
                                var_25 = (_Bool)1;
                                var_26 = ((/* implicit */unsigned short) ((var_1) || (arr_54 [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12] [i_12 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
