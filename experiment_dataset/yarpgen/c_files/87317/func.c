/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87317
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
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) > ((+(((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (short)24464)))))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_2 [i_0] [i_0] [i_0]))) * (max((var_3), (((/* implicit */unsigned long long int) (short)9347))))));
                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)123)) ? (max((((/* implicit */unsigned long long int) min(((short)24464), (arr_3 [i_0] [i_0])))), ((+(arr_0 [i_1]))))) : (((((((/* implicit */_Bool) 3445138646912147948LL)) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_0 [i_0]))) / (((/* implicit */unsigned long long int) var_12))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (short)24451))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned char) (unsigned char)197)))));
}
