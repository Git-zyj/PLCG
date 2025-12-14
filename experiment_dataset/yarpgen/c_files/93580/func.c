/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93580
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
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) var_7);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 8; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [(short)8] = ((/* implicit */long long int) var_6);
                                var_18 = ((/* implicit */long long int) arr_1 [i_3] [i_4]);
                                arr_16 [6] [5] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */short) 3241903338644738025LL);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) (+(min((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_0] [i_0] [i_1] [0ULL] [2ULL] [2ULL] [i_1])))))));
                arr_17 [5LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned char) var_17);
    var_21 |= ((/* implicit */unsigned short) var_11);
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */long long int) var_10))))))));
    var_23 = 141357029755124129ULL;
}
