/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61081
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
    var_12 = ((/* implicit */short) max((var_12), (var_4)));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1U) << (((((/* implicit */int) (short)(-32767 - 1))) + (32775)))))) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((unsigned int) ((var_3) ^ (-7019418752010235031LL)))) : (((unsigned int) min((3687944072U), (((/* implicit */unsigned int) (short)32767)))))));
    var_14 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) 1590146799371403812LL)) ? (var_6) : (var_6))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_15 *= ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-53))));
                    var_16 = ((arr_7 [i_1] [i_1] [i_2] [i_1]) + (((/* implicit */int) var_4)));
                }
            } 
        } 
    } 
}
