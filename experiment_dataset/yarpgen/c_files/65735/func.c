/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65735
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
    var_13 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) var_10)));
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-76))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_2))) : (((/* implicit */unsigned long long int) (+(633511083U)))))), (((/* implicit */unsigned long long int) (+(max((var_1), (((/* implicit */long long int) var_12)))))))));
    var_15 = ((/* implicit */unsigned char) ((int) (~((~(((/* implicit */int) (short)-1)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = (signed char)-79;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)78), ((signed char)78)))) && (((/* implicit */_Bool) 12693581461692871639ULL))));
    }
}
