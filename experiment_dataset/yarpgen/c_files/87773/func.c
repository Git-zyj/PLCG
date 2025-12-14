/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87773
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 2]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)14708)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_14))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 3] [(_Bool)1] [i_0 + 4])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 6961531809464229789LL)), (18446744073709551615ULL))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned long long int) var_2);
        arr_11 [i_0] = ((/* implicit */long long int) var_0);
    }
    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [(short)15]))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 6961531809464229789LL))))))));
        arr_14 [(_Bool)1] = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned int) arr_0 [i_3] [i_3]))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_9)))) >= (((/* implicit */int) var_0)))))) <= (((unsigned int) 63ULL))));
}
