/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67652
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
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) (short)(-32767 - 1));
                    var_14 = ((/* implicit */short) max(((((~(arr_6 [7] [(signed char)10] [(unsigned char)0] [i_1]))) | (((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_1] [i_1 + 1])))), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) arr_0 [i_1])) <= (1867216171U))))))));
                    var_15 &= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 3]))) <= (arr_5 [i_1 + 1]))) ? (min((arr_5 [i_1 - 2]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2]))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_1);
}
