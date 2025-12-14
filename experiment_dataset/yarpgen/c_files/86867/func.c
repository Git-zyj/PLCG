/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86867
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1675190069)) ? (1675190048) : (1675190069))), (arr_2 [i_0 + 1] [i_0 - 1])));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)65535)))))), ((+((+(var_8))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) (+(arr_1 [i_0 + 2])));
    }
    var_17 *= ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), (max((var_14), (((/* implicit */long long int) var_15))))));
}
