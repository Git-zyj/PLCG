/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86065
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
    var_13 = ((unsigned short) var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_1 + 1] [i_1] = ((/* implicit */long long int) var_4);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)8331)))), (33724877)));
                                arr_16 [(signed char)6] [i_4] &= ((/* implicit */signed char) max((((/* implicit */long long int) arr_2 [(unsigned short)5] [i_1])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (max((((/* implicit */long long int) (unsigned short)43528)), (var_10))) : (((((/* implicit */_Bool) (unsigned short)9069)) ? (-2406471664276035468LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9069)))))))));
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_2 - 1] [i_1] [i_1] [i_1]), (var_11)))) ? (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_12)))))) : (((long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2])))))));
                }
            } 
        } 
    } 
    var_15 = var_9;
    var_16 = ((/* implicit */int) max(((unsigned short)56495), ((unsigned short)65535)));
}
