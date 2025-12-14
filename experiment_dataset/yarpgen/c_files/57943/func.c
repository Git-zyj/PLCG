/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57943
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) var_8);
        var_13 = ((/* implicit */unsigned char) max((36011204832919552LL), (((/* implicit */long long int) (short)-2189))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_4 [i_1])))));
        arr_5 [i_1] [i_1] |= ((/* implicit */int) min(((~(var_2))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) != (var_0))))));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (max((((/* implicit */long long int) (unsigned short)512)), (-36011204832919544LL)))));
        arr_9 [(short)16] = ((/* implicit */signed char) (~(36011204832919552LL)));
    }
    var_16 ^= ((/* implicit */long long int) var_5);
}
