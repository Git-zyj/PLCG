/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56969
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_12))) ? (-1756602039) : (((/* implicit */int) var_9))));
                        var_15 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) (unsigned char)7)))));
                        var_16 = (+(arr_7 [i_0] [i_0 - 3] [i_0 - 1]));
                        var_17 = ((/* implicit */unsigned short) (~(arr_0 [i_0] [i_0 + 1])));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = (+(467642159));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0 - 2])) : (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)137)))))));
    }
    var_19 = (!(((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) == ((~(((/* implicit */int) (_Bool)1)))))));
}
