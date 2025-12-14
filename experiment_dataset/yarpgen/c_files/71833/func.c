/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71833
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
    var_20 = ((/* implicit */unsigned long long int) -876152206375237767LL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                arr_6 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */short) min((((long long int) (signed char)127)), (((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1]))) > (arr_4 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_22 ^= (signed char)-120;
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)118)) ? (260046848) : (((/* implicit */int) (signed char)118))));
                            var_24 = ((/* implicit */unsigned char) max(((signed char)118), ((signed char)-105)));
                            arr_11 [i_0] [i_1] [i_0] [4ULL] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-121))))) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) ((unsigned char) var_12))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
