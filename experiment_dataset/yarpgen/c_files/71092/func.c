/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71092
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
    var_17 &= ((/* implicit */unsigned long long int) var_12);
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_16)))), ((+(((/* implicit */int) (short)32752))))))) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)-38))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_2])))) != (((/* implicit */int) (signed char)-26)))))));
                    var_20 ^= ((/* implicit */short) ((((/* implicit */int) min(((short)13324), ((short)-32756)))) / (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-29164))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)98))))));
                    arr_8 [i_2] [i_2] = ((/* implicit */_Bool) (short)-29153);
                }
            } 
        } 
    } 
}
