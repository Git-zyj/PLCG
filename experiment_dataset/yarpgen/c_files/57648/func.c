/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57648
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1596038187)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) ((((int) arr_0 [(unsigned short)0])) * (((317333707) / (2147483647)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0 + 3])) * (((/* implicit */int) arr_0 [i_0 + 2]))))) : (((min((((/* implicit */unsigned long long int) 1484507877)), (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_2 + 2]))))))));
                    var_13 = 723466022;
                    arr_10 [i_0] [8] [i_1] &= ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))) : (arr_8 [i_2] [i_2 + 3] [i_2 - 2])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_9);
    var_15 -= ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))));
    var_16 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (-252394893)))))) ? (max((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) min((var_7), (-723466022)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) var_0))))) ? (252394876) : (var_8)))));
}
