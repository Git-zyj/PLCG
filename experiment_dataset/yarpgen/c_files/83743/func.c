/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83743
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
    var_10 = ((/* implicit */unsigned char) (short)511);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [i_1] |= ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0]))));
                    arr_11 [i_2] [i_0 - 2] [i_1] [i_0 - 2] = ((/* implicit */short) 5444889801828525075LL);
                    arr_12 [i_1] = ((/* implicit */unsigned char) arr_1 [i_0 + 4]);
                }
            } 
        } 
        arr_13 [i_0 - 2] [i_0] = ((/* implicit */unsigned char) (-(arr_8 [i_0] [i_0] [i_0] [i_0 + 3])));
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_3] [i_3]));
        arr_17 [i_3] = ((/* implicit */long long int) (~(806869632U)));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)0)), (var_9)));
    }
}
