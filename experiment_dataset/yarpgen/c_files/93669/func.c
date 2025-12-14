/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93669
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
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) ^ (min((max((((/* implicit */int) (unsigned char)213)), (arr_3 [i_0 - 3] [i_0]))), (((/* implicit */int) ((signed char) arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) -825426007296010978LL);
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_1] [i_0 - 2] [i_2] [i_3] [i_4])) : (((/* implicit */int) (unsigned char)56))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_0]))) : (max((max((((/* implicit */long long int) arr_12 [i_0] [i_0 - 2] [i_0] [i_0] [0LL])), (0LL))), (((/* implicit */long long int) max(((unsigned char)55), (arr_9 [i_0] [i_1] [i_3]))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) ((_Bool) max((arr_10 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_2 - 2]), (arr_10 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
                    var_18 ^= ((((((((/* implicit */_Bool) (unsigned short)6190)) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_0 + 1])) : (((/* implicit */int) (signed char)-103)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) != (17293108396915573624ULL)))))) || (max(((_Bool)1), ((_Bool)1))));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */short) arr_9 [i_0 - 1] [i_1] [i_1])), ((short)0)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_8);
}
