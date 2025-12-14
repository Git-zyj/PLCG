/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8871
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_8))));
                    arr_7 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) (+(((/* implicit */int) max((var_9), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (2358331874252133827ULL)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -2147483640)) * (((((939333854U) / (((/* implicit */unsigned int) 2147483639)))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))));
                                var_20 = ((/* implicit */unsigned int) ((int) (-(7408869123985704087ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_20 [(signed char)6] [i_1] [i_2] = ((/* implicit */int) ((_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) var_1))) | (9223372036854775807LL))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [3U] [i_0 - 3] = ((/* implicit */unsigned long long int) 2147483639);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_8;
}
