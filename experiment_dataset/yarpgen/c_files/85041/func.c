/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85041
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
    var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (536870912U) : ((~(((((/* implicit */_Bool) var_10)) ? (536870912U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36)))))))));
    var_14 -= ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_4 [i_1 + 3] [i_1 - 1] [i_1 + 1]))))));
                var_16 -= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)226)), (((int) ((((/* implicit */_Bool) (unsigned short)64622)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_5);
}
