/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77971
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
    var_13 = ((/* implicit */unsigned long long int) (~(((int) (+(((/* implicit */int) var_1)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (arr_3 [i_2] [i_4]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) : ((-(18446744073709551614ULL)))));
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_11))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min(((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((arr_0 [i_0]) - (659852010021995909LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) max((arr_16 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6]), (((/* implicit */short) arr_6 [i_2] [i_5]))))) : (max((((((arr_10 [i_0]) + (2147483647))) >> (((9223372036854775807LL) - (9223372036854775800LL))))), (((/* implicit */int) arr_6 [i_1] [i_6])))))))));
                                arr_21 [i_0] [i_0] [i_6] [i_6] [8] [i_0] [8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_3 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) >= (5171997744761879392LL))))) <= ((~(arr_0 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_25 [i_10] [i_9] [(signed char)1] [i_2] [i_1] [13ULL] [13ULL]))));
                                var_22 = ((((/* implicit */_Bool) (~(-9223372036854775786LL)))) ? ((((~(9223372036854775807LL))) % (max((((/* implicit */long long int) arr_31 [i_0] [i_1] [i_2] [(short)3] [i_10])), (arr_0 [i_0]))))) : (((9223372036854775807LL) / (arr_0 [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        for (short i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            {
                var_23 = ((/* implicit */long long int) max((((arr_38 [i_11] [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4177920U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_11] [i_11] [i_11] [i_12] [i_12])))))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) arr_31 [i_12] [i_12] [i_12] [i_11] [i_11])) : (-8410184188166519788LL)))) + (((arr_25 [i_11] [(unsigned short)23] [i_11] [i_11] [0LL] [i_11] [(unsigned short)23]) ? (arr_26 [20ULL] [i_12] [(short)16] [i_12] [i_12]) : (((/* implicit */unsigned long long int) arr_31 [i_11] [i_12] [i_11] [i_12] [i_11])))))))));
                /* LoopNest 3 */
                for (long long int i_13 = 1; i_13 < 21; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) arr_13 [i_13 + 2] [i_12] [i_13] [i_14] [15ULL]);
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_6))));
                            }
                        } 
                    } 
                } 
                arr_47 [i_12] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_1 [i_11])), (((4468065514839650148ULL) % (18446744073709551615ULL))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((/* implicit */int) arr_37 [i_11] [i_11] [i_11])) : (-590506496))))));
                var_27 = min((var_11), (((short) (~(((/* implicit */int) var_1))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 1) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned int) (+((+(-590506522)))))) : (8192U)));
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_20])) ? (var_3) : (((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_16] [i_20])))))));
                                arr_62 [i_16] [i_16] [i_16] [(short)0] [i_20] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((-8410184188166519788LL) + (8410184188166519805LL)))))), (9223372036854775795LL)));
                            }
                        } 
                    } 
                    arr_63 [(unsigned char)8] [i_16] [i_17] [i_18] = ((/* implicit */_Bool) arr_8 [i_16] [3LL]);
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((int) (signed char)-51)))));
                                var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_34 [6U])), (590506495)))), (min((((/* implicit */unsigned long long int) (signed char)28)), (arr_3 [i_16] [i_16])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 3; i_23 < 12; i_23 += 4) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 13; i_24 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) 4294959103U)) ? (max((((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)195))))), (-1635327198744200049LL))) : (((/* implicit */long long int) 1588124524))))));
                                arr_75 [i_16] [i_16] [i_16] [i_23] [i_24] = (-((~(((((/* implicit */_Bool) 8410184188166519788LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((-9223372036854775807LL - 1LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_25 = 0; i_25 < 23; i_25 += 3) 
    {
        for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 23; i_27 += 1) 
                {
                    for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) arr_43 [i_25] [i_26] [i_25]);
                            var_34 = ((/* implicit */_Bool) var_2);
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned short) arr_25 [i_25] [i_25] [i_25] [i_25] [i_26] [i_26] [1]);
            }
        } 
    } 
}
