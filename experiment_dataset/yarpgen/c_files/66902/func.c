/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66902
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((unsigned int) (-((+(((/* implicit */int) var_10))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -536609079)) ? (((((/* implicit */int) arr_1 [i_0] [i_1])) + (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_1] [i_0])))), (((/* implicit */int) arr_5 [i_0]))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [2U]))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(var_7)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */int) ((unsigned char) ((int) ((int) (unsigned short)32480))));
                var_14 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
}
