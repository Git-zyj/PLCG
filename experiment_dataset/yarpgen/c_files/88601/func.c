/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88601
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57118)) << (((var_6) - (3530768030U)))))) ? (((((/* implicit */_Bool) 4075241690820332304ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57099))) : (2819422208U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-91))))));
    var_11 = ((/* implicit */short) ((signed char) (unsigned short)57115));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)57118))) && (((/* implicit */_Bool) arr_6 [i_2]))));
                    var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) (unsigned short)18766))), (max((((/* implicit */int) arr_4 [i_0])), (((arr_3 [i_0] [i_1]) / (((/* implicit */int) arr_2 [i_0]))))))));
                }
            } 
        } 
    } 
    var_13 = (!(((/* implicit */_Bool) (unsigned short)57098)));
}
