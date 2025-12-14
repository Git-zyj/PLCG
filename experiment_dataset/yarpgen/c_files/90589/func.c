/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90589
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_1 - 1] [i_0]), (1043200618)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(signed char)7] [i_1 + 1] [i_1])) ? (arr_8 [i_1] [i_1 + 1] [i_1]) : (arr_8 [(unsigned char)11] [i_1 - 1] [i_1 - 1])))) : ((-(arr_5 [(unsigned char)7] [i_1 + 1] [(signed char)15])))));
                    var_11 -= ((/* implicit */unsigned long long int) var_7);
                }
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (int i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            {
                var_13 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4 + 4] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 + 1]))) : (arr_16 [i_4 + 2] [i_4 + 1])))), (((((/* implicit */unsigned long long int) 3377209385U)) / ((-(var_5))))));
                var_14 = ((/* implicit */signed char) 1449205156901316665LL);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (unsigned char)190))));
}
