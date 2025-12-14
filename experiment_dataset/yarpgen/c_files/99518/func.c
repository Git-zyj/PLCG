/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99518
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)107))) : (-4393821257941121774LL)))));
        var_19 = ((/* implicit */int) ((long long int) ((unsigned short) (signed char)100)));
        arr_4 [i_0] &= ((((var_4) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0])) + (101))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((arr_6 [i_1 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53059))))))));
            var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53059)) << (((((/* implicit */int) (unsigned short)53043)) - (53037))))))));
        }
        var_22 = ((/* implicit */signed char) max((var_22), (((signed char) var_0))));
    }
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (unsigned short)53073))));
    var_24 = ((/* implicit */int) ((((/* implicit */long long int) var_0)) + (((((/* implicit */long long int) ((((/* implicit */int) (signed char)72)) & (var_13)))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53059))) : (var_5)))))));
}
