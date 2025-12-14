/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57246
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [13ULL] [i_1] [i_2] = ((/* implicit */signed char) var_2);
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) (signed char)-104)), (arr_5 [i_0] [i_1] [i_1] [i_2]))));
                    arr_9 [i_0] [i_0] [i_0] = ((unsigned char) arr_5 [i_0] [i_1] [i_2] [i_2]);
                    var_12 = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */unsigned char) ((unsigned short) ((var_2) ? (((1711672718) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8)))));
}
