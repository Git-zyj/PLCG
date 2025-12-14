/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65784
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
    var_18 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1 + 2] [i_2] = ((/* implicit */_Bool) (-(var_15)));
                                arr_12 [i_2] [i_1] [i_2] [6LL] [i_4 - 1] = ((/* implicit */long long int) (unsigned short)6646);
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 0LL);
                arr_14 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -6615730401590985801LL)) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 2] [i_1 - 1])) ? (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2]) : (arr_9 [i_1 - 1] [i_1 + 1] [i_1 - 2]))) : (arr_9 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_17);
    var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)34948)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned char)100))))));
}
