/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73442
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
    var_20 = (+(var_19));
    var_21 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) (!((((+(((/* implicit */int) arr_0 [(unsigned char)2])))) <= ((~(((/* implicit */int) var_11))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (max((var_6), (((/* implicit */int) var_4)))) : (((var_15) ? (arr_6 [i_0] [i_1] [i_1]) : (-1665623084)))))));
            }
        } 
    } 
}
