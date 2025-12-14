/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63566
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29850)) ? (3381496131604393488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228)))));
                arr_7 [i_0 - 2] |= ((/* implicit */short) max((((((/* implicit */_Bool) 67043328)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)75)))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-60)), ((unsigned char)44))))));
            }
        } 
    } 
    var_14 |= ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)59)), ((unsigned char)255)));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) 16604468874152963145ULL)) || ((_Bool)1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)64)) ? (1812654574U) : (1440475221U))))));
}
