/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62781
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
    var_11 = max((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) var_9)) / (9223372036854775807LL))));
    var_12 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1963672162)) ? (((/* implicit */int) var_5)) : (2021514396)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_6)))))) && (((/* implicit */_Bool) ((int) var_4)))));
    var_13 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49424))))) ? ((~(var_0))) : (((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0 + 2] [i_1] [i_1] [i_2])), (arr_1 [i_0] [i_1]))))))))));
                    arr_9 [i_0] [i_0] [i_0] [15U] = ((/* implicit */signed char) -2021514393);
                }
            } 
        } 
    } 
}
