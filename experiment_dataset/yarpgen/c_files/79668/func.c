/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79668
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_15 += ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_16 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        }
        var_17 = ((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1]);
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -881146454)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0])))) ^ (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) -1189609022))));
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            var_21 |= ((/* implicit */long long int) (-(arr_4 [i_2] [i_2])));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((unsigned long long int) 0U))));
            var_23 = ((/* implicit */unsigned char) ((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_2]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_3 + 1])) * (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_3 + 4]))));
                    var_26 = ((/* implicit */unsigned long long int) arr_11 [i_2]);
                }
                var_27 = ((/* implicit */int) max((var_27), (-2147483647)));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_3))));
            }
        }
        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_29 = ((((/* implicit */_Bool) arr_16 [i_2])) ? (((arr_5 [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))));
            var_30 |= ((/* implicit */int) arr_8 [i_6]);
        }
    }
    var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -1516674770)) : (max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_9)), ((signed char)(-127 - 1))))), (var_7)))));
    var_32 *= ((/* implicit */_Bool) var_7);
}
