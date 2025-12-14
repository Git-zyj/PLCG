/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66882
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((0), (((/* implicit */int) (unsigned short)16384))))) & (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - (3728391006738664326ULL)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((max((arr_1 [i_0] [i_0]), (14906707191764060724ULL))) < (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), ((-(-3310722088430508501LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_6 [(unsigned short)4] [i_1] [(unsigned short)4] = ((/* implicit */long long int) (~(arr_1 [i_0] [i_1])));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((signed char) arr_2 [i_0])))));
            arr_7 [i_0] [i_0] |= ((/* implicit */unsigned int) arr_0 [i_0]);
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_1])));
        }
    }
    var_23 = ((/* implicit */unsigned char) var_8);
}
