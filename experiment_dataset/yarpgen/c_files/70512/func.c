/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70512
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
    var_20 += ((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) var_2)))) : (((/* implicit */int) (((-2147483647 - 1)) > (((/* implicit */int) (short)-6954))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_14))))), (max((arr_2 [i_0]), (67108860ULL))))) << ((((+(var_10))) - (8315145382648806890ULL))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_5)) + (((/* implicit */int) var_8))))))) ? ((((((+(((/* implicit */int) var_19)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_14)))) - (50))))) : (((((/* implicit */int) (short)14774)) - (((/* implicit */int) var_2))))));
                arr_7 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_5 [i_1] [i_0])), ((unsigned char)232))))));
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_13)))));
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) (short)-22519)) ? (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((((/* implicit */int) var_19)) + (2147483647))) << (((((/* implicit */int) (unsigned char)240)) - (240))))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_16)));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) * (((/* implicit */int) var_11)))) ^ (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_5)), (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned int) var_2)), (3716398276U))))))))));
}
