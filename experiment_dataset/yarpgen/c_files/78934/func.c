/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78934
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
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) var_8);
                    arr_9 [i_1] = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 3694781662U)) : (arr_8 [i_0] [i_0] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_1)))))), (((/* implicit */int) var_8))));
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((~(var_10))), (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) var_6)))))))));
}
