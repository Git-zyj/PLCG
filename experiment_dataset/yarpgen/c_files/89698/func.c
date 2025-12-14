/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89698
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
    var_18 = ((/* implicit */int) (((~((~(((/* implicit */int) (unsigned char)89)))))) == (((int) ((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    var_19 = ((/* implicit */short) var_16);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))), (max((((/* implicit */unsigned int) (unsigned short)42415)), (var_10)))));
                var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_14)))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) (unsigned short)42428)) ? (236718560) : (((/* implicit */int) (_Bool)1)));
}
