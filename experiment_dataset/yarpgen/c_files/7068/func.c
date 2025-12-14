/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7068
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_13 = var_4;
        var_14 = ((/* implicit */short) ((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) / (((((/* implicit */_Bool) var_6)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_15 ^= ((/* implicit */short) arr_2 [i_1]);
        var_16 &= ((/* implicit */int) ((((/* implicit */int) arr_1 [21ULL])) != (var_11)));
    }
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)));
        arr_6 [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) | (var_3));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        var_18 = var_4;
                        arr_15 [i_4] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) 20ULL);
                        var_19 &= ((/* implicit */int) (short)-22673);
                        var_20 -= ((/* implicit */short) arr_10 [i_5] [i_4] [i_4] [i_2 + 2]);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned short) var_2);
        arr_20 [6] &= ((/* implicit */unsigned int) (~(18446744073709551615ULL)));
    }
    var_21 *= ((/* implicit */int) min((max((2530191737592398046ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) var_1))));
}
