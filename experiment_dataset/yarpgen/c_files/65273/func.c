/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65273
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
    var_16 -= ((/* implicit */long long int) ((((/* implicit */int) var_6)) * (var_3)));
    var_17 = ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */int) (short)19965)), (((((/* implicit */int) (unsigned char)191)) * (((/* implicit */int) (unsigned char)191)))))) : (((((/* implicit */int) min((((/* implicit */short) var_4)), (var_11)))) | (((/* implicit */int) min(((short)252), ((short)13872)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned char) ((16ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93)))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32767)), (5524214621994327840ULL)))) || (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))), (((var_6) || (((/* implicit */_Bool) var_15))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        arr_7 [(unsigned char)1] = ((/* implicit */long long int) var_10);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_3 [i_1 - 1] [(signed char)4])) << (((arr_4 [i_1 - 2]) - (18217122716455896263ULL))))), (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 1]))))) ? (min((min((18446744073709551591ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764)))));
        var_22 -= min((min((((/* implicit */long long int) ((((/* implicit */_Bool) 1099511627775LL)) ? (((/* implicit */int) (unsigned short)32512)) : (((/* implicit */int) var_9))))), (((long long int) -443044275080468045LL)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)131)))) != (((/* implicit */int) ((signed char) (short)32767)))))));
        arr_8 [(short)0] = ((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1])) : (((/* implicit */int) var_13)))));
    }
    var_23 &= ((/* implicit */short) (unsigned short)12911);
}
