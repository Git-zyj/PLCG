/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56368
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */int) var_8)) + (((/* implicit */int) (short)20029)))), (((/* implicit */int) ((_Bool) ((var_12) - (-1778115602)))))));
    var_16 = ((/* implicit */short) ((unsigned short) var_13));
    var_17 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (-(arr_9 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) ((((1778115610) / (((/* implicit */int) var_13)))) == ((~(var_14))))))));
                    arr_10 [i_2] [i_1] [(signed char)9] [i_0] = ((/* implicit */int) arr_2 [i_0]);
                }
            } 
        } 
    } 
}
