/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65431
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) max((var_6), (((/* implicit */signed char) (_Bool)1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_1]), (arr_3 [i_0])))) ? (((/* implicit */int) ((short) var_11))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned int) (_Bool)1);
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 67108863ULL)) ? (max((((/* implicit */int) arr_5 [i_0] [i_1])), (((((/* implicit */int) (unsigned short)16980)) / (-2966191))))) : (((/* implicit */int) ((unsigned short) ((unsigned short) arr_5 [i_0] [i_1]))))));
                                var_18 ^= ((/* implicit */unsigned long long int) ((unsigned short) var_12));
                                var_19 = ((/* implicit */unsigned long long int) var_4);
                                var_20 = ((/* implicit */unsigned char) ((short) ((unsigned int) arr_15 [i_2 - 1] [i_1] [i_2 - 3] [i_4] [i_4] [(unsigned char)13] [i_3])));
                            }
                            var_21 = ((/* implicit */int) ((min((var_9), (((/* implicit */unsigned long long int) var_5)))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) max((((unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_0])), (var_7)))));
            }
        } 
    } 
}
