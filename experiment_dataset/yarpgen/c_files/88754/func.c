/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88754
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1 + 2]))) : (var_4)))), (var_5)));
                var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_1 + 4] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 3])))) : (max((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])), (-1825859214)))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min(((~((-2147483647 - 1)))), (((/* implicit */int) min((arr_3 [i_1 + 2]), (arr_3 [i_1 + 4])))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((min((0ULL), (var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95)))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (-(1768304704U)));
        var_18 = ((/* implicit */unsigned short) min((var_12), (arr_3 [i_2])));
    }
    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        var_19 = ((((((/* implicit */_Bool) -4168277970844500724LL)) ? (((/* implicit */int) (unsigned short)53333)) : (((/* implicit */int) (signed char)-92)))) | (((/* implicit */int) (unsigned short)57756)));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((int) max((((var_0) / (((/* implicit */int) arr_0 [i_3 + 2])))), (((/* implicit */int) arr_1 [i_3]))))))));
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) (signed char)92)) ? (18446744073709551615ULL) : (220187372796977431ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 - 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121))))) : (((/* implicit */int) arr_3 [23ULL]))));
        var_21 = ((/* implicit */short) min((((/* implicit */int) arr_10 [14U])), (var_0)));
    }
    for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 4) 
    {
        arr_16 [(unsigned char)5] = ((/* implicit */unsigned int) ((unsigned char) 7654280156277382113ULL));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_11 [i_4]))));
    }
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) var_11)), (max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) 245531562320005707LL)) ? (((/* implicit */int) var_12)) : (999200620)))))));
}
