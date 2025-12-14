/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91753
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
    var_10 = ((/* implicit */_Bool) (-(max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (short)-15259)) : (((/* implicit */int) (unsigned short)0))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) var_4);
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_0)) : (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (unsigned short)65535))))))));
                }
            } 
        } 
    } 
    var_13 = var_5;
}
