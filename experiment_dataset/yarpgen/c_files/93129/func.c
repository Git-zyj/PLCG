/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93129
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
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) (short)28144)))))), (1023U)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 += ((/* implicit */int) ((long long int) ((unsigned long long int) max((var_4), (var_4)))));
                    arr_11 [i_0] = ((/* implicit */signed char) 4294966272U);
                    arr_12 [i_0] [i_2] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (1846255289) : (((/* implicit */int) arr_2 [13LL]))))) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_2] [i_2])) : (((/* implicit */int) ((_Bool) arr_1 [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */_Bool) (+((+((~(var_5)))))));
    var_21 = ((/* implicit */unsigned long long int) (short)29242);
    var_22 = max((max(((~(var_3))), (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_6))))))), (((/* implicit */int) var_4)));
}
