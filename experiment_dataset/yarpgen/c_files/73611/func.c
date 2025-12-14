/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73611
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_7))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (((arr_10 [i_0]) ? (arr_9 [i_0] [i_1] [i_1] [i_3] [4LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))))))))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_1] [i_2])) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_6)) : (min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_6)))))))));
                                arr_12 [i_0] [i_1] = ((/* implicit */_Bool) var_1);
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_20 [i_6] [i_6] [i_6] [i_5] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_7)));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [8ULL] [i_0] [i_2] [i_5] [i_6]), (((/* implicit */unsigned int) var_10))))) || (((/* implicit */_Bool) var_6)))))));
                                arr_21 [i_0] [i_1] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
