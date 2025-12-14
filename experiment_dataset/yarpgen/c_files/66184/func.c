/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66184
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */int) var_8)) & (((/* implicit */int) (short)0)))) == (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)-3910))))))))));
                    arr_12 [i_1] [i_1] [i_2] [i_1 - 1] = (short)-1;
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-6))));
}
