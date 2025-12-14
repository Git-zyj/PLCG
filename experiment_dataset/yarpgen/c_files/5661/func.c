/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5661
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))) - (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) & (140393157U)))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) max((((unsigned short) (-(((/* implicit */int) (unsigned short)30086))))), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_3 [i_1])))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */long long int) var_3)) : (max((((/* implicit */long long int) (unsigned char)112)), (-183205062574266924LL)))));
}
