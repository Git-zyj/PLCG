/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86544
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
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47871))) : (var_11))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min((var_13), (-1263270741)));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)17664))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17664)) && (((/* implicit */_Bool) 7239547208850928752ULL)))))));
                arr_6 [i_0] [(short)17] = ((/* implicit */int) ((long long int) arr_1 [i_0] [i_0]));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)2411)), (((((/* implicit */_Bool) (unsigned short)8454)) ? (var_1) : (((/* implicit */int) (unsigned short)59168))))))) ? (((/* implicit */int) (unsigned short)17664)) : (((((/* implicit */_Bool) (signed char)64)) ? (min((((/* implicit */int) (unsigned short)13935)), (-1705175882))) : (((/* implicit */int) var_10))))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((min((((/* implicit */int) min(((unsigned short)58593), ((unsigned short)20461)))), (((((/* implicit */int) var_0)) + (((/* implicit */int) var_2)))))), (((/* implicit */int) var_0)))))));
}
