/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93095
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
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_13 = ((((/* implicit */_Bool) max((arr_5 [i_1] [i_2 + 1] [i_2]), (arr_5 [i_0] [i_1] [i_2])))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_2])) ? (arr_5 [i_0] [i_3] [i_2]) : (arr_5 [i_0] [i_1] [i_3]))) : (max((((/* implicit */long long int) var_3)), (var_1))));
                            var_14 -= ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_1]);
                var_16 = ((/* implicit */unsigned short) max((var_16), (((unsigned short) min((max((arr_8 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1]), (arr_1 [i_0]))), (arr_8 [i_1 - 1] [i_0 + 3] [i_1] [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((((/* implicit */long long int) min((min((var_12), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) var_8))))), (var_1)));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), ((((_Bool)1) ? (((/* implicit */int) (short)-28292)) : (((/* implicit */int) (short)-10779))))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_7)), (var_12)));
}
