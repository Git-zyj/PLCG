/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68290
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) -7965930402608007252LL);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned char) arr_7 [i_0 - 1] [i_2]));
                    var_18 = ((/* implicit */short) min((var_18), (((short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    var_19 = ((/* implicit */unsigned long long int) var_12);
                }
                var_20 = ((/* implicit */signed char) arr_8 [i_0 - 1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (~(1629634792)));
    var_22 += ((/* implicit */unsigned char) (~(0LL)));
}
