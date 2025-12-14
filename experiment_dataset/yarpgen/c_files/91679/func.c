/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91679
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
    var_10 = ((/* implicit */int) (~((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) var_1)) : (var_0)))));
    var_11 = ((/* implicit */unsigned short) ((unsigned int) var_6));
    var_12 = ((/* implicit */int) ((((/* implicit */int) (signed char)120)) != (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) var_8);
                    var_14 &= ((/* implicit */short) min((var_3), (var_8)));
                    var_15 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) var_9)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) var_6);
}
