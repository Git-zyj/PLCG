/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58064
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
    for (short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0 - 1])))))))), (arr_2 [i_0 - 1])));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_6)), (arr_8 [i_0] [i_1] [i_2])))), (max((var_12), (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_16)))) / (((/* implicit */int) arr_5 [i_0] [i_0]))))) : (max((min((((/* implicit */long long int) var_13)), (var_4))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) | (arr_9 [i_0] [i_0] [(short)5] [i_0])))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))))) : (min((4294967295U), (4294967295U)))));
                                arr_16 [i_0 - 4] [i_3] [i_1] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) var_1)), (var_5)))));
                                var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) var_14)))), (((((/* implicit */int) var_16)) & (((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) != (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_14)))))))))));
                                var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_14)) ? (arr_14 [i_6] [i_0 - 1] [i_0 + 3]) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) & (((/* implicit */int) (unsigned char)255)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        for (unsigned int i_9 = 2; i_9 < 24; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 23; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            {
                                arr_40 [i_9 - 2] [i_10] [i_8] [(short)16] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_32 [i_12] [i_10])))))))), ((((!(((/* implicit */_Bool) arr_32 [i_12] [i_9])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : ((-(arr_28 [i_9] [i_9])))))));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) * (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)1)))))))))))));
                                arr_41 [i_10] [i_8] [(unsigned short)7] = ((/* implicit */_Bool) ((short) (~(((var_3) ^ (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            {
                                arr_49 [i_13] &= ((/* implicit */unsigned char) (~((-((+(((/* implicit */int) var_6))))))));
                                var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6))))));
                                var_25 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)108)), (-3629663739196134506LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_9 - 2] [i_9 - 1])))))) + ((~(var_11)))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16] [i_15] [i_15] [i_15] [i_8]))) & (var_12))))));
                                arr_54 [i_16] [i_9] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_9 + 1] [i_9 + 1]))))), (var_2)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
