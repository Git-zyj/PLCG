/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65289
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) var_6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_11 &= ((/* implicit */unsigned short) arr_0 [i_0]);
            var_12 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-73)) ? (var_0) : (var_5))));
            arr_5 [i_0] = arr_3 [i_0] [11LL] [i_0];
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((long long int) 8099562731286739987LL)) & (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2])))))));
        arr_9 [i_2] = ((/* implicit */short) arr_3 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (var_7)));
        var_15 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3]))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16742)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_3] [i_3] [6LL]))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))));
    }
}
