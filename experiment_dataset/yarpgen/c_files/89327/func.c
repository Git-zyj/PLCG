/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89327
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
    var_12 = ((/* implicit */unsigned short) ((2229009596U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2 - 1] [i_2] [i_2 - 2])) || (((/* implicit */_Bool) arr_5 [i_2 - 2] [i_1] [i_1] [i_0]))))) >= (((/* implicit */int) (!(((((/* implicit */_Bool) (short)16837)) || (((/* implicit */_Bool) (signed char)127))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [i_1]))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1])))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */int) arr_7 [i_2] [i_4] [i_4] [i_1]);
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_0 [i_4]))));
                            }
                        } 
                    } 
                }
                var_16 = ((/* implicit */long long int) (-(3920926657U)));
            }
        } 
    } 
}
