/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97640
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19834))) : (var_2)));
                arr_4 [(signed char)7] [5ULL] [i_0] = ((/* implicit */short) max((((max((((/* implicit */unsigned long long int) (short)32767)), (14267428569553678783ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) (unsigned char)74))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((long long int) ((max((0ULL), (var_12))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
}
