/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93277
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_20 = max((arr_7 [i_4] [i_0] [i_0] [i_0]), (min((max(((unsigned short)31408), ((unsigned short)4573))), ((unsigned short)32764))));
                                var_21 = (unsigned short)37253;
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [(unsigned short)8] |= arr_2 [i_0];
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) < (((((/* implicit */_Bool) (unsigned short)12288)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)24307))))));
}
