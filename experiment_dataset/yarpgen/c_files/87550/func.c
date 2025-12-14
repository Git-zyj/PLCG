/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87550
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) (signed char)-24);
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((((/* implicit */int) (signed char)18)) | (((/* implicit */int) (signed char)-18)))) | (((((/* implicit */int) (signed char)-31)) & (((/* implicit */int) arr_9 [3] [3] [3] [i_4 - 1]))))))), (var_10)));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) max(((signed char)-31), ((signed char)18)))) : ((+(((/* implicit */int) (signed char)-31))))));
                                arr_15 [i_0] [i_0] [i_2 + 1] [i_3] [i_1] = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (signed char)-13))))))));
                                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-18)), (min((((/* implicit */unsigned long long int) min(((signed char)23), ((signed char)23)))), (((unsigned long long int) arr_10 [i_0] [i_1] [i_2 + 1] [i_1] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_13);
}
