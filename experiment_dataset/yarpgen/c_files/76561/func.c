/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76561
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [(unsigned short)19] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_0 + 3]), (arr_2 [i_0 + 2])))) & (min((((((/* implicit */_Bool) (unsigned short)2072)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_12))))));
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) -6222558293656200016LL);
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_14 [i_0 + 3] [12U] [i_2] [(_Bool)1] = ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */long long int) ((1024169352U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77)))))) : (min((((/* implicit */long long int) arr_0 [i_2])), (var_10))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)31)), (min((1024169363U), (((/* implicit */unsigned int) var_0)))))))));
                        arr_15 [i_0] [i_0] [i_0] [(short)3] [(unsigned char)14] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [(unsigned char)14]))));
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_4))));
}
