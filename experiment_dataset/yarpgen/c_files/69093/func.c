/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69093
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_8 [2LL] [2LL] [i_2] [i_3]), (((/* implicit */short) ((arr_6 [i_0 + 1] [i_3 + 1] [i_0 + 1] [i_0 + 1]) < (((/* implicit */unsigned long long int) 1137142622)))))));
                            arr_11 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (-5318878429854618920LL) : (1790040118855770972LL)))) ? (5318878429854618919LL) : (((arr_4 [i_0] [i_0 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [8LL]))))))), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_8 [6LL] [i_1] [i_1] [i_3])), (arr_7 [i_0] [i_0] [7] [i_0] [i_0 + 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned short) min((((unsigned long long int) ((unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_0]))), (var_4)));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((unsigned char) (~(4294967295U)))))));
    var_11 = ((/* implicit */short) var_6);
}
