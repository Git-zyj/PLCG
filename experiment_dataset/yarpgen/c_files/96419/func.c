/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96419
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
    var_13 = max((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1968806430U))), (((/* implicit */unsigned int) var_2)))), (((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) var_8)), (2326160886U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2326160853U)) && (((/* implicit */_Bool) var_3)))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 2326160891U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1968806410U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2326160886U))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_3)), (arr_5 [i_1] [i_1])))));
                arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) (short)-1)), ((-(var_3)))))), (max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 4])))));
                var_16 = (-(arr_5 [i_1] [i_1]));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (arr_4 [i_0 - 1] [i_1] [i_0 + 1])))) ? ((-(((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0] [i_1])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (1968806405U)));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-11))))), (var_9)));
    var_19 = ((/* implicit */unsigned long long int) 1968806397U);
}
