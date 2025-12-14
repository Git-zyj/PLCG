/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65211
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
    var_14 += ((/* implicit */short) ((long long int) var_13));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0]))))) << ((+(((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned short)8] [i_0])) >= (((/* implicit */int) arr_2 [i_0])))))))));
        var_16 += ((/* implicit */signed char) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((_Bool) arr_5 [i_1 + 1] [16ULL])) ? (((/* implicit */int) (short)7525)) : ((~(((/* implicit */int) var_13)))))))));
        var_19 = ((/* implicit */unsigned int) arr_4 [i_1 + 3]);
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) arr_8 [i_1 - 2]);
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_5 [i_1 - 1] [i_2 - 1])))))));
                }
            } 
        } 
    }
    for (short i_4 = 2; i_4 < 14; i_4 += 2) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_4] [i_4 + 1] [7U] [i_4 - 1])), (var_7)))) || (((/* implicit */_Bool) ((short) arr_10 [i_4] [i_4 - 2] [i_4] [i_4 + 2])))));
        var_23 = ((/* implicit */short) (-(((/* implicit */int) (short)14635))));
    }
    var_24 = ((/* implicit */short) var_9);
}
