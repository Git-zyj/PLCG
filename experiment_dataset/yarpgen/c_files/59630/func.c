/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59630
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (_Bool)0);
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (+((((_Bool)1) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (3467275422U)));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1987843814)) ? (((/* implicit */int) (short)9567)) : (((/* implicit */int) (short)9567))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_2), (((/* implicit */signed char) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_4))))))))));
}
