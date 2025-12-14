/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86011
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
    var_19 = ((/* implicit */_Bool) (-(((((var_14) + (7339351664441428593LL))) - (((((/* implicit */_Bool) -2147483647)) ? (var_5) : (((/* implicit */long long int) 268435454))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_0])))) + ((-(((/* implicit */int) arr_1 [i_0])))))))));
        var_21 = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (var_6)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65534))));
                    var_23 *= ((/* implicit */long long int) ((signed char) max((max((7339351664441428593LL), (((/* implicit */long long int) (unsigned short)15360)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)6))))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 4; i_4 < 11; i_4 += 3) 
        {
            arr_13 [i_3] = ((/* implicit */signed char) (-(-268435449)));
            arr_14 [i_3] [i_3] [i_4 - 4] = arr_9 [i_3 - 1] [i_4];
            var_24 = ((/* implicit */unsigned char) arr_8 [i_3 + 1]);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-36))))))) ? ((~(((((/* implicit */_Bool) var_18)) ? (552490837U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_3] [i_3])) << (((-6377260329374132999LL) + (6377260329374133014LL))))), (((((/* implicit */int) (short)-1)) + (((/* implicit */int) (short)9)))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    arr_20 [i_3] [i_5 + 1] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (((-(268435455))) < (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)54293)) : (((/* implicit */int) var_18)))))))));
                    var_26 *= ((/* implicit */long long int) var_17);
                    var_27 = ((/* implicit */unsigned char) ((unsigned short) (-((~(((/* implicit */int) (signed char)7)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */short) (((-(18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_5])) * (((/* implicit */int) (_Bool)0)))))));
                        arr_23 [i_3] [i_5 + 1] [i_3] = ((/* implicit */unsigned int) ((((long long int) 268435433)) == (((/* implicit */long long int) ((((/* implicit */int) (signed char)-16)) + (((/* implicit */int) (_Bool)0)))))));
                        arr_24 [i_3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3 + 2] [i_7])) ? (((unsigned long long int) 6100844188642663437LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    }
                    arr_25 [i_3 + 2] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)9))))) || (((/* implicit */_Bool) ((max((((/* implicit */long long int) var_11)), (0LL))) - (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                }
            } 
        } 
        arr_26 [i_3] = ((/* implicit */int) (~((~(((arr_7 [i_3] [i_3]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))))))));
    }
}
