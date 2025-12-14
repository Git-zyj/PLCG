/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9419
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2503580961080355271ULL)) ? (((/* implicit */unsigned long long int) (+(3216292537U)))) : (11079836357055538606ULL)));
                            var_16 *= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_17 *= ((unsigned long long int) ((unsigned long long int) 2751487769U));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_7))));
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) ((unsigned long long int) var_4))));
    var_21 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned long long int) (unsigned short)29704))));
}
