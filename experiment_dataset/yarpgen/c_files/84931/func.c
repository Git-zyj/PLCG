/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84931
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((((/* implicit */_Bool) (signed char)63)) ? (5237660004251418046ULL) : (5237660004251418046ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) var_12));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_17)))))));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) var_14));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) var_4))) && (((/* implicit */_Bool) arr_8 [i_2])))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4570)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)12241))))) && (((/* implicit */_Bool) ((short) var_10)))))));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_8 [i_2]))) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (938398063U));
        var_22 = ((/* implicit */short) arr_8 [i_2]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_3]));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) var_2);
    }
}
