/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7753
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
    var_17 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_6))) > ((+(0)))))), (((((/* implicit */_Bool) ((unsigned short) arr_4 [10ULL] [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) : (max((arr_7 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)10] [i_1]))))))));
                var_18 = (((+(((/* implicit */int) arr_2 [i_1])))) - (((((/* implicit */int) arr_2 [16LL])) >> (((((/* implicit */int) (unsigned char)172)) - (151))))));
                var_19 = ((/* implicit */unsigned short) 288065491197950979ULL);
            }
        } 
    } 
}
