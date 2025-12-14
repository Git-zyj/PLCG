/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88469
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
    var_10 = ((/* implicit */unsigned short) max((max((((var_3) * (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_7))))), (max((var_1), (var_1)))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_3] [i_4] [i_1] [i_4 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2] [i_1] [i_1] [i_3] [i_2] [i_3] [i_2])) >> (((((/* implicit */int) var_2)) - (24913))))))))) < (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_8))))), (var_0))))));
                                arr_13 [i_2] [i_1] [i_2 - 3] [i_2] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                } 
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_0] [i_0])), (max((8599262119049410486ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                arr_14 [i_0] [(signed char)10] = min((var_4), (max((arr_0 [i_1] [i_0]), (var_2))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */short) var_3);
}
