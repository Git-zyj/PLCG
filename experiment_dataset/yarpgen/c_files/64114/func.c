/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64114
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) var_1);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [(unsigned char)5] [(unsigned char)5] [i_2] [i_3 + 1]);
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_7 [i_3 - 2] [i_3 - 2] [i_0] [i_3 + 2]))) ? (max((((/* implicit */long long int) arr_8 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 2] [8ULL])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_15)) : (var_4))))) : (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) arr_4 [i_0] [i_3 + 2] [i_0] [i_0]))))))))));
                            /* LoopSeq 4 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_18 = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29402))))));
                                var_19 ^= max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (arr_11 [i_3 + 1] [i_3] [i_3 + 1] [1LL]))), (((/* implicit */int) var_13)));
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = var_8;
                                var_20 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_3 - 2])))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((var_3) | (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [11LL]))))))) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_2 [i_2] [i_1]))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3 + 1] [i_1] = ((/* implicit */unsigned int) (+(((var_13) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_9 [i_3 + 1] [i_1] [i_1] [i_3 - 2]))))));
                                arr_18 [i_5] [i_1] [i_2] [i_1] [i_0] = max((var_5), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-5)), (var_8))))))));
                                var_22 &= ((/* implicit */long long int) ((signed char) ((signed char) ((_Bool) (_Bool)1))));
                                arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 + 2])) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3 - 1] [i_3] [i_3] [i_3 + 2])) : (arr_11 [i_3] [i_3] [i_3] [i_3 + 1]))) / (((/* implicit */int) arr_15 [i_3 - 2] [i_1] [i_3 + 2]))));
                            }
                            for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_14 [i_1] [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 1]), (arr_14 [i_1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 2])))) & (((/* implicit */int) arr_14 [i_1] [i_0] [i_1] [i_2] [i_3] [i_6 + 1]))));
                                var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [1] [i_2] [i_0] [i_6 + 1])) ? (((/* implicit */long long int) var_15)) : (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_12 [i_6] [i_6] [i_3] [i_6 - 1] [i_3] [i_3] [i_3]))));
                            }
                            for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                            {
                                arr_25 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((var_3) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (signed char)32))))) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) min(((short)-19681), (arr_1 [i_1])))))))));
                                arr_26 [i_0] [18] [i_1] [i_3] [i_7 + 1] = arr_20 [i_0] [i_1] [i_2] [i_7] [i_7] [i_2] [i_3];
                                var_26 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (_Bool)1)))));
                            }
                            var_27 = ((/* implicit */unsigned char) arr_4 [i_3 - 2] [i_3 + 1] [i_3 + 1] [(unsigned short)6]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) max((((((var_6) + (2147483647))) >> ((((+(((/* implicit */int) var_12)))) - (115))))), (((/* implicit */int) (signed char)9))));
}
