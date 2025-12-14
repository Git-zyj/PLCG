/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96128
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_19 = ((/* implicit */_Bool) 1221228247U);
            arr_5 [i_1] = ((/* implicit */unsigned int) arr_1 [i_1 + 3] [i_1 + 2]);
            var_20 = arr_3 [i_1];
        }
        arr_6 [i_0] [i_0] = (signed char)-98;
        arr_7 [i_0] = ((/* implicit */unsigned long long int) (signed char)97);
        arr_8 [i_0] [i_0] = (signed char)93;
        var_21 |= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) : (54088470U)));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) arr_10 [i_2]);
        arr_14 [i_2] [i_2] = ((/* implicit */long long int) (signed char)44);
        var_22 |= ((/* implicit */unsigned int) (_Bool)1);
    }
    var_23 = ((/* implicit */unsigned int) (signed char)-43);
    var_24 = ((/* implicit */unsigned long long int) (signed char)-66);
}
