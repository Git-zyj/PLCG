/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99955
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
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_18)), (var_9)));
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 3905650429U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)210)))), (((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned short)47987);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_1]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
            var_21 *= ((/* implicit */_Bool) ((arr_4 [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1]))));
        }
        for (int i_2 = 4; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (unsigned char)253)))), ((~(((/* implicit */int) arr_1 [i_0]))))))) : (min((var_7), (((/* implicit */unsigned int) arr_4 [i_0]))))));
            var_22 += max((((/* implicit */unsigned int) min((arr_6 [i_2 - 4] [i_2 - 3] [i_2 - 2]), (arr_6 [i_2 + 2] [i_2 - 1] [i_2 - 2])))), (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 2])) ? (arr_3 [i_2 - 4] [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 4] [i_2 + 2] [i_2 - 3]))))));
            arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2 - 1])))))))) != ((((_Bool)0) ? (arr_3 [i_2 - 3] [i_2 - 3] [i_2 + 2]) : (2655706214U)))));
        }
    }
}
