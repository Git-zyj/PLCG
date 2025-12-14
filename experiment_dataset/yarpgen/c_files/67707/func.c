/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67707
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) -1042809180);
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((max((((/* implicit */int) ((short) (unsigned short)65535))), ((+(1042809180))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) 3669897759U))))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) 0U);
}
