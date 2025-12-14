/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8262
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 2] [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) arr_5 [i_1] [i_0]);
                arr_8 [i_1] = ((/* implicit */signed char) arr_0 [14ULL]);
                arr_9 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 + 1])), (arr_3 [i_0] [i_0] [13U]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (var_18))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_19)) : (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) var_19)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (min((((/* implicit */unsigned long long int) var_11)), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (var_10)))))), (((/* implicit */unsigned long long int) arr_10 [17]))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((min((min((var_10), (arr_15 [i_2] [i_3]))), (((/* implicit */int) arr_13 [i_2] [(short)9] [8ULL])))), (((/* implicit */int) max(((unsigned char)31), (((/* implicit */unsigned char) (_Bool)1))))))))));
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_22 -= ((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_2] [16ULL] [i_2]);
                                arr_21 [i_2] [i_2] [i_3] [i_2] [i_2] [5U] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_16 [12] [(unsigned char)0] [i_5] [i_4] [0] [i_2])), (min((((/* implicit */long long int) var_4)), (var_9))))), (((/* implicit */long long int) arr_18 [15ULL] [14] [i_4] [i_5 + 1] [i_5 + 1] [i_5 - 2]))));
                            }
                            arr_22 [i_2] [i_2] [i_5] [i_2] [i_2] |= ((/* implicit */unsigned char) arr_12 [i_2]);
                            arr_23 [i_3] [i_3] [16U] = ((/* implicit */unsigned int) var_0);
                            /* LoopSeq 3 */
                            for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                            {
                                arr_27 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_5))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_10 [(short)12]))));
                                arr_28 [i_3] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((var_13), (max((var_4), (((/* implicit */int) arr_14 [(unsigned char)10]))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_17)) : (arr_15 [i_2] [i_2])))), (arr_18 [(_Bool)1] [i_4] [i_4] [(_Bool)1] [(unsigned short)11] [i_7])))));
                            }
                            for (unsigned char i_8 = 2; i_8 < 17; i_8 += 2) 
                            {
                                arr_31 [i_3] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (var_19)))), (arr_26 [i_8] [i_5 + 2] [i_4] [i_3 + 1] [i_2])));
                                var_24 = ((/* implicit */unsigned short) var_4);
                                var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) min((var_3), (((/* implicit */int) var_5))))) : (var_9)))) : (var_8)));
                            }
                            for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                            {
                                arr_34 [i_2] [i_2] [i_4] [i_5 + 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_19)) : (arr_17 [i_9] [i_9] [i_9] [13U]))), (max((((/* implicit */unsigned long long int) var_12)), (var_14)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_2] [i_3]))) : (arr_16 [i_2] [i_3 - 1] [i_4] [i_5] [i_9] [i_9])))) ? (var_3) : (arr_15 [(short)1] [i_3]))) : (((/* implicit */int) arr_13 [i_2] [i_2] [8]))));
                                var_26 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32764)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)224)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)224)), (2889551437U)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_2)) ? (max((var_10), (var_4))) : (min((var_15), (var_1)))))));
}
