/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67647
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
    var_17 = max((((/* implicit */long long int) (short)28248)), (-8623877061632958564LL));
    var_18 = ((/* implicit */long long int) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    var_19 -= var_16;
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-21891))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned int) var_10);
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (((((/* implicit */_Bool) var_16)) ? (13271820U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))), (max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (short)-25615)) ? (((/* implicit */long long int) 4281695476U)) : (var_11)))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) 8687145576866894572LL)) / (var_9)))))) ? (4779716935435890428LL) : (min((var_4), (((/* implicit */long long int) (+(var_15))))))));
        var_23 = ((/* implicit */long long int) var_8);
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (558316613787066299LL))) << (((var_2) - (5045571144935943748LL)))))) ? (((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) : (var_1)));
        var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_0)), (var_9))), (((/* implicit */unsigned long long int) (+(var_12))))))) ? (((/* implicit */unsigned long long int) min((3293249277944039140LL), (min((7410614835732898651LL), (var_2)))))) : ((-(var_9)))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) > (9223372036854775807LL)));
        arr_11 [(unsigned char)15] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) max((var_1), (var_8))))))) ? (((/* implicit */long long int) (~(4294967295U)))) : ((-(var_16)))));
        arr_12 [i_2] = var_3;
    }
}
