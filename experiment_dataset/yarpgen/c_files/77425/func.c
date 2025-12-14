/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77425
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
    var_14 &= ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */int) arr_1 [i_0]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)124)) && (((/* implicit */_Bool) (signed char)127))));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((3419365424U), (875601876U)));
        var_18 ^= ((/* implicit */unsigned short) (_Bool)0);
        var_19 = arr_1 [i_1];
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */signed char) ((9223372036854775807LL) < (((/* implicit */long long int) 875601895U)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_11 [i_3])))))))) : ((+((-(var_1))))))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_3 [i_1]))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) arr_3 [i_1]);
    }
}
