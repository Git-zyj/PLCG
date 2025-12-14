/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59806
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((min((4194304U), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0])))) != (((/* implicit */unsigned int) min((1229266625), (-1)))))) ? ((+(6738072045800923095LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8936830510563328LL)))))))))));
                                var_21 += ((/* implicit */long long int) ((((var_5) / (((/* implicit */long long int) var_0)))) <= (((((var_11) < (var_12))) ? (min((-9223372036854775802LL), (((/* implicit */long long int) arr_3 [i_2 - 2] [i_2 - 2])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 0)) : (6738072045800923095LL)))))));
                            }
                        } 
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max((var_9), ((unsigned short)17325)))) >> ((((-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) : (var_6))))) + (284LL)))));
                arr_12 [7LL] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_1] [i_1] [i_1] [i_0] [6] [i_1] [i_1]))) ? ((-(3U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)45049)), (-1994004981)))))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((-8936830510563329LL), (min((((/* implicit */long long int) (unsigned short)233)), (1267141387729493524LL))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_2);
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */long long int) 4194304U)) : (((-7910456490083579646LL) - (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
}
