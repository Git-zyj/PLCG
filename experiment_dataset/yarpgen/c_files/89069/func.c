/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89069
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
    var_19 ^= ((/* implicit */long long int) var_18);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), ((-(((long long int) var_18))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))), (((arr_1 [4LL]) >= (arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) min((3347201324U), (arr_1 [i_1])))) ? (-4579162223128829590LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967295U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) >= (140736414613504LL))))))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3347201325U)) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) -140736414613504LL)))) ? (min((((/* implicit */unsigned int) arr_0 [i_1])), (arr_1 [i_1]))) : (arr_6 [i_1])))));
    }
}
