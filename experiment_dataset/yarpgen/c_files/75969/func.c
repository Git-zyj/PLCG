/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75969
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0 - 3] [i_0] [i_1]), (arr_2 [i_0 - 3] [i_2] [i_0 - 3])))) ? (((/* implicit */int) (unsigned char)255)) : (min((((((/* implicit */_Bool) (short)-9202)) ? (((/* implicit */int) (short)-9206)) : (((/* implicit */int) (short)9203)))), (((((((/* implicit */int) (short)-9222)) + (2147483647))) << (((((/* implicit */int) arr_5 [i_0 + 2] [i_1] [i_2])) - (29873))))))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-9204)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (max((((/* implicit */unsigned long long int) 1177782754U)), (140737486258176ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 3] [i_1 - 1] [i_2])))))))) == (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [2U] [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_2] [i_1 - 2] [i_0]), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0])))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 4901877728363832866ULL)) && (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) (short)-9222)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)10471))))))) / ((-(max((((/* implicit */unsigned long long int) (short)-9202)), (var_11)))))));
}
