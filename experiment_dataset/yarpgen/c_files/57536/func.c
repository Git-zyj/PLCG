/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57536
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_19))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (arr_3 [4U] [8U]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (4194303) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned short)11180)) << (((arr_2 [i_0]) - (1387898957))))) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])))))));
                arr_7 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-15713))))), (((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)12] [(short)8]))) : (arr_5 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) var_3);
}
