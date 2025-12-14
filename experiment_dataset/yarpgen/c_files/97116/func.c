/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97116
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) 11895498804245809332ULL)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (+(4218928923U)));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) var_8);
                        var_20 |= ((/* implicit */short) (~(((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) 332907370)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_21 = ((signed char) 32434218U);
        var_22 = ((/* implicit */unsigned long long int) ((short) (short)1792));
        arr_15 [i_4] = ((/* implicit */signed char) (+(arr_9 [i_4])));
    }
    var_23 = ((/* implicit */unsigned int) var_1);
    var_24 = ((/* implicit */int) max(((signed char)0), ((signed char)-127)));
}
