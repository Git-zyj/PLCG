/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81268
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
    var_15 = var_12;
    var_16 = ((/* implicit */short) var_9);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1497037709326395230ULL)) ? (-2082809367) : (((/* implicit */int) (unsigned short)7))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0 + 2] = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                        arr_14 [i_0] [i_1] [i_0] [i_1] = arr_1 [i_0 - 2];
                    }
                } 
            } 
        } 
    }
}
