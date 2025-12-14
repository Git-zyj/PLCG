/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76388
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
    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) / (((/* implicit */int) min((min((var_7), (((/* implicit */short) var_9)))), (min((var_8), (((/* implicit */short) var_6)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        var_12 = ((/* implicit */short) var_3);
        var_13 += max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_0)))) || (((/* implicit */_Bool) (~(var_0))))))), (max((var_4), (((/* implicit */unsigned long long int) var_9)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_10)))), (min((var_4), (((/* implicit */unsigned long long int) var_9)))))) * (((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */unsigned int) var_8)))), (var_0))))))));
            arr_7 [i_1] [14U] [i_0] = ((/* implicit */short) var_9);
            arr_8 [i_0 - 4] = var_3;
        }
    }
}
