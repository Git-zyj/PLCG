/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94237
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))));
                arr_5 [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)3])))) + (2147483647))) >> ((((+(((/* implicit */int) arr_2 [i_1] [i_1] [i_1])))) - (23478)))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_11);
}
