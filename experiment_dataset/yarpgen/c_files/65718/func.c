/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65718
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [1] [1]))))) > (((((/* implicit */_Bool) (unsigned char)115)) ? (2028104819592027076LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_2 [i_0] [9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3])))));
            arr_7 [i_0] [5LL] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)255)))));
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((unsigned short) (-(((/* implicit */int) arr_1 [i_0] [i_2])))))));
            arr_11 [i_0] = ((/* implicit */short) arr_10 [i_2]);
        }
    }
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))))));
}
