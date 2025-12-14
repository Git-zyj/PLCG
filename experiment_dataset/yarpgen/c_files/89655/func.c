/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89655
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
    var_11 = var_1;
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] = (unsigned char)17;
                var_13 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)79));
                arr_5 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (3142992517768643518ULL) : (12931412624716863420ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0ULL)))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0]))))), (arr_1 [i_0])));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3877496788455119787ULL) : (arr_9 [i_2] [i_0]))));
                                var_15 = (-(34359738367ULL));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
