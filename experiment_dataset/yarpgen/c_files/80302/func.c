/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80302
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_1] [7ULL] [i_4 - 1] = ((/* implicit */long long int) min((((unsigned int) ((((/* implicit */unsigned int) arr_13 [i_2])) & (var_2)))), (((/* implicit */unsigned int) min((var_0), (((/* implicit */short) (!(((/* implicit */_Bool) 528817565266654762ULL))))))))));
                                arr_18 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) var_3)))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((long long int) 17917926508442896866ULL))))) & (-6996849947079324176LL)));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) < (arr_4 [i_1 + 1] [i_1] [i_1 - 1])))), (((unsigned long long int) arr_4 [i_1 + 1] [i_1] [i_1 - 1]))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65514)) - (max((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) 13041613892409582018ULL)) ? (arr_9 [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */int) (unsigned char)247))))))));
                arr_19 [i_1] = ((/* implicit */short) ((signed char) (~(-622539616))));
                var_16 -= ((unsigned long long int) var_5);
            }
        } 
    } 
}
