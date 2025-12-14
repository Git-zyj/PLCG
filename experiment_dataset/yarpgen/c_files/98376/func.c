/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98376
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
    var_19 = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned int) (_Bool)0)), (var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) var_3);
        var_21 = ((/* implicit */short) var_8);
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_14))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((unsigned long long int) ((long long int) (_Bool)1)));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) ((_Bool) arr_2 [i_1])));
            var_24 = ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1])));
            var_25 = ((/* implicit */long long int) ((unsigned long long int) 562949953421311ULL));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_26 *= ((/* implicit */short) ((signed char) arr_0 [i_1]));
            arr_14 [i_1] = ((/* implicit */unsigned short) -966164433765692598LL);
            arr_15 [i_1] [i_1] [i_3] &= ((/* implicit */long long int) 0ULL);
        }
        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) arr_9 [i_4 + 1] [i_4]);
            var_28 ^= ((/* implicit */unsigned int) var_13);
        }
    }
}
