/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71041
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (max((var_7), (((/* implicit */unsigned int) var_8))))));
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) var_10));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */unsigned int) arr_5 [(unsigned short)15] [i_1] [i_0]);
                arr_6 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)53045)) & (((/* implicit */int) arr_0 [i_1 + 1] [i_0]))))), (min((arr_1 [(unsigned char)1]), (((/* implicit */unsigned int) (unsigned short)3)))))), (((/* implicit */unsigned int) ((int) 144115188075855871ULL)))));
            }
        } 
    } 
}
