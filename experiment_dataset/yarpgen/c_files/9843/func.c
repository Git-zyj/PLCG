/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9843
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~(var_7))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_7))));
                arr_6 [i_0] [(signed char)8] [2U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(arr_2 [i_0] [i_1]))) >> (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 1323137350)) ? (((/* implicit */long long int) ((arr_3 [(signed char)16] [i_1 - 1] [i_1]) ^ (-1323137357)))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            {
                var_19 &= min(((+((-(arr_7 [i_3 - 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_4)))) : (-1323137363)))));
                arr_12 [i_3] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) arr_1 [(unsigned short)7])) ? (arr_2 [i_2] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))))))));
            }
        } 
    } 
}
