/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61711
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
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_14)))) ? (((/* implicit */int) (unsigned short)56660)) : (((((/* implicit */int) var_15)) / (((/* implicit */int) (unsigned short)49606))))))), (max((((((/* implicit */_Bool) 4294967282U)) ? (4115291696U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))))), (((/* implicit */unsigned int) var_7))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-56))));
                var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)36269)) ? (((/* implicit */int) (unsigned short)12119)) : (((/* implicit */int) (short)-22116)))), (((/* implicit */int) (signed char)-15))));
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1])) & (((((/* implicit */int) (signed char)48)) >> (((arr_1 [i_0]) - (557893109U)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65519))))))) : (((min((arr_1 [i_1]), (((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_1 - 2])))) << (((/* implicit */int) arr_2 [i_1] [i_1 - 2])))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_6);
}
