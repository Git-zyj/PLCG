/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83969
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
    var_12 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2887908779U)) >= (9600168686247792058ULL)));
        var_14 = var_6;
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63775))))) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_3 [i_1])));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1 + 2])))))));
        var_17 = ((/* implicit */short) arr_0 [(unsigned short)7]);
    }
    for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_10 [i_2] [7ULL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_2]))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((int) 2085432678U)) + (((/* implicit */int) arr_2 [i_2 + 2] [i_2 + 2])))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) /* same iter space */
            {
                var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                var_20 &= ((/* implicit */int) ((_Bool) 18446744073709551615ULL));
            }
            for (unsigned char i_5 = 1; i_5 < 8; i_5 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) -6291451486473088170LL))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_22 = ((/* implicit */short) (-(((arr_12 [2U] [i_3]) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) 16777216))))));
                    var_23 = ((/* implicit */_Bool) var_1);
                }
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */int) ((unsigned int) (_Bool)1));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)249)) ? (arr_20 [i_2 - 1]) : (arr_20 [i_2 - 1])));
                    }
                    var_26 = ((/* implicit */unsigned char) arr_6 [i_2 + 2]);
                }
            }
            var_27 ^= ((/* implicit */signed char) ((short) 9600168686247792058ULL));
        }
        var_28 = var_0;
    }
}
