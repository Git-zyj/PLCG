/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84060
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
    var_10 = ((/* implicit */unsigned int) (short)-29930);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105)))))) ? (min((((/* implicit */long long int) arr_0 [i_1 - 1])), (((((/* implicit */_Bool) (signed char)-40)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 - 1]))))) < (arr_7 [i_1 + 2] [9U] [i_4])));
                                arr_14 [i_0] [i_2] = ((((/* implicit */int) (unsigned char)184)) / ((+(arr_9 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 2]))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1 + 2] [i_0] [i_2]), (arr_8 [i_0] [i_1 - 2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_1 - 2] [i_2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_2]))))));
                    arr_15 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_0] [17]);
                }
                for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_16 [i_0] [i_1]) : (((/* implicit */int) arr_13 [(short)16] [i_1 - 2] [(short)16] [i_1 + 2] [i_7] [i_1 - 2])))) | (((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 2] [i_1] [18U] [i_0] [i_1 + 2])))))));
                                var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (!(((/* implicit */_Bool) 813807082))))))))) : (0LL)));
                                arr_26 [i_6] [i_1] [i_5] [i_1] [i_6] [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_7] [i_7 - 3]))))) < (((/* implicit */int) arr_2 [i_1 + 1])))))));
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (arr_3 [i_0]) : (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_5] [i_5]))))) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) (unsigned char)255)))) >> (((/* implicit */int) ((arr_2 [i_1 - 2]) && (arr_23 [i_1 - 2] [i_1 + 2]))))));
                }
                arr_27 [i_0] [12] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1])) > (((/* implicit */int) (signed char)-56)))))));
                var_17 = ((/* implicit */int) ((short) ((((((/* implicit */_Bool) arr_9 [i_0] [11] [i_1] [11U])) ? (((/* implicit */int) (_Bool)0)) : (-1243472451))) << (((((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned int) 900280459)) : (var_2))) - (900280441U))))));
            }
        } 
    } 
    var_18 |= var_3;
}
