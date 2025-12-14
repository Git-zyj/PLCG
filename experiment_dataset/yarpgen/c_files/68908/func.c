/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68908
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) max((var_1), (1308401823U)))) || (((/* implicit */_Bool) var_8)))))))));
    var_12 *= ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_13 &= ((unsigned int) (~(((/* implicit */int) max((((/* implicit */short) var_9)), (arr_1 [i_1]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_1] [i_0] [i_4] &= ((/* implicit */long long int) 331450220U);
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((unsigned int) var_1));
}
