/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92942
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [(_Bool)1] [(signed char)10] [i_1] [i_0 + 2] [i_0] = ((/* implicit */unsigned short) arr_6 [(short)12] [i_2 - 1] [i_1] [(signed char)9]);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [11U] [i_0 + 2] [i_2 + 3] [(short)2])) ? (((/* implicit */int) max((arr_6 [i_0 + 2] [i_0 - 1] [i_2 + 2] [i_2 + 2]), (arr_6 [i_0] [i_0 - 2] [i_2 - 1] [6ULL])))) : ((~(((/* implicit */int) (signed char)2))))));
                            var_17 = (+(((/* implicit */int) ((arr_7 [i_2] [i_2] [i_2 + 1] [i_3 - 2]) > (arr_7 [i_0 - 1] [i_2 + 1] [i_1] [i_0 - 1])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (arr_9 [i_1])))) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_2 [i_0]))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1] [i_0])) + ((~(((((/* implicit */_Bool) arr_1 [6U] [i_0])) ? (((/* implicit */int) arr_3 [(short)6] [i_1])) : (((/* implicit */int) arr_0 [8ULL] [i_0])))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (972934250485323528ULL)));
}
