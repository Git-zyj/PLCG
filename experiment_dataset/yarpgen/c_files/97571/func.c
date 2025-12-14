/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97571
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)92)) != (((/* implicit */int) (signed char)125))));
    var_14 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) -1130129923)), (var_0))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [14ULL])))))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) min((arr_2 [i_0] [i_0] [(short)8]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1365655265)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (max((((/* implicit */unsigned long long int) var_7)), ((+(var_6)))))));
            }
        } 
    } 
}
