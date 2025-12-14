/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90105
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
    var_19 = ((/* implicit */_Bool) var_0);
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) var_16)) & ((~(((/* implicit */int) (signed char)67)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0]))) ? ((+(arr_1 [i_0] [i_0]))) : (max((arr_1 [8U] [i_0]), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (-(-1));
        var_22 = ((/* implicit */unsigned char) min((((max((var_9), (((/* implicit */int) var_3)))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19118))) : (arr_2 [i_0] [i_0]))) - (18446744073709532498ULL))))), (((/* implicit */int) (short)14190))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (-((+((-(((/* implicit */int) var_8))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [3] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_4))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))));
                        arr_14 [i_1] = ((/* implicit */int) (-(15706453244172165602ULL)));
                    }
                } 
            } 
        } 
    }
}
