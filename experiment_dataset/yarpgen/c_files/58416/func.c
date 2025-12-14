/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58416
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
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) min((max((arr_4 [i_0 + 1]), (arr_4 [i_0 - 1]))), (min((arr_4 [i_0 + 1]), (arr_4 [i_0 + 2])))));
                arr_6 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)192)), (arr_2 [i_1] [i_1] [i_0])))) ? (((unsigned long long int) arr_0 [i_0] [i_1 + 1])) : (((/* implicit */unsigned long long int) max((arr_3 [3ULL] [i_0 - 1]), (arr_3 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (~(min((arr_3 [i_0] [i_0]), (((/* implicit */int) (unsigned char)63)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_9)), ((-(((var_1) >> (((var_4) - (9856461118161897127ULL)))))))));
    var_13 = ((/* implicit */unsigned short) min(((~(((((/* implicit */unsigned long long int) var_2)) + (var_7))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) var_8)) + (55)))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_9), (var_9)))), (((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
}
