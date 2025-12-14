/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5598
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
    var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_4)))) < (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0)))))))) > (max((((/* implicit */unsigned long long int) 1343065465)), (17123394829469667409ULL)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_13 &= ((/* implicit */_Bool) ((short) max((var_0), (((/* implicit */unsigned short) ((signed char) var_9))))));
                            var_14 |= ((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) -1343065459))));
                            arr_11 [i_2] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((unsigned short) -1343065477)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((3530075619695170367ULL), (((/* implicit */unsigned long long int) (unsigned short)65529)))))));
            }
        } 
    } 
}
