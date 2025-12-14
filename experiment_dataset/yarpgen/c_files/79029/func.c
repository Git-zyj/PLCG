/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79029
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0])), (2147483647))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */short) (+(((/* implicit */int) min(((unsigned char)65), (((/* implicit */unsigned char) (signed char)90)))))));
                            arr_11 [(signed char)0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) max((max((((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [6ULL] [i_3])), (arr_3 [i_0] [i_1]))), (((/* implicit */short) (!(var_1))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-46)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)30))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (var_4)));
}
