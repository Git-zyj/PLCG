/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8284
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
    var_18 = (short)-18506;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((unsigned int) ((_Bool) 10943694236822472340ULL)));
                    var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 2778908545U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))), (((2778908531U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
