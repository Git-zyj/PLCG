/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66997
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)7)))), (((/* implicit */long long int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */int) max(((-(var_6))), (((((/* implicit */_Bool) arr_2 [i_3 - 2] [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 1] [i_0] [i_0 + 2]))) : (var_2)))));
                                var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_0]))));
                            }
                        } 
                    } 
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((unsigned int) min(((signed char)-78), ((signed char)-32)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                }
                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_0] [i_0 - 1])) != (((/* implicit */int) var_0)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0 + 1])) * (((/* implicit */int) arr_3 [i_0] [i_0 + 1])))))));
                var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned short) var_1)), (var_5))), (((/* implicit */unsigned short) arr_7 [i_0]))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */short) var_7);
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) var_9)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)61704), (((/* implicit */unsigned short) (signed char)77)))))))) >= (((/* implicit */unsigned long long int) var_2))));
}
