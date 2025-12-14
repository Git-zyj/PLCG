/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71841
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_10 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) && (((/* implicit */_Bool) ((((arr_3 [i_0] [i_0] [0LL]) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1] [(_Bool)1]), ((_Bool)1)))) : (((((/* implicit */int) arr_4 [(short)14] [i_1] [(short)14])) % (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)10])))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) min((min((((/* implicit */short) arr_3 [i_1 + 2] [i_1 + 2] [i_0])), (arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 1]))), (((/* implicit */short) arr_5 [i_1] [i_1 + 3] [i_0]))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) (!((_Bool)1)));
                                arr_17 [i_1 - 3] [i_2 - 2] [i_4] |= ((/* implicit */unsigned short) (-((-((~(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1 - 3] [i_1 - 1] [i_1] [3LL] [i_1 - 3])) + (((((/* implicit */int) arr_16 [i_0] [i_1] [i_1 + 1])) / (((/* implicit */int) arr_16 [i_0] [(_Bool)1] [i_1 - 2]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_1);
    var_14 |= ((/* implicit */short) var_4);
}
