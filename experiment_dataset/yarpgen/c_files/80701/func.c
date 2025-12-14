/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80701
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
    var_19 = ((/* implicit */unsigned long long int) var_15);
    var_20 += ((/* implicit */unsigned short) var_17);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_21 += ((/* implicit */unsigned short) min((((((/* implicit */int) arr_1 [4])) >= (((/* implicit */int) arr_1 [(unsigned short)2])))), (arr_1 [(unsigned char)2])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        var_22 = ((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2])) ? (((((/* implicit */_Bool) var_11)) ? (-1LL) : (arr_0 [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)2162)))))))) + (23LL)))));
    }
}
