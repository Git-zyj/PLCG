/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91855
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
    var_18 = ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_2 [i_0] [i_0]))))), (min((((/* implicit */unsigned char) var_12)), ((unsigned char)7)))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) (unsigned char)21))))) ? (((long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */long long int) ((int) (+(((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((var_1) - (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))));
}
