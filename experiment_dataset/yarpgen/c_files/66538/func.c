/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66538
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) 12226218911069558152ULL);
                    arr_8 [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_5))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_1 [i_0 + 4]))));
                    var_15 = ((/* implicit */unsigned char) ((arr_6 [i_0 - 1] [i_0 - 1] [i_0]) >= (arr_6 [i_0 + 2] [i_0 + 4] [i_0])));
                }
                var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_6 [i_0 - 3] [i_0 - 4] [(short)0])))) ? (var_1) : (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_0 [(unsigned char)14]))))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (var_1)))) : (((/* implicit */int) (short)-2378))));
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3198))))));
    var_19 = ((/* implicit */int) var_0);
}
