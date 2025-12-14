/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55263
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [3LL] = (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)41632)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 4] [i_0]))) : (1324481306U))))));
                    arr_11 [i_0 - 1] [i_1] [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-30637)) + (2147483647))) >> (((2970485989U) - (2970485968U)))))) & (((((/* implicit */_Bool) 1324481306U)) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 4])))));
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)-32429)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11285))) % (-4656815345389146156LL))))))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) min((arr_14 [i_4]), ((+(((((/* implicit */_Bool) -6810718419647920888LL)) ? (arr_18 [i_3] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) 4294967295U))));
                arr_20 [i_4] = (((+(((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)54250)) : (((/* implicit */int) var_1)))))) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_12 [i_3] [i_3]))))) && (((/* implicit */_Bool) var_2))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (((-(((/* implicit */int) ((_Bool) var_1))))) > (max((((/* implicit */int) var_5)), ((~(((/* implicit */int) var_0))))))));
}
