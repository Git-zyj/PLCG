/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77457
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(var_5))))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) min((var_16), (((/* implicit */short) (unsigned char)209))))) > (((/* implicit */int) ((var_17) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1037185444)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_18))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_22 = var_10;
                            var_23 = ((/* implicit */unsigned long long int) 3668605047U);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) arr_2 [i_0]);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((unsigned char) var_4));
}
