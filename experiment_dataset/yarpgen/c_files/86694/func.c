/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86694
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (+(((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0 + 1] [(signed char)10] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [(unsigned char)12] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 - 1] [6] [i_0 + 1])))))))));
                var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_0 [i_0 + 3]))) % (((arr_0 [i_0 - 1]) + (arr_0 [i_0 + 3])))));
                arr_5 [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (short)-2334)), (1ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-64)), (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) : (789446239U))))))));
                var_13 = ((/* implicit */signed char) max((((arr_3 [i_0] [i_0]) * (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))))));
            }
        } 
    } 
    var_14 |= ((/* implicit */long long int) ((var_1) ? (var_0) : ((~((+(((/* implicit */int) var_6))))))));
    var_15 = ((/* implicit */signed char) var_0);
}
