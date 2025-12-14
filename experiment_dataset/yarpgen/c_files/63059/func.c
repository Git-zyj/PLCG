/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63059
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] [(unsigned char)4] [(signed char)8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_16))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 = (((~(((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_6)))) << (((/* implicit */int) (_Bool)1)))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */int) (signed char)120)) * (((/* implicit */int) var_8)))), ((-(((/* implicit */int) var_3)))))));
}
