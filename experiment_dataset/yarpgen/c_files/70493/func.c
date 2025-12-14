/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70493
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)241))));
    var_14 = ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) (+(1668921815U)));
        arr_2 [i_0] = ((/* implicit */int) max((((((107616227U) <= (arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13932))) : (arr_0 [10U] [10U])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)224)))))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-8743)), (16585109553736100620ULL)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)31))))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (16389948348639428848ULL))))));
    }
}
