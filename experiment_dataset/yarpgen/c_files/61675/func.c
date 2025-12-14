/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61675
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */int) (short)-1700)) <= (-1893648707)));
        var_16 = ((/* implicit */int) (_Bool)1);
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))))))) / (max((((/* implicit */unsigned long long int) -6499119786375104329LL)), (6589235412761565132ULL)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_15);
    }
    var_18 = min((-3167848115505286351LL), (((/* implicit */long long int) -1893648707)));
    var_19 = ((/* implicit */unsigned long long int) 1893648707);
    var_20 = ((/* implicit */int) var_4);
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)33)), ((unsigned short)45891)))) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)75))))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3869759093304456192ULL)) ? (1893648706) : (((/* implicit */int) (signed char)-82))))) >= (var_12))))));
}
