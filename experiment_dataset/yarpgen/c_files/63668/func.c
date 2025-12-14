/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63668
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 1381129964))) ^ (max((((var_1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_5)) > (1381129950))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((min((arr_3 [i_0 + 1] [i_0] [i_1 - 2]), (arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 1]))) && (((/* implicit */_Bool) 2147483638))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_1] [20ULL] = ((/* implicit */unsigned int) (+(arr_8 [i_0] [i_1 + 1] [i_2] [i_2])));
                            var_15 = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_0] [i_0]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) arr_2 [i_0]);
                arr_12 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (5104193212966026776LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 23; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                var_17 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_4 - 1])) ? (arr_18 [i_4 - 2] [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) > (((/* implicit */int) (_Bool)1))))))))));
                arr_19 [i_4] = max((((/* implicit */long long int) arr_18 [i_4 - 3] [i_4 - 1])), (arr_15 [i_4 - 2]));
                var_18 = ((/* implicit */int) arr_18 [(short)20] [i_5]);
            }
        } 
    } 
}
