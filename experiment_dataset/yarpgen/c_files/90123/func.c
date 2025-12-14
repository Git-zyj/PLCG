/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90123
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(3755927686U)))))) ? (var_6) : ((((_Bool)0) ? (16312819132432040822ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29674)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)25717))));
                var_17 = ((/* implicit */short) (+(((/* implicit */int) (short)-25719))));
                var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) 3350840011355244345ULL))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (~(16719757328326387237ULL)));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21044)) ^ ((~(((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_9 [i_1] [(signed char)13] [i_3])) : (((/* implicit */int) (short)0)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned long long int) var_0);
    var_22 = ((/* implicit */unsigned long long int) (((((~(((((/* implicit */int) var_15)) << (((/* implicit */int) (_Bool)0)))))) + (2147483647))) >> (((((/* implicit */int) (signed char)127)) - (111)))));
    var_23 = ((/* implicit */unsigned int) var_8);
}
