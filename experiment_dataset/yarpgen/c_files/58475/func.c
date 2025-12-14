/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58475
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
    var_11 = (_Bool)0;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0 - 1] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_0] [i_0])));
                            arr_10 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)));
                            var_12 = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))) <= (((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2285087183U)));
            }
        } 
    } 
}
