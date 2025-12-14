/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63930
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
    var_20 = ((/* implicit */_Bool) max((min((2955720201U), (((unsigned int) (_Bool)0)))), (max((((/* implicit */unsigned int) (unsigned short)25082)), (4241559174U)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)-45)), (min((max((53408122U), (((/* implicit */unsigned int) (short)-26385)))), (((/* implicit */unsigned int) max(((short)-26915), (((/* implicit */short) (signed char)-90)))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (~(((unsigned long long int) 1553888317))));
                }
            } 
        } 
    } 
    var_22 = min((((long long int) max((((/* implicit */unsigned int) (short)32759)), (53408122U)))), (((/* implicit */long long int) (unsigned short)57168)));
}
