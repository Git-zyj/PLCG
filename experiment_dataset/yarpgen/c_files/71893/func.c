/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71893
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
    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) == (min((var_2), (((/* implicit */unsigned long long int) var_6))))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)24623)) + (((/* implicit */int) (short)24623)))) / (((((/* implicit */int) var_13)) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24623)))))))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)110))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 = ((((/* implicit */int) (unsigned char)22)) >> (((4394072168212618137LL) - (4394072168212618109LL))));
                var_20 -= ((min((4394072168212618137LL), (((/* implicit */long long int) arr_1 [i_1 - 1])))) >> (((((((/* implicit */_Bool) (signed char)-125)) ? (arr_3 [i_0] [i_1 - 2]) : (arr_3 [i_0] [i_0]))) - (2356384342911457367LL))));
            }
        } 
    } 
}
