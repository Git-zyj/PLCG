/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90379
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
    var_20 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (_Bool)1);
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 511U)) ? (983040) : (((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)7])) ? (arr_3 [i_0]) : (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))))))));
            }
        } 
    } 
}
