/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89362
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
    var_20 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */_Bool) 11328740);
                            var_22 ^= ((/* implicit */_Bool) (unsigned short)60252);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) 11)))));
                var_24 += ((/* implicit */signed char) arr_9 [(_Bool)1] [0]);
            }
        } 
    } 
}
