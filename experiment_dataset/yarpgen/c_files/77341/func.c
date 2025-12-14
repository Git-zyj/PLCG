/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77341
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
    var_11 = ((unsigned char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -816958846)) : (var_2))), (((/* implicit */long long int) var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) min((min((arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_8 [i_0] [i_1] [14LL])))))), (((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 816958845))))), (var_7)))))))));
                                arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_13 [i_4 + 1] [i_4] [i_4] [i_3] [(_Bool)0]))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_2 - 2]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_3);
}
