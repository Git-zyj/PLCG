/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56174
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [19U])));
                var_18 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((10154793573942090269ULL) != (((/* implicit */unsigned long long int) arr_2 [i_0])))))) - (((((/* implicit */_Bool) 4294967295U)) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_3))))));
    var_20 *= var_9;
    /* LoopNest 3 */
    for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_21 -= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2406241569376519512ULL))))), ((-(1U))));
                    arr_12 [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_2 - 2]);
                    arr_13 [i_2] [12U] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_2 + 1]), (((/* implicit */unsigned long long int) arr_5 [i_2 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4]))) : (max((arr_10 [i_2 - 2] [i_4] [i_4]), (arr_10 [i_3] [i_3] [i_2 - 1])))));
                    var_22 = ((/* implicit */unsigned long long int) var_13);
                }
            } 
        } 
    } 
}
