/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86480
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(10162658856222084150ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [13ULL])))))))) ? (((((/* implicit */_Bool) var_2)) ? (10162658856222084150ULL) : (((/* implicit */unsigned long long int) 3287811065U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) ((unsigned char) -2147228897))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */int) ((unsigned char) 2147228916))), (var_6))), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (1023))), ((~(((/* implicit */int) arr_1 [i_1] [i_2]))))))));
                    arr_10 [i_0] [18ULL] [i_0] [i_2] = ((/* implicit */unsigned short) (~(min((((unsigned long long int) arr_8 [i_0])), (arr_3 [i_1 - 1] [i_1 - 1])))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) 2);
}
