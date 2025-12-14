/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75390
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
    var_18 = ((/* implicit */unsigned short) var_15);
    var_19 &= ((/* implicit */unsigned long long int) ((int) ((unsigned char) (+(12396720927061890834ULL)))));
    var_20 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 += (-(arr_3 [i_0] [(short)10] [(short)10]));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0] [(unsigned char)5]))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_3 [(unsigned short)5] [i_1] [i_1]) : (max((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
}
