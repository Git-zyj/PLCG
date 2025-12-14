/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77947
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
    var_10 += ((/* implicit */short) (-(((/* implicit */int) var_3))));
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_6))))));
    var_12 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(arr_4 [i_0] [i_0] [i_1]))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [7ULL])))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_4 [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (var_2)));
}
