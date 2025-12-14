/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82511
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34993))))) | (-78903025)));
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) ((((8649174250731450329LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43057))))) + (var_8)));
        var_15 = ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43050))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_16 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((long long int) var_13))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!((_Bool)1)))))) >= (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_18 = ((/* implicit */unsigned short) ((arr_1 [i_1 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(arr_9 [i_3 + 1] [i_3 + 1]))))));
                    var_20 = var_8;
                    arr_16 [i_4] [i_4] [i_2] = ((/* implicit */unsigned long long int) var_7);
                }
            } 
        } 
        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_2 - 1])) ? (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (3895066463664002786ULL)));
    }
    var_22 = ((/* implicit */int) var_2);
    var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((var_7) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) min(((+(((/* implicit */int) var_4)))), ((-(((/* implicit */int) var_4)))))))));
}
