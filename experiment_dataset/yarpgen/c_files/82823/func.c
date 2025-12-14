/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82823
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
    var_19 = ((/* implicit */_Bool) min((var_19), (var_18)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_4 [i_1] [i_1] [i_2]), (arr_4 [i_1] [5U] [i_1]))))));
                                var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(arr_0 [i_3] [i_2]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))));
                }
                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 144114913197948928LL))));
            }
        } 
    } 
}
