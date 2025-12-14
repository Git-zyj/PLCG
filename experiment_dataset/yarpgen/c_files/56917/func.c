/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56917
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
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_13 ^= ((/* implicit */_Bool) (unsigned char)171);
            arr_5 [(short)8] [9] = ((/* implicit */signed char) arr_2 [i_0 - 4]);
            var_14 &= ((/* implicit */_Bool) max(((short)0), ((short)-1)));
            var_15 ^= ((/* implicit */unsigned char) arr_4 [i_0 - 4]);
        }
        arr_6 [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_4 [i_0 + 1])), (var_3))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) > (((/* implicit */int) var_6))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)217))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : ((+(-1771279922162675020LL)))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 4) 
    {
        arr_13 [i_3] [i_3 - 2] |= ((/* implicit */unsigned long long int) ((_Bool) max((arr_2 [i_3 + 2]), (arr_2 [i_3 + 1]))));
        var_18 *= ((/* implicit */long long int) ((arr_10 [i_3 + 1]) <= ((+(var_11)))));
    }
    var_19 = ((/* implicit */unsigned char) var_6);
}
