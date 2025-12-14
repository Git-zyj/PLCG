/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84626
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
    var_20 = ((/* implicit */int) var_6);
    var_21 = ((/* implicit */unsigned char) (short)1446);
    var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) var_17)) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                    var_23 = ((/* implicit */short) var_18);
                    arr_11 [i_0] [i_1] [2ULL] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 67108863))));
                }
            } 
        } 
        var_24 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))));
    }
}
