/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90438
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
    for (short i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) 1550370623U);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-118)) ? (1505669855) : (((/* implicit */int) arr_0 [i_0 + 2]))))), (((9U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))));
                            var_14 *= ((/* implicit */signed char) ((unsigned char) ((arr_1 [i_0 - 1]) + (arr_1 [i_0 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) 699982886);
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_9)))) - (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_6)))))))), (min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) var_8))))));
}
