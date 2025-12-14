/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73754
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
    var_20 &= ((/* implicit */unsigned short) var_18);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) 2467172526U)))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned long long int) 37327973)) : (arr_1 [i_0]))))))));
        arr_4 [18U] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) != (8627027197076812835ULL))), ((!(((/* implicit */_Bool) 37327973)))))))) & (-2515617730371241569LL)));
    }
}
