/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55662
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
    var_10 = ((/* implicit */unsigned int) (unsigned char)223);
    var_11 = ((/* implicit */int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) var_0)) : (var_4)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)32)) * (((/* implicit */int) (unsigned char)31))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) min(((unsigned char)225), ((unsigned char)37))))))) ? (min((var_4), (((/* implicit */unsigned long long int) min(((unsigned short)65515), (((/* implicit */unsigned short) (unsigned char)225))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((arr_6 [i_0] [i_0] [i_2]) ? (((((/* implicit */_Bool) (unsigned short)15330)) ? (((/* implicit */int) var_2)) : (var_7))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) & (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((var_0) << (((/* implicit */int) arr_3 [i_1]))))))));
                }
            } 
        } 
    } 
}
