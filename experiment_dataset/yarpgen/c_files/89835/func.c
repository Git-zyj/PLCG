/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89835
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
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] = max((((signed char) 542673852U)), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)127))))));
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_1] [i_4] = ((/* implicit */signed char) ((unsigned long long int) (signed char)-1));
                                arr_16 [i_1] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) (-((-(8ULL)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) arr_4 [i_0])))) * (((((/* implicit */int) (signed char)11)) * (((/* implicit */int) (signed char)17))))));
                arr_17 [i_1] [(signed char)0] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_0]))))));
            }
        } 
    } 
}
