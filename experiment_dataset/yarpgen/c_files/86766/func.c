/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86766
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_1))));
    var_15 = ((/* implicit */unsigned int) var_3);
    var_16 = ((/* implicit */int) ((var_3) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (short)-13432)) ^ (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_2])) % (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1])) + (var_5)))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) (~(max((arr_3 [i_2 + 1] [i_2] [i_2 - 1]), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))))) || (((/* implicit */_Bool) (~(arr_3 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
}
