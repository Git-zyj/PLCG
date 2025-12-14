/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88594
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_5))) << (((((/* implicit */int) (unsigned short)17097)) - (17091)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_21 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)14))));
                    var_22 = ((/* implicit */int) min((((1857876579U) != (((/* implicit */unsigned int) arr_4 [i_1 + 1])))), (((((/* implicit */unsigned long long int) arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 1])) >= (max((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 1] [i_2]))))))));
                    var_23 = ((/* implicit */unsigned int) arr_1 [i_1 + 1]);
                    var_24 = max((((/* implicit */long long int) ((arr_3 [i_1 - 2] [i_1 - 1]) < (arr_3 [i_1 - 2] [i_1 - 1])))), (((long long int) arr_3 [i_1 - 2] [i_1 - 1])));
                    arr_9 [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) | ((~(((/* implicit */int) arr_2 [i_1 + 1]))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
}
