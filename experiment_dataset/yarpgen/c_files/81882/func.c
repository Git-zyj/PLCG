/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81882
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (min((127), (((/* implicit */int) (short)7852))))))) ? (((((/* implicit */int) max(((short)7872), ((short)7872)))) << (((((/* implicit */int) var_7)) - (87))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (max((((/* implicit */int) var_5)), (1020385676)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-35)) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (6882207504390395354LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned char)119)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((_Bool) arr_13 [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]));
                                var_14 -= ((/* implicit */unsigned char) (short)-7863);
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */long long int) arr_5 [i_0] [i_1 - 1] [i_2]);
                }
            } 
        } 
    }
}
