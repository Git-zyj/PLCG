/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8515
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
    var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))), (((((/* implicit */int) (_Bool)1)) >> (((((18446744073709551601ULL) ^ (((/* implicit */unsigned long long int) 2376330601U)))) - (18446744071333221006ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) var_12)) ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */signed char) var_4)))))))), (((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_2 - 1])) : (arr_11 [i_2 + 2] [i_2 - 1] [i_2 + 3])))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-80)) + (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((unsigned long long int) (~((~(arr_8 [i_2] [i_1 + 1] [i_1] [i_1 - 1] [i_0] [i_0]))))));
                    var_18 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2])) ? (1918636711U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                }
            } 
        } 
    } 
}
