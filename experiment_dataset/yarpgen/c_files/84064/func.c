/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84064
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (((((/* implicit */long long int) 3058060022U)) / (9223372036854775803LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)75)) ? (3355444708U) : (939522588U))))));
                    var_12 &= ((/* implicit */short) ((((/* implicit */int) (!(arr_4 [i_1] [i_0])))) - (((/* implicit */int) ((-1660720919052710176LL) == (max((arr_5 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */long long int) 939522575U)))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))));
        var_13 = ((/* implicit */signed char) -6733888541059304486LL);
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 22; i_4 += 4) 
        {
            arr_15 [i_4] [i_4] [i_4] = ((((min((((/* implicit */long long int) var_4)), (var_6))) + (9223372036854775807LL))) << (((arr_3 [i_3] [i_3] [i_3]) - (3001789283U))));
            var_14 = ((/* implicit */_Bool) (unsigned char)143);
            var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_10))))))) - (arr_2 [i_4 + 3] [i_4])));
            arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) var_4);
            arr_17 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_4 - 1])))) > (((/* implicit */int) var_1))));
        }
        arr_18 [i_3] = ((/* implicit */unsigned long long int) var_0);
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)0)) ? (arr_3 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        var_16 = ((/* implicit */_Bool) var_5);
        var_17 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) > (-494689988075625951LL)));
        arr_23 [i_5] = ((/* implicit */signed char) var_9);
        arr_24 [i_5] |= ((/* implicit */unsigned long long int) var_4);
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_0))));
}
