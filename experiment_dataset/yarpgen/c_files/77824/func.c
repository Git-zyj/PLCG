/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77824
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
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) max(((-(arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_1 [i_1])))));
                arr_6 [i_0] = ((/* implicit */short) arr_3 [i_1] [i_0]);
                var_15 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [i_1 - 2] [i_1] [i_0]) : (arr_4 [i_0] [i_1 - 2] [i_1])))) ? (var_9) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) (short)30720)))))) ^ (((/* implicit */int) ((unsigned short) (short)30720)))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_7))));
    var_17 = ((/* implicit */unsigned short) var_9);
}
