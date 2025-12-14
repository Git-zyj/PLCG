/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65799
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), ((unsigned char)214)));
                    arr_10 [i_2] [i_2] [i_2] = arr_8 [i_2];
                    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned short)24062)) : (((/* implicit */int) (signed char)28))))) ? (((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_2)) ? (var_9) : (var_9)))));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned short) var_2);
    var_16 = var_5;
}
