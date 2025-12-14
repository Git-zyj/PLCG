/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57976
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((unsigned long long int) ((unsigned char) ((unsigned long long int) (unsigned char)244)));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_9 [i_0] [(unsigned char)14] [i_1] [i_1 - 1] = ((unsigned int) ((_Bool) (short)-6627));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) ((short) (unsigned char)255)))))));
                    arr_10 [i_0] [(unsigned char)0] [i_2] &= ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)189));
                }
                var_15 += ((/* implicit */int) ((short) ((unsigned int) ((unsigned char) (short)32765))));
            }
        } 
    } 
    var_16 = ((unsigned long long int) ((short) 4294967295U));
    var_17 |= ((/* implicit */short) ((unsigned long long int) ((unsigned char) ((unsigned long long int) var_1))));
    var_18 -= ((/* implicit */_Bool) ((unsigned char) ((unsigned int) ((unsigned long long int) var_6))));
}
