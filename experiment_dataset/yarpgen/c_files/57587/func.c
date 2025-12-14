/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57587
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
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (arr_3 [(signed char)22] [(signed char)22])));
                arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                arr_5 [i_1] [i_0 + 2] [19U] = ((/* implicit */signed char) var_11);
            }
        } 
    } 
    var_21 = var_10;
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
        var_22 += ((/* implicit */signed char) arr_6 [i_2] [i_2 + 1]);
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */long long int) 1761945953)) > ((((!(((/* implicit */_Bool) arr_2 [i_2 - 2] [i_2 - 2])))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1])))))));
        arr_10 [i_2] [7LL] = ((/* implicit */unsigned char) arr_7 [i_2]);
    }
    var_24 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((1761945950) & (((/* implicit */int) (unsigned short)7337))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (max((var_14), (((/* implicit */unsigned int) var_17)))))), (((/* implicit */unsigned int) ((unsigned char) var_11)))));
}
