/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71651
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
    var_16 = (~((((((~(((/* implicit */int) var_5)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1110751018U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) 3073810898U);
                    arr_7 [i_2 + 2] [2U] [i_0] [i_2 - 1] = ((/* implicit */unsigned int) arr_4 [i_2 - 1]);
                    var_18 &= ((/* implicit */unsigned long long int) var_12);
                }
                var_19 = ((/* implicit */unsigned int) (unsigned char)212);
                var_20 = ((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-1459)));
            }
        } 
    } 
}
