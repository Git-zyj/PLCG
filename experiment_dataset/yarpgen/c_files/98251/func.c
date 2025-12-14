/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98251
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
    var_17 = var_6;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0]));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_11))))))) <= (min(((+(18159199581867939519ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
        var_20 = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (833496680)))))) * (max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_21 = ((/* implicit */long long int) ((min((833496680), (833496680))) & (((/* implicit */int) (signed char)95))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((unsigned int) max(((-(((/* implicit */int) (signed char)-13)))), (((((/* implicit */int) var_11)) | (((/* implicit */int) var_15)))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (+(((var_1) | (((/* implicit */unsigned int) max((833496686), (((/* implicit */int) var_9)))))))));
    }
}
