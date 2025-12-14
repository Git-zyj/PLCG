/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87655
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))));
        var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)45)) < (((/* implicit */int) (signed char)32)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_5 [3LL] [i_1] = ((/* implicit */long long int) ((((unsigned int) ((1314190818327647476LL) * (((/* implicit */long long int) ((/* implicit */int) var_8)))))) << (((/* implicit */int) ((((/* implicit */long long int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) <= (var_6))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)86);
        arr_7 [i_1] = min((min((((/* implicit */unsigned char) arr_2 [i_1])), (arr_4 [i_1]))), (((/* implicit */unsigned char) arr_2 [i_1])));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
    {
        var_12 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
        arr_12 [(_Bool)1] = ((/* implicit */int) ((unsigned char) arr_10 [i_2] [8ULL]));
    }
    for (long long int i_3 = 3; i_3 < 7; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_3 [i_3] [i_3 - 2]))))));
        var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)169)))))));
        arr_17 [i_3] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_4 [i_3 + 3]))))));
        var_14 = ((/* implicit */unsigned short) max((max((arr_15 [i_3 - 3]), (arr_15 [i_3 + 1]))), (min((arr_15 [i_3 - 2]), (((/* implicit */unsigned long long int) (unsigned short)9834))))));
    }
    var_15 = ((/* implicit */long long int) var_7);
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
}
