/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68460
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
    var_13 *= ((/* implicit */unsigned short) (((-(3236933575U))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (var_3))))));
    var_14 = ((/* implicit */unsigned char) (-(((var_12) + (((/* implicit */long long int) ((/* implicit */int) min((var_1), ((_Bool)1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)96)))));
                    arr_9 [i_0] [i_1] [i_0] [(unsigned char)12] = ((/* implicit */int) (((_Bool)1) ? ((-(arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))));
                }
            } 
        } 
    } 
}
