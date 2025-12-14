/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65973
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)1))))) : (((((/* implicit */_Bool) -1)) ? (var_2) : (((/* implicit */unsigned int) 0))))))) ? (var_6) : (((/* implicit */int) var_13))));
    var_15 = ((/* implicit */unsigned char) ((unsigned int) -1456920804));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 *= ((((/* implicit */_Bool) (+(24)))) ? (((unsigned int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8191))));
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
