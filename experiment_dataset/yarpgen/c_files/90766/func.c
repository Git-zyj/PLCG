/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90766
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_2 [i_1 + 1]);
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((int) arr_3 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4]))) > (arr_3 [i_1 - 1] [i_0] [i_0])))) - (arr_2 [i_0 + 1])));
                var_18 = ((/* implicit */signed char) ((_Bool) ((int) 18446744073709551608ULL)));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((var_0) - (3500172887U)))))) || (((/* implicit */_Bool) var_15))));
}
