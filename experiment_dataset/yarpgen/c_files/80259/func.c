/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80259
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0 + 2]));
                arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_21 -= (unsigned short)52819;
            }
        } 
    } 
    var_22 ^= ((/* implicit */short) var_13);
    var_23 = ((/* implicit */unsigned char) min((max((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5184051125391439543ULL)) && (((/* implicit */_Bool) var_4))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)16048)))))));
}
