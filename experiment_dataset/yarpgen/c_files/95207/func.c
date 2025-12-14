/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95207
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 ^= (unsigned char)24;
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) ? (arr_3 [i_1 + 2] [i_1 - 1]) : (((/* implicit */int) ((((/* implicit */int) (short)-1)) > (((/* implicit */int) (unsigned short)34092))))))) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2]))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (short)10047)) >= (((/* implicit */int) (unsigned char)185))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) (unsigned char)73);
    var_18 = ((/* implicit */unsigned char) min(((+(-1690796422))), (((/* implicit */int) (unsigned char)54))));
}
