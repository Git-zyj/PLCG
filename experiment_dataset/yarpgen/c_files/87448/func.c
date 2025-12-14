/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87448
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 += max((((/* implicit */unsigned int) min((((int) 150879378U)), (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (_Bool)1))))))), (4269239015U));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)238)))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */_Bool) 3179791761U)) || ((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_21 = ((/* implicit */int) (!((_Bool)1)));
    }
    var_22 = ((/* implicit */int) var_7);
}
