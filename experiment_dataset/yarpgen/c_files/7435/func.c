/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7435
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
    var_17 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (-359825972) : (arr_8 [i_0 - 1] [i_3])))) : (((((/* implicit */_Bool) (unsigned char)73)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 359825958))))));
                        var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 - 1])) ? (arr_1 [i_2 - 3] [i_2 + 1]) : (arr_4 [i_2 - 2] [i_1] [i_2 - 1])))), (var_12)));
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])))));
        var_21 ^= ((/* implicit */_Bool) (~((+(arr_7 [i_0 - 2] [i_0 - 1] [i_0] [i_0 + 1])))));
    }
}
