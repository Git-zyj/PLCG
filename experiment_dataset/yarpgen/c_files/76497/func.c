/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76497
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */int) ((arr_5 [i_0]) || (arr_5 [i_0])))), (((arr_5 [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0])) - ((+(((/* implicit */int) (_Bool)1))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_1] [3] [(unsigned short)5])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) ((((arr_2 [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) max((arr_2 [i_0] [i_0] [(_Bool)1]), (arr_2 [i_0] [i_0] [i_0]))))));
        arr_15 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)1)))))));
    }
    var_22 -= ((/* implicit */unsigned short) var_9);
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((7154934467905395170ULL), (var_10))))));
    var_24 = ((/* implicit */unsigned long long int) var_0);
}
