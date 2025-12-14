/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75154
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */signed char) var_1);
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_7 [i_0] [(unsigned char)4] [i_2] [(unsigned char)4]), (((/* implicit */unsigned short) (signed char)-1))))), (min((10292595854153240369ULL), (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */int) ((arr_6 [i_1 - 1] [i_1 + 1]) || (arr_6 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_0))));
}
