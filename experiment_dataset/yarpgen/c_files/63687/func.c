/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63687
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
    var_12 = ((/* implicit */short) 2200836850U);
    var_13 = min((((/* implicit */unsigned long long int) (-(((1200472845) ^ (((/* implicit */int) var_0))))))), (((var_7) << (((15062486549453999411ULL) - (15062486549453999396ULL))))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17195))) : (var_3))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) <= (min((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) var_1)), (15062486549453999411ULL))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) arr_0 [i_1 - 2])))))) : (((unsigned long long int) 11410346349088901253ULL)))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2])) | (((/* implicit */int) arr_1 [i_0] [i_1 + 3])))))));
                arr_6 [i_0] [i_1] [i_1 - 1] = ((/* implicit */int) 11410346349088901255ULL);
                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1])))))), ((signed char)95)));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))) >> (((((int) var_2)) + (1258728049))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1 + 2] [i_1])))))));
            }
        } 
    } 
}
