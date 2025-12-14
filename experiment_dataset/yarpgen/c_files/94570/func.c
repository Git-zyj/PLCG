/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94570
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [(signed char)2] [i_1] [i_1] = ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) max((arr_0 [i_1 + 1]), (((/* implicit */short) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2] [i_2])) == (((/* implicit */int) (short)20548))));
                                arr_13 [i_0 - 1] [(signed char)8] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((arr_9 [16] [i_0 + 4] [i_0 + 2] [i_0 + 2] [i_0 + 3]) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                                arr_14 [i_2] [i_0] [i_3] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_7)));
                            }
                        } 
                    } 
                    arr_15 [i_2 - 2] [i_1] = ((/* implicit */short) arr_9 [i_0] [(signed char)6] [i_1 + 3] [18] [i_1]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((int) ((((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)48)), (398308042)))) : (min((var_3), (((/* implicit */unsigned long long int) var_10)))))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((var_5) >> (((/* implicit */int) (_Bool)1)))) : (var_9)));
}
