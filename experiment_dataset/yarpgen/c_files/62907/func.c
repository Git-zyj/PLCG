/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62907
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
    var_19 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) 3624524465U);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_17))));
                            arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((unsigned int) (~(max((var_5), (((/* implicit */unsigned int) var_8)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_21 = ((/* implicit */short) (~(((/* implicit */int) ((arr_3 [i_0] [i_1]) >= (min((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
                                var_22 = min((((/* implicit */long long int) 10)), (min((arr_6 [i_0]), (((/* implicit */long long int) arr_4 [i_0])))));
                            }
                            arr_16 [i_0] [i_2] [(signed char)7] [i_0] = ((/* implicit */signed char) 0LL);
                        }
                    } 
                } 
            }
        } 
    } 
}
