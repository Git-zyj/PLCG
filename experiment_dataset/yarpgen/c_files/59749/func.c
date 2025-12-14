/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59749
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
    var_18 = ((/* implicit */unsigned char) ((_Bool) var_12));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 + 4] [i_0 - 2]);
                arr_6 [i_0] = ((/* implicit */int) -9104061412962856204LL);
                var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)104)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)151))) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_13)))) ? (var_11) : (((/* implicit */int) var_8))));
}
