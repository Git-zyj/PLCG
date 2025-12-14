/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66544
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
    var_11 = ((/* implicit */short) var_6);
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) 3855881449U)))) != (((/* implicit */long long int) ((/* implicit */int) (short)-14996)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) (-(arr_0 [i_0])));
        var_14 = ((/* implicit */long long int) arr_2 [i_0] [i_0 + 1]);
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) 16273511057728988639ULL));
        arr_4 [(unsigned char)17] = ((/* implicit */short) arr_0 [i_0 - 1]);
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3855881449U)) | (7177215298497876352ULL)));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) & (6467610084820294919LL)))));
    }
    for (short i_2 = 3; i_2 < 13; i_2 += 4) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned int) min((arr_0 [i_2]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_2 - 3])), (arr_12 [i_2 + 3]))))));
        var_15 = ((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_2]);
    }
}
