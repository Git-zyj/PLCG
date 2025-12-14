/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81247
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) max(((-(var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-12460)) : (((/* implicit */int) var_11)))))))) % (((long long int) ((1083087089U) >> (((var_12) - (1275298413))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_0] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (max((arr_6 [i_1] [i_2] [i_2 + 2]), (arr_6 [i_2] [i_2 - 1] [i_2 - 2])))));
                            var_15 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) - (arr_9 [i_2 + 2] [6ULL] [i_2] [i_2 + 2] [9ULL] [i_1])))), (var_1));
                            var_16 = arr_1 [i_2 - 1];
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) -7150883461592699140LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)0), ((unsigned char)148))))) : (arr_6 [(short)10] [i_1] [i_2 + 1])))));
                            var_18 = ((/* implicit */_Bool) (+(((((var_13) || (((/* implicit */_Bool) (short)-1)))) ? (((/* implicit */int) (short)-2838)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_10) : (arr_9 [i_1] [i_1] [4ULL] [i_0] [i_1] [i_0])))), (arr_1 [i_1])));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_0)), (var_10)));
}
