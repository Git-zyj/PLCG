/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65340
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
    var_17 = ((/* implicit */long long int) (short)-8460);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) >> (((((/* implicit */int) arr_2 [i_4] [i_2])) - (65))))) | (((int) 6486937370775809267LL))))) : (((unsigned long long int) ((unsigned short) -549106945)))));
                                var_19 ^= ((/* implicit */unsigned char) arr_12 [i_1] [i_0] [i_1] [i_1] [i_3] [i_4]);
                                arr_14 [i_0] [i_1] [(unsigned short)14] [i_2] [i_4] = ((/* implicit */unsigned char) ((_Bool) max((arr_5 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 - 1]), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_12 [i_2] [i_2] [i_2] [i_0] [i_4] [4ULL])) : (9223372036854775807LL))))));
                                arr_15 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_3 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6929992056209667266ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)46401)))))))) ? (arr_5 [i_0] [(unsigned char)16] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3 - 1])) ? (((/* implicit */int) arr_2 [i_0] [i_3 + 1])) : (((/* implicit */int) arr_2 [i_1] [i_3 + 2])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) max((6486937370775809251LL), (((/* implicit */long long int) 1674837227))));
                    arr_16 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) <= (((arr_9 [i_0] [i_1] [i_1] [2U] [8LL]) ? (6929992056209667266ULL) : (((/* implicit */unsigned long long int) 1384920462))))));
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26212)) ^ (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) != (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])))));
                    var_21 *= ((/* implicit */unsigned short) (+(((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_7))))));
                }
                var_22 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0]) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_1]))))) : (((var_16) ? (((/* implicit */long long int) var_11)) : (arr_5 [i_0] [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
}
