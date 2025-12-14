/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81660
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))) & (((/* implicit */int) ((unsigned char) var_13)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 &= (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(short)6] [i_0] [i_2 - 1]))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (~(((long long int) arr_6 [i_2] [i_2 - 1] [i_2] [i_2 - 1])))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -455501128)) ? (((/* implicit */int) arr_2 [i_2] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1])))), (((int) 6620379958390331400ULL))))))))));
                }
            } 
        } 
        arr_7 [i_0] = (~(max((-1LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 405863033)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (unsigned char)95))))))));
    }
}
