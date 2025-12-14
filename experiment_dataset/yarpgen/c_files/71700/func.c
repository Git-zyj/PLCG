/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71700
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((var_13) >> (((var_13) - (8974926949963410021ULL)))))))) ? (((((/* implicit */_Bool) (+(2069910016224348641ULL)))) ? (((/* implicit */unsigned long long int) -434553984)) : (3063958487580733889ULL))) : (min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)6658)) : (arr_6 [i_0] [i_1]))))))));
                arr_8 [11ULL] [(unsigned short)6] [i_1] = var_11;
                arr_9 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(var_7)))) ? (min((((/* implicit */unsigned long long int) arr_4 [1])), (16376834057485202971ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16376834057485202974ULL)) ? (453835789) : (((/* implicit */int) (unsigned short)44784))))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_14)))))));
            }
        } 
    } 
    var_18 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (var_8))))));
                var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((arr_4 [i_2 + 3]) - (var_11)))) - (var_9))) + (min((min((((/* implicit */unsigned long long int) var_14)), (var_15))), (((arr_3 [11] [(unsigned short)2] [i_3]) + (16376834057485202982ULL)))))));
            }
        } 
    } 
}
