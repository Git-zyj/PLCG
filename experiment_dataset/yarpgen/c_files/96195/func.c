/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96195
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
    var_18 = ((/* implicit */short) ((unsigned long long int) 1432901780559729778LL));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_19 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1432901780559729779LL))));
                        var_20 = (-(-3105860743209887374LL));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) arr_5 [6ULL] [i_0]);
        arr_11 [i_0 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)141))));
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) (+(var_16)));
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 7; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
        arr_17 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)122)) && (((/* implicit */_Bool) (unsigned char)122))));
        arr_18 [i_4] [i_4] = (~(((/* implicit */int) var_5)));
    }
    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_20 [i_5 - 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_16)))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~((~(var_15))))))));
    }
}
