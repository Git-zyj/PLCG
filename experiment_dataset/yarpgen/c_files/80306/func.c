/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80306
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
    var_20 = ((/* implicit */unsigned char) max(((unsigned short)60905), (((/* implicit */unsigned short) (signed char)65))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_0)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) ? (max((var_12), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_12))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (64)));
                        var_23 -= arr_8 [i_2];
                    }
                    arr_12 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) 2147483647);
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4180023595360092147LL)))) ? ((+(((/* implicit */int) arr_2 [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [6LL] [(unsigned short)11] [i_0 - 1])))))))) ? (((/* implicit */int) arr_8 [i_1])) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (43) : (-64)))));
                }
            } 
        } 
    } 
}
