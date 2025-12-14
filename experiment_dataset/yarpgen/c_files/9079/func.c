/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9079
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)-1)) <= (-1744074395)));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)105)) / (((/* implicit */int) arr_2 [i_1])))))))) != (min((1744074395), (-807725914))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (min((var_4), (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
