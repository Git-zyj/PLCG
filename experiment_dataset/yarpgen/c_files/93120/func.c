/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93120
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
    var_18 = ((/* implicit */unsigned long long int) 7LL);
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((var_4), (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10))) : (var_10))) > (((/* implicit */long long int) (~(0U))))))))))));
    var_20 &= ((/* implicit */short) (((-(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_13)))))) > (max((var_16), (((/* implicit */int) (short)28047))))));
    var_21 = var_1;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */int) (short)-28045);
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((5216832069168940076ULL) ^ (((/* implicit */unsigned long long int) 1096842839584753589LL)))), (((/* implicit */unsigned long long int) (unsigned char)24)))))));
                    var_24 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) == (arr_3 [i_1] [i_1])))) : ((~(-7)))))) ? (min((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)53)) & (var_3))))));
                }
            } 
        } 
    } 
}
