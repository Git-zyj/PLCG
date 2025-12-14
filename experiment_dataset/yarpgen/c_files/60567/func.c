/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60567
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_8)) : ((-(626764007U)))));
    var_20 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [1U] = arr_0 [i_0] [i_0];
        var_21 = (-(min((2755305313U), (3983385934U))));
        var_22 ^= ((((/* implicit */_Bool) 2755305313U)) ? (1863011085) : (((/* implicit */int) (signed char)68)));
        var_23 &= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
        {
            var_24 = ((1863011085) - (((/* implicit */int) (unsigned char)167)));
            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) min((1863011056), (((/* implicit */int) (unsigned char)119))))), (((1539661983U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)2831)))))))) <= (((((/* implicit */_Bool) 1539661983U)) ? ((-(-6983736660055349682LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166)))))));
            var_26 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1]))))));
        }
        for (int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            arr_9 [i_1] [1U] = ((/* implicit */unsigned int) arr_5 [i_3 - 1] [i_3 - 1]);
            var_27 = ((/* implicit */unsigned short) var_0);
        }
        var_28 = min((arr_7 [3ULL]), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) % (3032956681U)))) ? (((((/* implicit */_Bool) 5888910241303010446ULL)) ? (-1863011086) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_3 [i_1])))));
    }
}
