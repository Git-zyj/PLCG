/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71290
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                arr_6 [i_0] = ((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]);
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 6070018536939886192LL)) : (3974571580041984626ULL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 2] [i_1 + 1])) : (min((((/* implicit */unsigned long long int) var_9)), (arr_3 [i_0] [i_0] [i_1])))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1]))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) % (min((max((((/* implicit */long long int) arr_2 [i_0] [i_1 - 1])), (-9223372036854775807LL))), (((/* implicit */long long int) arr_2 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_4)))) ? (var_11) : (min((((/* implicit */long long int) var_9)), (var_6))))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-114), ((signed char)-106))))) : (4294967288U))) - (4294967175U)))));
    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42386)) ? (var_1) : (((/* implicit */unsigned long long int) var_5))))) ? (var_1) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_3))))))))));
    var_17 = ((/* implicit */unsigned short) var_4);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))));
}
