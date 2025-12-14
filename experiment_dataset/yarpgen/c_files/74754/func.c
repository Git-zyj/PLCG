/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74754
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
    var_15 |= ((/* implicit */long long int) ((((/* implicit */int) (short)1991)) < (1508904603)));
    var_16 = ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_13))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_4 [20ULL] [20ULL] [i_0])) < (((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) arr_1 [(signed char)20])))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [(signed char)4])) * (arr_0 [(unsigned short)10] [(_Bool)1])))) ? (((/* implicit */int) ((arr_4 [24] [24] [i_1]) || (arr_4 [(signed char)16] [(signed char)16] [i_0])))) : ((-(((/* implicit */int) arr_2 [(unsigned char)4]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) var_11);
                arr_7 [i_0] = max((((((((/* implicit */int) (short)-1984)) < (((/* implicit */int) arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) ((-1024209362) ^ (((/* implicit */int) (short)-1969))))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) 7447629782916738401LL)))))));
                var_18 = ((/* implicit */long long int) arr_4 [i_0] [i_1 - 2] [i_1 - 2]);
            }
        } 
    } 
}
