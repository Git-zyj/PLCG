/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84067
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
    var_17 = ((/* implicit */_Bool) (signed char)-126);
    var_18 -= ((unsigned char) (unsigned short)65535);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) max((arr_2 [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_1] [i_2]) ? (var_15) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)63)))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    var_21 ^= ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 + 2]));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((~(((/* implicit */int) (signed char)111)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)7927))) != (549751619584LL)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] |= ((/* implicit */_Bool) arr_7 [i_1] [i_3]);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (13054928990725436772ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16)))))) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                    }
                }
            } 
        } 
    } 
}
