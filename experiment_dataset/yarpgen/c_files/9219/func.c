/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9219
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
    var_16 = ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [(_Bool)1] [i_0] |= ((/* implicit */_Bool) var_9);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) ((var_11) << ((((((-(((/* implicit */int) (signed char)52)))) + (53))) - (1)))))) ? (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [(unsigned char)4])))))))));
        var_18 ^= ((/* implicit */unsigned long long int) (-(((long long int) max((arr_0 [12LL]), (((/* implicit */unsigned long long int) var_8)))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-52)), (arr_5 [i_1 - 1] [i_1 - 1]))))));
        var_20 = ((/* implicit */long long int) (~((~(4294967289U)))));
        arr_7 [(unsigned short)1] = ((/* implicit */_Bool) (~(((/* implicit */int) max(((signed char)118), ((signed char)-120))))));
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)40))) != (((((/* implicit */long long int) ((/* implicit */int) (signed char)109))) * (-1LL)))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_22 = ((/* implicit */signed char) var_4);
            var_23 = (+(max((12245881579061994323ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 - 1])))));
            arr_11 [i_1 - 1] [i_2] = ((/* implicit */_Bool) max(((+((((_Bool)1) ? (-8098990907482263713LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))))), (((/* implicit */long long int) (~((+(((/* implicit */int) arr_6 [i_2])))))))));
            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_9 [i_1 - 1])))));
            arr_12 [i_1] [(unsigned short)2] [(unsigned short)2] = ((((/* implicit */_Bool) ((short) var_4))) || (max((((_Bool) var_7)), ((_Bool)1))));
        }
        for (unsigned char i_3 = 1; i_3 < 7; i_3 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)109))))) - (((/* implicit */long long int) (-(((/* implicit */int) (signed char)2)))))));
            arr_16 [i_1] [i_3] = ((/* implicit */signed char) (+((-(((/* implicit */int) ((signed char) arr_6 [i_3 + 3])))))));
            arr_17 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [2LL] [i_1 - 1]))))) : (var_3)));
            arr_18 [i_1] [(short)6] [i_3] |= ((/* implicit */unsigned short) ((7803745221528394LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))));
            arr_19 [i_1] [(short)1] [(short)1] = ((/* implicit */signed char) max((max((((unsigned char) arr_13 [i_3] [i_3 + 2])), (((/* implicit */unsigned char) arr_13 [i_3 + 2] [i_1 - 1])))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_1])), (arr_8 [i_1]))))) <= (var_4))))));
        }
    }
}
