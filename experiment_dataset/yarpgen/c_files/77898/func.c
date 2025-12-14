/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77898
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
    var_13 = ((/* implicit */short) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [(unsigned char)13] [(unsigned char)13] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) > ((-(((/* implicit */int) arr_2 [i_0]))))));
        var_14 = -883760621;
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (+(max((((1611989527) & (-13))), (arr_1 [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)188))))) ? (-268435456) : (var_10)));
        var_17 ^= max((((/* implicit */unsigned long long int) 127)), (9121779102551599691ULL));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)64224)), (arr_1 [i_2])))) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (((((/* implicit */_Bool) 8956825513817043632ULL)) ? (var_3) : (((/* implicit */unsigned long long int) var_10))))))) ? (((((/* implicit */int) max((arr_7 [19ULL]), (var_2)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))))))) : (((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_2)) : (127))) | (max((((/* implicit */int) arr_10 [4])), (127))))));
        arr_12 [18U] [6] |= ((/* implicit */unsigned long long int) var_0);
    }
    var_18 = (((((~(var_11))) > (((/* implicit */int) (unsigned char)188)))) ? (((/* implicit */int) (unsigned short)64224)) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)224)))) : ((+(((/* implicit */int) var_5)))))));
}
