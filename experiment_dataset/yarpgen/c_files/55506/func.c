/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55506
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
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) min((3438320382U), (((/* implicit */unsigned int) (short)32762))))) - (max((((/* implicit */long long int) var_8)), (var_4)))))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 ^= ((/* implicit */short) max((max((max((((/* implicit */unsigned long long int) var_3)), (var_15))), (max((var_14), (var_9))))), (((/* implicit */unsigned long long int) min(((short)32762), (((/* implicit */short) (signed char)26)))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) (short)0))))) * (0ULL))), (((/* implicit */unsigned long long int) min((-8LL), (((/* implicit */long long int) 7182224U))))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((min((min((var_15), (((/* implicit */unsigned long long int) var_10)))), (max((((/* implicit */unsigned long long int) var_13)), (var_15))))), (min((((/* implicit */unsigned long long int) (unsigned short)48348)), (5434749368386896911ULL)))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(var_14))))));
}
