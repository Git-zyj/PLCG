/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73241
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
    var_14 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                arr_4 [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_13), (((/* implicit */unsigned int) var_1)))) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) var_7))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -310617760)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            arr_10 [i_0] [i_2] [i_0 + 2] [i_0 - 1] [i_0] = 9223372036854775793LL;
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) (~(-600526747)));
}
