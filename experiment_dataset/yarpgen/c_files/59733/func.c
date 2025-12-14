/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59733
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
    var_20 = ((/* implicit */unsigned short) ((unsigned int) min((var_13), (18027882806943669967ULL))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) max((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 2]))), (((arr_2 [i_0 + 1]) | (arr_2 [i_0 - 1])))));
        var_22 = ((/* implicit */unsigned int) ((_Bool) ((int) arr_1 [i_0 - 2] [i_0 - 1])));
    }
    var_23 = ((/* implicit */int) min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) 2147483647)))))), (((long long int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopNest 3 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(min((((576460752303423487ULL) * (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((arr_7 [i_1 - 1] [i_1]), (((/* implicit */unsigned int) arr_11 [13] [i_2] [i_2] [i_2]))))))))))));
                    arr_12 [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_3]))) : (min(((-(18027882806943669967ULL))), (((/* implicit */unsigned long long int) (-(1U))))))));
                    var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((1U), (((/* implicit */unsigned int) min((32767), (((/* implicit */int) (signed char)(-127 - 1))))))))), (((var_16) - (((/* implicit */unsigned long long int) (+(arr_9 [i_1 - 1] [i_2] [i_3] [i_1]))))))));
                }
            } 
        } 
    } 
}
