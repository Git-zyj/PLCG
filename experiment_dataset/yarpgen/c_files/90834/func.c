/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90834
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_0] [i_1]));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)47825)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 3] [i_3 - 3]))) : (arr_3 [4] [(_Bool)1] [i_0 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 - 3] [i_3 + 3] [i_2])) != (((/* implicit */int) var_3)))))));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0 - 2] [i_3] [i_3]))))) ? (((/* implicit */long long int) var_4)) : (max((((/* implicit */long long int) 47432285U)), (min((-2937101757635543920LL), (((/* implicit */long long int) (unsigned short)65535))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
