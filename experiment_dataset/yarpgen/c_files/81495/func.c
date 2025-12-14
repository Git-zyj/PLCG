/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81495
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
    var_16 = 14246724831540363662ULL;
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) : (arr_4 [i_0] [i_0 + 4] [i_0] [i_0])))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_2] [i_0]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((var_3) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned short)57188)))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) -7128528472833205646LL)))))));
}
