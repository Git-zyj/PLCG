/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63220
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_10 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (arr_4 [i_0 + 2]) : (arr_4 [i_1])))) ? (((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_1])) : (((((/* implicit */_Bool) 4294967295U)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202)))))))) ? (arr_3 [i_0] [i_1]) : (min((arr_4 [i_0 - 3]), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_9)))))))));
                var_11 ^= ((/* implicit */unsigned int) var_8);
                var_12 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 131056U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])) : ((-(arr_4 [i_0])))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (!((_Bool)0)))), ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((~(((/* implicit */int) (unsigned char)5))))))));
            }
        } 
    } 
    var_13 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_1)))) ? (min((((/* implicit */unsigned int) var_9)), (var_0))) : (((/* implicit */unsigned int) (~(var_6)))))) >> (min((((var_7) - (var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))))));
}
