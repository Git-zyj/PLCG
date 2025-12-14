/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73695
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
    var_10 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 4] [i_1 - 2])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_3 - 2]))))));
                                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_4])))))))));
                                var_14 = ((/* implicit */short) (+((-((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3 - 2] [i_3] [i_4] [i_4]))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1] [i_0]))))));
                    var_16 = (-(((/* implicit */int) (!(((/* implicit */_Bool) 13397774126952111286ULL))))));
                }
            } 
        } 
    } 
}
