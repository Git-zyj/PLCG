/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63003
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_19 &= ((/* implicit */short) max((min((((((/* implicit */_Bool) var_2)) ? (-1585147613040217083LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (unsigned short)28715)))), (((/* implicit */long long int) ((short) ((unsigned short) var_3))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) arr_9 [i_0] [i_0] [i_0 - 2] [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0] [16ULL] [i_3])) ? (-1585147613040217083LL) : (((((/* implicit */_Bool) arr_6 [i_3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (3707200847585992304LL))))))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -3042488927486704836LL)) ? (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)27491)))) != (((/* implicit */int) var_18))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [2U] [i_1])) > (((/* implicit */int) (short)4507))))) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_2])) < (((/* implicit */int) arr_10 [i_1] [i_1]))))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) 4592238010404898023LL);
    }
    var_23 = ((/* implicit */short) -1585147613040217068LL);
}
