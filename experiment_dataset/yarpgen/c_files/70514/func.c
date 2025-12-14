/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70514
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
    var_10 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_2));
        var_11 ^= ((/* implicit */_Bool) var_5);
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) var_5);
        arr_7 [i_1] = ((/* implicit */signed char) ((int) ((short) var_5)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_17 [i_4] = ((unsigned int) var_7);
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_7))));
                    arr_18 [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) var_8)));
                }
            } 
        } 
        var_13 *= ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) var_8)));
        var_14 = ((short) var_6);
    }
    var_15 = ((/* implicit */int) ((signed char) 4294967295U));
}
