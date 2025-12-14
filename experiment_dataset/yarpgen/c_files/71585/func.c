/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71585
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) 130023424));
                    var_17 = ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2)));
                    arr_10 [i_0] [i_0] [i_0 + 3] [i_0] = ((/* implicit */unsigned char) ((unsigned short) 130023424));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_16);
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)17))));
    var_20 = ((/* implicit */unsigned int) var_1);
}
