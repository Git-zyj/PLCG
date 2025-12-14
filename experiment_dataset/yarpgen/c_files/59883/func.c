/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59883
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (unsigned short)64879))) << (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1459))) | (min((((/* implicit */long long int) 385620004U)), (-6600620972115631955LL))))) + (6600620972115630661LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned int) -2147483634)))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned long long int) var_9)) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3])))))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)234)) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))) | (-6600620972115631955LL))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((14157843610385800394ULL) | (var_3)))) ? (((/* implicit */int) min((arr_10 [i_3] [i_3] [i_2] [i_1] [i_0]), (((/* implicit */unsigned short) (unsigned char)175))))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_3]))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (2848842164U)))));
                        }
                    } 
                } 
                arr_12 [i_0] [(signed char)1] = min((3517476383U), (((unsigned int) (-(((/* implicit */int) arr_8 [i_0] [10] [i_1]))))));
            }
        } 
    } 
}
