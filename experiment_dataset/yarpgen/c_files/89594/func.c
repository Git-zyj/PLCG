/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89594
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
    var_16 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(5174111149804198115LL))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_4))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_12 [i_2])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) : (arr_11 [i_1] [i_3 - 1] [i_1 + 4] [i_3])))) | (((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_3]) || (((/* implicit */_Bool) var_1)))))) | (((2766592189830360565LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))))))));
                    arr_14 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) min((((((/* implicit */_Bool) ((short) arr_4 [i_1 + 4]))) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_3 - 2] [i_3])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) & (10548765960322466126ULL))))), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_3 + 1]))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) -5174111149804198110LL)) ? (var_8) : (((/* implicit */long long int) ((unsigned int) arr_10 [i_1 + 4] [i_1 + 4]))))))));
    }
    var_19 -= (+(((/* implicit */int) var_6)));
}
