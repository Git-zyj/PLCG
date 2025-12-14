/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67307
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) max((((/* implicit */int) min((((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_2 [i_0] [i_1])))), (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)27))))))), ((-(((/* implicit */int) var_2))))));
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)5)), ((-(3320654618U)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((-2682525950304342209LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) < (arr_4 [i_0] [i_2] [i_1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [3LL] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */long long int) var_2)), (-5127686666718038264LL))) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                                arr_19 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)56340)) + (((/* implicit */int) arr_16 [i_0] [i_1] [i_4 - 1] [i_4 - 1] [i_4])))) <= (((/* implicit */int) arr_16 [i_0] [i_1] [i_4 - 1] [9ULL] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) ((var_11) * (((/* implicit */unsigned long long int) var_15))));
}
