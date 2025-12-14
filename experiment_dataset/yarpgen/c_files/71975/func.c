/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71975
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned char)6] [i_1 + 1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (arr_3 [i_1 + 1] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_10 += (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(unsigned char)0]))))));
                                var_11 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 + 2] [i_3 + 3]))));
                                arr_15 [i_4] [(signed char)12] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)63))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_4);
}
