/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73668
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [0U])))) != (((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        arr_6 [i_1] = arr_0 [i_1] [i_1];
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)-13))));
        var_21 = arr_5 [(signed char)4];
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            var_22 = ((/* implicit */long long int) arr_0 [i_1 + 2] [16]);
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 - 2] [i_2])) > (((/* implicit */int) arr_8 [i_1 + 2] [i_2]))));
        }
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1 + 1])) && (((/* implicit */_Bool) arr_13 [i_1 - 2]))));
            var_23 = ((/* implicit */unsigned int) arr_10 [i_1] [i_1 - 2]);
            var_24 = ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_7 [(unsigned short)6] [i_1 + 2] [i_1 + 2])));
        }
    }
    var_25 |= ((/* implicit */long long int) var_10);
    var_26 = ((/* implicit */long long int) ((((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_15))))))));
}
