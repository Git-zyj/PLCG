/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89609
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 568468301U);
                    var_13 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_6)) != (((/* implicit */int) (short)9270)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1056243823U)))))))) - (((/* implicit */unsigned long long int) (-(1056243823U))))));
                }
            } 
        } 
    } 
    var_14 = var_10;
    var_15 = max(((+(((/* implicit */int) ((((/* implicit */_Bool) 1056243823U)) || (((/* implicit */_Bool) var_11))))))), (min((((((/* implicit */_Bool) (short)-8203)) ? (((/* implicit */int) var_6)) : (52270571))), (((/* implicit */int) max(((short)-25054), (((/* implicit */short) var_5))))))));
    var_16 = ((/* implicit */unsigned long long int) var_6);
}
