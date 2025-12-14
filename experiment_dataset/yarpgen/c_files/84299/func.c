/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84299
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
    var_11 ^= ((unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) arr_4 [i_0]);
                    var_13 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) : (3808684750U)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (+((+(var_8)))));
}
