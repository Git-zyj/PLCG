/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69100
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 951324196U))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((1101504558U), (arr_3 [i_0])));
                    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)0))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) 3193462720U)));
        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (3544379392U) : (var_16)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) == (var_18)))) : (((/* implicit */int) var_5))));
        var_22 = ((/* implicit */unsigned int) (~(var_7)));
        arr_12 [i_3] &= ((/* implicit */signed char) ((((/* implicit */int) var_17)) / (((/* implicit */int) (short)32767))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-2375)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-2377)) : (((/* implicit */int) arr_15 [i_4] [i_4])))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3193462719U)) ? (3548842322U) : (4294967278U)));
        var_24 -= ((((/* implicit */_Bool) 1101504607U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))) : (arr_14 [i_4] [i_4]));
    }
}
