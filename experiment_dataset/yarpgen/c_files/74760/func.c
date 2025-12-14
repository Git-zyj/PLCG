/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74760
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
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (unsigned char)111)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [(short)24] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : ((~(((/* implicit */int) arr_2 [i_1])))))) ^ (((int) arr_1 [i_0] [i_1]))));
                var_16 = ((((min((((/* implicit */int) arr_3 [i_0])), (65535))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48))))))) ? (min((((/* implicit */unsigned long long int) (-(1073217536)))), (((((/* implicit */_Bool) 14954428254854607098ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (8873631192776961444ULL))))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)24700))));
            }
        } 
    } 
}
