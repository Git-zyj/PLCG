/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66445
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
    var_17 = var_3;
    var_18 *= ((/* implicit */unsigned int) var_14);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~((((-(var_2))) / (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = (!(((/* implicit */_Bool) (unsigned short)25330)));
                    var_21 = ((/* implicit */unsigned char) arr_4 [i_0]);
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_22 = (+((+(((/* implicit */int) (unsigned char)15)))));
        var_23 = ((/* implicit */signed char) arr_8 [(_Bool)1]);
        var_24 = ((/* implicit */short) var_11);
    }
}
