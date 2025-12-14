/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82684
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
    var_12 &= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = min((((/* implicit */unsigned int) var_7)), (arr_2 [i_1 + 1]));
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */long long int) ((unsigned int) (short)(-32767 - 1)))) : (var_8)));
                }
            } 
        } 
        arr_9 [(short)17] = ((/* implicit */long long int) min((((((/* implicit */int) (short)32763)) > (((/* implicit */int) (unsigned char)63)))), (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_4 [6LL] [6LL] [i_0] [i_0]))))));
    }
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (4035145247U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))))))))));
}
