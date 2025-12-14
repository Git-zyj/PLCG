/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66695
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 *= ((/* implicit */unsigned int) (signed char)62);
                var_12 -= ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [(short)3])) ? (((/* implicit */int) arr_2 [(short)12] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_1])))), (((/* implicit */int) min((arr_3 [i_0] [(unsigned char)7] [i_0]), (arr_3 [i_0] [i_0] [i_1]))))))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))))))));
            }
        } 
    } 
    var_13 &= (~(((/* implicit */int) var_8)));
}
