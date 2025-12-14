/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68145
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
    var_18 &= (+(((/* implicit */int) ((_Bool) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max(((!(arr_0 [i_1 - 2] [i_1 - 1]))), (max((arr_0 [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 - 2] [i_1 - 1]))))))));
                var_20 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 - 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
                    var_21 = ((/* implicit */long long int) max((((arr_5 [i_1 - 1] [i_1] [i_2]) - (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2] [i_2] [i_2]))) ? (-7738519729515822108LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))))));
                }
                var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (((_Bool)1) ? (17397688705089288752ULL) : (1049055368620262864ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 + 1])))));
            }
        } 
    } 
}
