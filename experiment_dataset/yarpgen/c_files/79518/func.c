/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79518
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                var_12 += ((/* implicit */unsigned int) ((unsigned char) min((arr_4 [i_0 + 2] [5ULL] [i_0 - 1]), (((/* implicit */int) arr_1 [i_0 + 2] [4U])))));
                var_13 -= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) max(((unsigned short)15648), (((/* implicit */unsigned short) (signed char)79)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 24; i_3 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_6 [i_2 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) % ((~(((/* implicit */int) arr_8 [i_2 + 1]))))));
                arr_10 [i_3] = ((/* implicit */_Bool) (~(((arr_7 [i_2 - 1] [i_3]) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) max((arr_8 [i_3]), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_2] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_2])))))))))));
            }
        } 
    } 
    var_16 += ((/* implicit */signed char) ((unsigned short) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))), (((/* implicit */int) max((var_7), (var_0)))))));
}
