/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62539
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */int) ((signed char) max((((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0])))), ((~(-1))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (+(2828454881U)));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((4294967290U) < (var_6)))) : (((((/* implicit */_Bool) 133955584U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)22496)))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4161011712U)))))));
}
