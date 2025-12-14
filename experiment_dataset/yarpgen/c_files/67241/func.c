/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67241
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) 3137451226U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1479773480U))))), (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_12))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) (unsigned char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)15817), (((/* implicit */short) var_16)))))) : (((arr_3 [i_0] [i_0] [i_0]) % (arr_3 [i_0] [i_1] [(signed char)1])))))) ? (max(((-(((/* implicit */int) (short)15817)))), (((/* implicit */int) max(((unsigned char)92), (((/* implicit */unsigned char) (signed char)94))))))) : (((/* implicit */int) var_16))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)92)) ^ (((/* implicit */int) arr_2 [5ULL] [i_1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))))))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
}
