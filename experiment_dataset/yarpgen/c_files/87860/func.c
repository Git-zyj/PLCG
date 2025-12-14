/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87860
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), ((+(((/* implicit */int) min((var_14), (var_4))))))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned char)232), (((/* implicit */unsigned char) var_15))))), (((((/* implicit */int) var_10)) % (((/* implicit */int) var_14))))))), (min((((((/* implicit */_Bool) var_12)) ? (10909720946425759293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_22 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((10909720946425759289ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 + 3] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0])), (var_17)))) : (-1700962736)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))), (7537023127283792329ULL))));
                var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_13))) - (arr_3 [(unsigned short)0] [i_0]))), (arr_4 [i_0] [i_0])))), (min((max((10909720946425759276ULL), (5611253200640006766ULL))), (var_0)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_24 ^= min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) arr_12 [i_4] [i_4 - 2] [i_2 + 1] [7ULL] [i_0 + 3] [i_0])) : (9574766975050666451ULL))), (min((7537023127283792340ULL), (((/* implicit */unsigned long long int) (signed char)63)))));
                                arr_13 [i_0] = ((/* implicit */int) min((((unsigned long long int) min((arr_0 [i_1] [i_2 - 1]), ((-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_0 + 3] [i_0]), (arr_9 [i_0] [i_0 + 3] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) min((8871977098658885164ULL), (7537023127283792323ULL))))) ? ((-(max((((/* implicit */long long int) arr_2 [i_0])), (7654712848612430013LL))))) : (min((arr_3 [i_0] [i_0]), (min((arr_4 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)95))))))));
                arr_14 [i_0 + 1] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [15ULL] [8ULL] [i_0]);
            }
        } 
    } 
}
