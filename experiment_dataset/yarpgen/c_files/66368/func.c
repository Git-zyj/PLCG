/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66368
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_17))))))), (var_18))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) (((!((_Bool)0))) ? (7230666716170224031LL) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8213))) : (var_18)))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */int) min((var_22), ((~(((((/* implicit */_Bool) arr_7 [i_0 - 1] [(signed char)4])) ? (((/* implicit */int) (unsigned short)57327)) : (((/* implicit */int) (signed char)9))))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_13))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    var_24 *= ((/* implicit */_Bool) (-(arr_7 [i_0 + 2] [(_Bool)1])));
                    var_25 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                    var_26 = ((/* implicit */signed char) (~(arr_6 [i_1] [i_3] [i_3 + 4] [i_3 + 2])));
                }
            }
        } 
    } 
}
