/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95884
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
    var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (signed char)-1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9612675346789698537ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)17682))));
                var_14 = ((/* implicit */signed char) (~((-(min((var_2), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
            }
        } 
    } 
    var_15 = ((unsigned long long int) min((((/* implicit */short) var_10)), (((short) var_10))));
}
