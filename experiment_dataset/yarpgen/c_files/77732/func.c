/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77732
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (65535) : (((/* implicit */int) (signed char)23)))))));
                    var_15 = (!(((/* implicit */_Bool) -1979847541)));
                }
            } 
        } 
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_9))));
    }
    var_17 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-8)) ^ (-2027492739))))));
}
