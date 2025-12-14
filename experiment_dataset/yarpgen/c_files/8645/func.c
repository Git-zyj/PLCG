/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8645
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) 2130706432U);
                var_12 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 2]))))));
                var_13 += ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)96)));
                                var_15 = ((/* implicit */unsigned int) arr_6 [(unsigned char)12] [i_3 + 2]);
                                var_16 = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
    var_18 |= ((signed char) max((((/* implicit */unsigned int) var_8)), (2164260864U)));
}
