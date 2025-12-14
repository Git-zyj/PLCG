/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67931
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((69741423) + (((/* implicit */int) (short)0)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 490471770)) % (arr_0 [i_0 + 1] [i_3 - 3])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_2)));
                            var_14 = ((/* implicit */int) 2812427968U);
                            arr_8 [i_0] [i_1] [i_1] [i_2 + 1] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (2812427978U) : (2812427972U)))) >= (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (-1088224289) : (((/* implicit */int) var_8))))) & (((((/* implicit */long long int) var_6)) ^ (8022081184231173924LL)))))));
                            arr_9 [i_1] [i_1] [i_2] [i_3 - 4] = ((/* implicit */unsigned int) arr_7 [i_3 - 4] [i_2 + 1] [i_1] [i_0 - 1]);
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))))) + (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_1]))))), (max((0ULL), (var_7)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_10);
}
