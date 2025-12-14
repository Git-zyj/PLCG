/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58892
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
    var_14 = var_11;
    var_15 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_3)), (((var_2) & (var_5))))), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((min((arr_0 [i_0]), (arr_0 [i_0]))) != (((arr_0 [i_0]) << (((arr_0 [i_0]) - (2157816477U)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                    arr_9 [4] [i_1] [i_2] [(unsigned short)4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_7 [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_10))))))) || (((/* implicit */_Bool) var_1))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & ((~(2119965645)))));
        var_17 -= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((min((9223372036854775807LL), (((/* implicit */long long int) var_10)))) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))), (arr_1 [i_0])));
    }
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) var_4)))))))), (((var_5) << (((var_4) + (3929456044603152694LL)))))));
    var_19 = ((/* implicit */unsigned char) var_11);
}
