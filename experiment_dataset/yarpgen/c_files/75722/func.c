/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75722
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))));
    var_21 *= ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned char)0] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_4 [(signed char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))) : (4113484173951329050ULL))) : (((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */int) arr_2 [(signed char)6])))))))) ? (((/* implicit */int) ((signed char) arr_6 [i_1] [i_0] [i_0]))) : (((/* implicit */int) var_14))));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_0] [(unsigned short)6])), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)21))) : (var_0)))))) ? (14599226131116210404ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((((/* implicit */_Bool) 14599226131116210400ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))))))) >= ((-(arr_1 [i_0] [i_0])))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((int) var_12));
}
