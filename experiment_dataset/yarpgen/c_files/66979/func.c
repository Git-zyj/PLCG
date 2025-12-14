/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66979
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
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_8 [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 2]))))));
                arr_9 [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-1)), (2500146383U)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    arr_13 [i_0] [i_0] = ((/* implicit */long long int) (-(var_10)));
                    arr_14 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)36)), (var_16)))), (min((var_1), (((/* implicit */unsigned int) var_4))))))))))));
}
