/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98088
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */int) ((((((min((-8LL), (5751664799385288090LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_0])) - (210))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_8)) : (0ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_1 [i_0])))))))))));
        var_11 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) var_4)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_12 = min(((~(var_2))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)48))))));
        var_13 = ((/* implicit */unsigned char) arr_2 [i_1]);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_14 *= (!(((/* implicit */_Bool) 1468696182)));
                        var_15 ^= var_6;
                        arr_14 [i_2] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4] [i_5]);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(var_8))))));
        var_17 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) <= (-5751664799385288090LL)))) < ((+(((((/* implicit */int) (unsigned char)228)) << (((((/* implicit */int) var_6)) - (170)))))))));
    var_19 = ((/* implicit */long long int) (signed char)0);
}
