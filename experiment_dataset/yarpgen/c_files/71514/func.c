/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71514
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) + (min((((/* implicit */unsigned long long int) 883405821U)), (var_7)))));
        var_17 = ((/* implicit */unsigned char) ((max((-2534552252510206606LL), (((/* implicit */long long int) var_13)))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)92))))))));
        arr_2 [i_0] |= ((/* implicit */long long int) max((max((1032497052593930355ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_3))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) var_4);
            var_18 = ((/* implicit */short) (-(var_6)));
            arr_6 [i_0] = ((/* implicit */long long int) var_8);
        }
    }
    var_19 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_15)), (max((((/* implicit */unsigned int) var_0)), (var_6)))));
}
