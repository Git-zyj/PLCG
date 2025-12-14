/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76775
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 2])) ? (var_7) : (arr_2 [i_1] [i_2 - 1]))));
                    var_13 = ((/* implicit */short) var_6);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_5) != (((/* implicit */long long int) var_9))))), (min((((/* implicit */long long int) (unsigned char)79)), (-9223372036854775804LL)))));
                                var_14 = ((/* implicit */short) (~((+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((var_15), ((~((-((~(2555589206191600477ULL)))))))));
}
