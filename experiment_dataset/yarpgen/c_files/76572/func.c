/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76572
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */int) ((unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        arr_4 [i_0 - 3] = ((/* implicit */signed char) (~(arr_0 [i_0 - 1])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_2 + 1])), (arr_7 [i_2 - 1] [i_2 - 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1])))))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (short)-7762))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_15)))))) | (((long long int) ((long long int) var_0)))));
}
