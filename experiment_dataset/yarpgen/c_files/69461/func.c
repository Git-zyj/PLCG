/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69461
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [(signed char)8] [i_0])) && (((/* implicit */_Bool) arr_0 [(unsigned char)16] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [(_Bool)1] [(_Bool)1])))) : (((arr_2 [16U]) + (((/* implicit */unsigned long long int) var_1))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) var_6);
            var_16 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(var_9))))));
            var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_2] [(signed char)23])) : (((/* implicit */int) arr_4 [i_0] [i_2] [2ULL]))))) && ((!(((/* implicit */_Bool) 7279929558777289481LL))))));
            var_19 = ((arr_2 [i_0]) >= (arr_2 [i_0]));
        }
    }
    var_20 -= ((/* implicit */unsigned short) var_9);
}
