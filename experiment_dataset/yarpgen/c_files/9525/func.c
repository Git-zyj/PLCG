/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9525
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_1)) + (94))))))))), (min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 6091632225041667252LL)) || (((/* implicit */_Bool) 2305843008945258496LL))))), (min((((/* implicit */unsigned char) var_0)), (var_3)))))));
    var_11 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_1 [3] [3]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (arr_3 [i_1] [i_0])))))));
            var_12 = ((/* implicit */long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) ((min((var_0), (var_8))) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])))))));
        }
        arr_6 [i_0] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (min((15092775830262590916ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (arr_2 [i_0] [i_0]))) / (((/* implicit */unsigned long long int) max(((-(var_9))), ((+(((/* implicit */int) var_1)))))))))));
        arr_7 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_2 [i_0] [i_0]))))));
    }
}
