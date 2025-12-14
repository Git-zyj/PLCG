/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7038
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
    var_14 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) var_12)))))))));
    var_15 |= ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */unsigned int) ((short) (signed char)81));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 = (signed char)-73;
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)46), (((/* implicit */unsigned char) var_2))))) - (((/* implicit */int) var_1))))) ? (arr_7 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
                                var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-73))))), ((signed char)-73)))) % (((/* implicit */int) ((short) arr_11 [i_3] [i_1] [i_1] [13LL] [i_3 + 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (signed char)-42);
}
