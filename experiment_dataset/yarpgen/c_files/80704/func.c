/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80704
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
    var_17 = ((/* implicit */long long int) (unsigned char)1);
    var_18 |= ((/* implicit */signed char) ((unsigned int) -1259698743));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 4286662812436895394LL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_20 += ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [(signed char)1] [i_1] [(signed char)1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0 + 2]))));
            var_21 = ((/* implicit */signed char) (_Bool)1);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
            var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2]))) : (arr_3 [i_1] [i_0])));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) arr_7 [i_2]);
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 1259698718)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7740)) ? (((/* implicit */long long int) -1987154419)) : (6924025284701293530LL)))) : ((((_Bool)1) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        }
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) 7422829232962316102LL)))))));
    }
}
