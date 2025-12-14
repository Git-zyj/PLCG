/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76661
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((max((max((((/* implicit */long long int) arr_0 [i_0] [i_0 - 2])), (arr_3 [i_0 - 1]))), (((/* implicit */long long int) min((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0] [i_0])))))), (((/* implicit */long long int) max(((_Bool)1), ((_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((((long long int) min((4396073614418005416LL), (((/* implicit */long long int) (unsigned char)224))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 1])))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) (unsigned char)224)), (arr_3 [i_0])))))) ? (max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))) : (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1]), (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 + 1])))))));
        var_14 = min((min((((/* implicit */unsigned long long int) arr_0 [i_0] [(short)10])), (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned char)224), (((/* implicit */unsigned char) (_Bool)1)))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */signed char) min((min((((/* implicit */long long int) (unsigned char)50)), (5556039057213516769LL))), (((/* implicit */long long int) min((arr_7 [i_1 - 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 + 1]))))));
        arr_11 [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 - 1]);
        var_16 = ((/* implicit */_Bool) (~(arr_7 [i_2 + 1] [i_2])));
    }
    var_17 = var_9;
}
