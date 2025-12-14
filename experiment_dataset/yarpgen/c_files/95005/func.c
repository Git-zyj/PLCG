/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95005
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7U))))) >= (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)7786)) : (arr_5 [i_0] [i_1] [i_0])))));
            var_20 *= ((/* implicit */_Bool) ((unsigned short) (-(arr_4 [i_1]))));
            var_21 = ((/* implicit */unsigned short) var_3);
            var_22 = ((/* implicit */_Bool) arr_4 [i_1]);
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967288U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)12909)) : (((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))) : (((2209741467U) / (2209741467U)))));
        }
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
            var_24 = ((/* implicit */unsigned short) (!(arr_8 [i_0] [i_2])));
            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(var_4)))), (((((arr_2 [i_0]) - (((/* implicit */unsigned long long int) 545706483U)))) + (((/* implicit */unsigned long long int) arr_7 [i_2]))))));
        }
        arr_10 [(unsigned char)6] [i_0] = ((/* implicit */int) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_3] [i_3])) << (((arr_11 [i_3]) - (9490802263055476843ULL)))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-19029)) : (((/* implicit */int) arr_8 [i_3] [i_3]))))));
    }
    var_27 = ((/* implicit */int) ((signed char) var_5));
}
