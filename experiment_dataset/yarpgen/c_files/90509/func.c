/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90509
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) ((((((min((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])), (arr_0 [i_0]))) + (2147483647))) << (((((((/* implicit */int) (unsigned short)10297)) << (((((var_16) + (1334100237))) - (7))))) - (1349648384))))) / (((/* implicit */int) ((((arr_1 [i_0]) >> (((arr_3 [i_1]) - (7831284313408185650LL))))) < (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */unsigned long long int) 1756084266)) : (0ULL))))))))) : (((/* implicit */short) ((((((min((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])), (arr_0 [i_0]))) + (2147483647))) << (((((((/* implicit */int) (unsigned short)10297)) << (((((var_16) + (1334100237))) - (7))))) - (1349648384))))) / (((/* implicit */int) ((((arr_1 [i_0]) >> (((((arr_3 [i_1]) - (7831284313408185650LL))) - (543507046675904974LL))))) < (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */unsigned long long int) 1756084266)) : (0ULL)))))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_1]), (arr_2 [i_1] [i_0])))) ? (max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))) : (((/* implicit */int) ((signed char) var_7)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_20 [i_4] [(_Bool)1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_7 [i_3 + 2] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))))), (((/* implicit */long long int) arr_10 [i_5] [i_4]))));
                        arr_21 [i_2] [i_3] [i_2] [i_4] = (~(((((((/* implicit */long long int) ((/* implicit */int) var_10))) != (-6281666563123431119LL))) ? (((/* implicit */int) ((_Bool) arr_3 [i_4]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))))));
                        arr_22 [i_4] [i_3] = ((/* implicit */short) min((((/* implicit */int) arr_19 [i_3 - 1] [i_3] [i_3] [(signed char)11] [i_2] [(signed char)11])), (max((((((/* implicit */int) (short)32)) % (((/* implicit */int) arr_11 [5] [(unsigned char)1])))), (arr_2 [12U] [i_3])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((arr_25 [i_2] [i_2]), (((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned char) var_1)), (var_3)))))));
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)24077)))))));
                        arr_26 [i_2] [i_3] [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_24 [i_2] [(unsigned char)0] [i_2] [i_4])) : (((/* implicit */int) (unsigned short)41459))))) || (((/* implicit */_Bool) var_11))))) << (((((((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_3])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((11101504401625200389ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))))))))) - (14358753546510610245ULL)))));
                        arr_27 [i_2] [i_4] [i_4] [8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_3 + 2] [i_3 + 1] [i_3]))), (((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 + 1] [i_3 + 2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 2] [i_3 + 1] [i_3])))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 4; i_7 < 12; i_7 += 2) 
                    {
                        arr_32 [i_4] [i_4] [(signed char)2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_7 [i_7 + 1] [i_3 + 1]) : (arr_7 [i_7 - 3] [i_3 + 2])));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3 - 1] [i_7 + 1])) <= (((/* implicit */int) var_1))));
                    }
                    var_24 = ((/* implicit */int) arr_13 [i_4]);
                    arr_33 [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2097144U)), (-1LL)))) % (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)19)), (134217728U)))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_12 [i_2] [i_3])) : (arr_1 [i_4])))))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((/* implicit */int) arr_8 [i_3 - 1]))))) ? (((/* implicit */int) arr_17 [i_3 + 2] [i_4])) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 134217728U)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (unsigned char)116))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned int) arr_4 [8U] [i_4] [8U]);
                                arr_38 [i_4] = ((/* implicit */short) arr_35 [i_2] [i_4] [i_8] [(unsigned char)10]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    {
                        arr_49 [i_10] [i_10] [i_11] [i_10] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_11 [(unsigned char)3] [i_12]), (((/* implicit */unsigned char) arr_17 [i_10 - 1] [i_10]))))) ? (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) arr_31 [i_10 + 1] [i_10 - 1] [i_10] [i_10])) : (((/* implicit */int) arr_31 [i_10 + 1] [i_10 - 1] [i_10] [i_10])))) : (((/* implicit */int) (unsigned char)167))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)64))))), (min((((/* implicit */long long int) arr_41 [i_2])), (arr_47 [i_2] [i_10] [i_11] [i_2] [i_10] [i_2]))))))));
                        arr_50 [i_2] [i_10] [i_10] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) arr_28 [i_2] [i_10] [i_11] [i_12]);
                    }
                } 
            } 
        } 
    }
    var_28 = ((((/* implicit */long long int) ((var_14) ? (((/* implicit */int) max((var_14), (var_14)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_2))))))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (var_12))))) : (((6432036394182785643LL) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
}
