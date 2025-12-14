/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75420
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_10 -= ((unsigned short) max((17293535913101195871ULL), (((/* implicit */unsigned long long int) (signed char)124))));
                var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_1 [i_0 + 1] [i_1 + 1]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1 - 1] [i_1] [i_2] = ((/* implicit */unsigned int) max(((~(arr_5 [i_0 - 2] [i_0 + 1]))), (((arr_5 [i_0] [i_0 + 1]) << (((arr_5 [i_0 + 2] [i_0 - 2]) - (13304129659468339326ULL)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_4] = (-((+(((/* implicit */int) arr_11 [i_2 - 3] [i_2 + 1] [i_2 - 4] [i_2 + 2] [i_2 - 3])))));
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0 - 3] [i_1 - 1]) & (arr_1 [i_0 - 1] [i_1 - 3])))) && (((/* implicit */_Bool) ((unsigned long long int) (signed char)-122))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((max((arr_1 [i_0 - 2] [i_1 - 3]), (((((/* implicit */_Bool) (signed char)126)) ? (arr_5 [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2] [i_2 + 1]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59))))))));
                }
                for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    var_14 = ((/* implicit */long long int) var_3);
                    var_15 = ((/* implicit */short) (~(((/* implicit */int) (short)127))));
                    arr_16 [i_5 + 2] = (+(((/* implicit */int) arr_13 [i_5 + 2] [i_5] [i_5 + 1] [i_0])));
                }
                var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_0] [i_0 - 3] [i_1] [i_1 + 2]))));
                arr_17 [i_0 - 3] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_1 + 1] [i_1 - 1])))), (((/* implicit */int) arr_14 [i_0 + 1]))))), (17293535913101195871ULL)));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) * (var_9))))), (((/* implicit */unsigned int) (signed char)127))));
}
