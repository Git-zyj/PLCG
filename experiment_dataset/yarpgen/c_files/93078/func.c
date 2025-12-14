/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93078
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
    var_14 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)128));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) arr_4 [16U]);
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_2 [(signed char)3] [(signed char)3]))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_17 &= ((/* implicit */signed char) (_Bool)1);
                    var_18 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (short)-18998)) - (((/* implicit */int) arr_10 [i_2] [i_2])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)-127)))))));
                }
            } 
        } 
    } 
}
