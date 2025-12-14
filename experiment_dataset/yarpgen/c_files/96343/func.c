/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96343
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
    var_12 = ((/* implicit */short) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)15] [i_1] = ((/* implicit */long long int) min((max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1] [9LL]))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_2 [i_1] [i_0]))))))));
                var_13 = ((/* implicit */signed char) var_0);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_0 + 3] [i_0 + 3] [i_0]);
                var_14 = ((/* implicit */unsigned short) min((min((max((18446744073709551600ULL), (((/* implicit */unsigned long long int) (unsigned char)152)))), (((/* implicit */unsigned long long int) (short)25530)))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)12)))), (((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) (unsigned char)168))))))))));
            }
        } 
    } 
}
