/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86924
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
    var_20 = ((/* implicit */unsigned char) 2729714332U);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [(unsigned char)6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)124), ((unsigned char)103))))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) ((unsigned short) 1165265225U)))))));
                var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_0 [i_0]))))) + (((/* implicit */int) arr_1 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_16))))) : ((~(((/* implicit */int) arr_5 [i_2] [i_2] [i_2])))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))));
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((var_11), (((unsigned char) (unsigned char)226))))), (((((/* implicit */_Bool) var_4)) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_11))))))))))));
    var_24 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (2776164429U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (var_8))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-26366)))) : ((-(((/* implicit */int) (unsigned char)123)))))))));
}
