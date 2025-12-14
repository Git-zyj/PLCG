/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88423
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
    var_17 ^= ((/* implicit */_Bool) var_1);
    var_18 = ((/* implicit */int) min((var_5), (((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) != (((/* implicit */int) max(((unsigned char)107), (((/* implicit */unsigned char) (signed char)-13)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) (signed char)13);
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_1]);
                }
                for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    arr_14 [i_3 + 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_7 [i_0] [8] [i_1] [i_1]))) <= (min((((/* implicit */int) (signed char)116)), (arr_7 [i_3 - 1] [i_0] [i_0] [i_0])))));
                    arr_15 [i_0] = ((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) ((short) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 + 1] [i_0])))))))));
                }
                arr_16 [i_0] = ((/* implicit */int) (unsigned char)0);
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((_Bool) ((((/* implicit */unsigned int) arr_9 [(unsigned short)14] [(unsigned short)14])) - (arr_12 [i_0] [i_0] [i_0] [(short)8])))), (((_Bool) (-(2971301401U)))))))));
                arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_1])));
                var_21 |= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (arr_2 [16]) : (arr_2 [(_Bool)1])))) ? (-446423092) : (var_1)))), (max((arr_4 [i_1] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [10ULL])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((((/* implicit */int) (unsigned char)93)) & (((/* implicit */int) (short)27873)))) : (((/* implicit */int) var_7))))), (var_0)));
}
