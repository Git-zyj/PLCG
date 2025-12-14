/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78616
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
    var_10 = ((/* implicit */long long int) var_2);
    var_11 = ((/* implicit */short) ((_Bool) (_Bool)1));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */short) ((signed char) var_2));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34001))) ^ (603868421893487727LL))), (((/* implicit */long long int) var_7))))) : (((((/* implicit */_Bool) (unsigned short)53662)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((var_8) / (((/* implicit */long long int) arr_2 [i_0] [i_0 - 1]))))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_1] [i_2] [i_2] [i_4 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? ((((+(arr_7 [i_2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 + 1]))))));
                                var_15 = ((/* implicit */signed char) ((arr_0 [i_0 - 1]) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41201)) + (((/* implicit */int) var_1)))))));
                                arr_16 [i_2] [i_3] [i_2] [i_1] [i_1] [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) max((((long long int) ((short) (signed char)0))), (((/* implicit */long long int) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 1]))) < (3464531579U)))))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1557328853U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) var_4))))))) ? (((/* implicit */int) arr_6 [i_4] [i_3] [i_1] [i_1])) : (min(((+(((/* implicit */int) var_1)))), (((((/* implicit */int) var_1)) << (((((/* implicit */int) var_7)) - (25994)))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) arr_5 [i_2 - 1] [i_2 + 2] [i_2]);
                }
            }
        } 
    } 
}
