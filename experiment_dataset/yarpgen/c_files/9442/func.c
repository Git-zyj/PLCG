/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9442
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
    var_10 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) (short)31537);
                    var_12 = ((/* implicit */_Bool) (short)-1);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */short) (signed char)-74);
                                var_14 = ((/* implicit */unsigned short) (signed char)57);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_9);
}
