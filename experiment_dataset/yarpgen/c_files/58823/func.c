/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58823
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
    var_13 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)59979)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */short) arr_4 [i_0]);
                arr_5 [(_Bool)1] &= ((/* implicit */short) 1634808751U);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10473)) ? (((/* implicit */long long int) var_6)) : (var_4)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_12)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (-(((/* implicit */int) var_11))));
}
