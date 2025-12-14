/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82667
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((((unsigned long long int) arr_2 [i_0] [i_1])) << (((arr_2 [i_0 + 2] [i_1 + 3]) - (4441684385962171548LL)))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_1])) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [9LL] [i_1])));
                var_12 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                var_13 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_1 [i_0])) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_4 [i_0] [1LL] [i_1])) & (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))))));
            }
        } 
    } 
}
