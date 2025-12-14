/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63345
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
    var_14 |= ((/* implicit */signed char) ((max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (min((var_10), (((/* implicit */long long int) var_2)))))) != (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_15 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) max((max((arr_2 [i_0]), (arr_2 [i_1]))), (((/* implicit */long long int) (short)-11283))));
                arr_7 [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-17LL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) & (arr_2 [i_0])))))))));
                arr_8 [i_0] [(short)5] = ((/* implicit */signed char) var_10);
                arr_9 [i_0] = ((/* implicit */long long int) var_11);
                arr_10 [i_1] = min((((((/* implicit */_Bool) 10666046207963621934ULL)) ? (((/* implicit */int) (short)22330)) : (((/* implicit */int) (short)22330)))), (((/* implicit */int) (unsigned short)11964)));
            }
        } 
    } 
}
