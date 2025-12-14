/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58537
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 |= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [15U] [i_1] [i_1])), ((~(2769699029538552974ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) / (arr_14 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [i_3 - 1] [i_1]))));
                                var_11 ^= ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)17110))))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (max((arr_14 [i_0] [i_1] [i_0] [i_0 + 1] [i_1] [i_3 + 1] [i_0]), (((/* implicit */long long int) arr_8 [i_0 + 1])))))))));
                                var_13 *= ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) ((long long int) arr_13 [(signed char)16] [i_0 - 1] [i_0] [i_1] [11U] [i_0 - 1] [i_2]));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_9);
    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12714)) ? (((/* implicit */long long int) var_8)) : (max((((/* implicit */long long int) ((unsigned int) var_1))), ((~(1667603318761145774LL)))))));
}
