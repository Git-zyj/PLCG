/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93912
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
    var_11 = ((/* implicit */long long int) 1391539507);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))), (((((/* implicit */_Bool) -1391539507)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) arr_1 [i_1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) 17781892901040668281ULL);
                            var_14 = ((/* implicit */signed char) max((var_14), ((signed char)48)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) 3035097406024899435ULL);
                var_16 = ((/* implicit */unsigned char) max((15411646667684652180ULL), ((+(max((var_9), (((/* implicit */unsigned long long int) (short)17849))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5183000769808472878ULL))));
}
