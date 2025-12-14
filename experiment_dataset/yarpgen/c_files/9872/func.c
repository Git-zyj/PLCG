/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9872
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
    var_11 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */long long int) var_5))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 -= ((/* implicit */long long int) max((arr_6 [i_1 - 1] [i_1 + 3] [i_2]), (arr_6 [i_0 - 1] [i_1 + 3] [i_0 - 1])));
                    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)190)));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned short) arr_5 [2U] [2U]);
        var_17 = ((/* implicit */signed char) arr_6 [i_3 - 1] [i_3] [i_3]);
        var_18 = arr_0 [8ULL] [i_3 + 1];
    }
    for (long long int i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((arr_0 [2] [2]), (arr_0 [0LL] [0LL])))), (min((arr_3 [0U]), (((/* implicit */long long int) arr_5 [4ULL] [i_4 + 1]))))));
        var_20 = ((/* implicit */_Bool) min((max((arr_12 [i_4 - 1]), (arr_12 [i_4 - 1]))), (arr_12 [i_4 - 1])));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_18 [i_5] = arr_16 [i_5] [i_5];
        var_21 = ((/* implicit */long long int) max((((/* implicit */int) arr_14 [i_5])), (arr_17 [i_5])));
    }
    var_22 = ((/* implicit */unsigned long long int) var_1);
}
