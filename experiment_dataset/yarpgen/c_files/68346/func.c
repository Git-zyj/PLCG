/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68346
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((2147483647) < (((/* implicit */int) (unsigned char)0)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) var_5);
                                var_13 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) (~(-873231353)))) & ((~(var_9)))))));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)226))));
                                var_14 = ((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)14] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_15 [(short)22] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((4280831618U), ((~(3748341798U)))))), (min((arr_11 [i_1] [i_0 - 2] [18U] [i_0 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (arr_7 [i_0] [i_1] [i_0] [i_1]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max((var_9), (((/* implicit */unsigned long long int) var_11))));
}
