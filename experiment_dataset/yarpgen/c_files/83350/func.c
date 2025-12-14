/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83350
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
    var_12 ^= ((/* implicit */long long int) var_6);
    var_13 = ((/* implicit */long long int) max((var_13), (((min((var_4), (((/* implicit */long long int) var_6)))) + (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))), (min((arr_6 [i_1 - 1] [i_1 - 2] [3LL] [i_2] [i_1 - 1]), (((/* implicit */unsigned int) var_8))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                            {
                                arr_13 [i_0 + 1] [i_1] [i_0] [3] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(13LL)))), (max((var_5), (((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_3 - 2]))))));
                                arr_14 [i_1 - 1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_11);
                                var_14 = ((((/* implicit */_Bool) (short)4506)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_3] [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1]) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-4525))))))))) : (((unsigned long long int) var_7)));
                            }
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4532))) < (7377544157790119972ULL))), (var_10)));
                arr_16 [i_0] = ((/* implicit */int) var_0);
                var_15 *= ((/* implicit */_Bool) ((((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) & (((int) 75163343U))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_4);
}
