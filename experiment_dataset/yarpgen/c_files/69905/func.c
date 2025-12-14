/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69905
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 - 1]))) >= (((var_3) / (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)16745)))))))));
                var_20 ^= ((/* implicit */int) (short)-19102);
                var_21 = ((/* implicit */unsigned short) arr_4 [i_1 + 2]);
                arr_6 [i_0] [i_0] [(short)14] &= ((/* implicit */unsigned short) arr_4 [i_0]);
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_19)))))) - (61987)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned char) ((int) var_13));
        var_24 -= ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_0 [i_2] [14U])))))) & (var_2));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) | (var_2))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((var_2) / (arr_4 [(unsigned char)18])))));
    }
}
