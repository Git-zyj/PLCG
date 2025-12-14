/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57281
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (var_2)));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_13 [(unsigned char)3] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) (~(arr_5 [i_1 + 1])));
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */_Bool) (-(((((((/* implicit */int) (short)15779)) <= (((/* implicit */int) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_12))))));
    var_14 = ((/* implicit */unsigned char) var_4);
    var_15 = ((/* implicit */_Bool) var_1);
}
