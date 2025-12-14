/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72359
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
    var_14 = ((/* implicit */short) ((((/* implicit */long long int) var_5)) == (((((var_1) + (9223372036854775807LL))) << ((((-(var_12))) - (1980357813U)))))));
    var_15 = ((/* implicit */int) ((max((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) var_5)))))) ^ ((+(var_1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)4095))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1 - 1])) == (((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))) : (((/* implicit */int) min((arr_1 [i_0] [i_1 + 1]), (((/* implicit */unsigned short) arr_3 [i_1] [i_1 + 1])))))));
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_1 [i_1 - 3] [i_1 + 1]))), (((((/* implicit */_Bool) (unsigned char)112)) ? (((((/* implicit */_Bool) (unsigned short)31326)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (unsigned char)143)))) : (((/* implicit */int) (short)-2587))))));
                    var_18 ^= ((/* implicit */_Bool) (+(562716852U)));
                }
            } 
        } 
    } 
}
