/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89175
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 |= ((/* implicit */short) (+(var_1)));
        var_16 ^= ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)29464))))))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-12427))) < (arr_0 [i_1] [i_0])))) * (((/* implicit */int) ((arr_3 [(short)2]) > (arr_0 [i_0] [i_1])))))))));
                arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) 18U);
                arr_8 [i_0] [i_2] [i_2] = ((((/* implicit */int) arr_6 [1LL] [1LL] [i_2] [i_2])) ^ (((((/* implicit */int) (short)13)) >> (((((/* implicit */int) var_8)) - (8636))))));
                var_19 = ((/* implicit */short) arr_3 [i_1]);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [(short)13] [i_3] [i_3] = ((long long int) (-(-9223372036854775807LL)));
                var_20 = ((/* implicit */short) ((((arr_3 [i_0]) / (((/* implicit */long long int) arr_1 [i_0])))) * (((/* implicit */long long int) ((arr_1 [i_0]) / (((/* implicit */int) (_Bool)1)))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_21 ^= var_7;
                arr_14 [i_0] [i_1] |= ((/* implicit */short) arr_9 [(short)0] [i_1]);
                /* LoopSeq 1 */
                for (unsigned int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    var_22 = (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])));
                    arr_18 [i_0] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_4] [(_Bool)1]))));
                    var_23 = ((/* implicit */short) (-((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                }
            }
            arr_19 [i_1] [i_0] = ((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_1]);
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                arr_22 [7U] [i_1] [i_6] [7U] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [4]);
                var_24 = (~(((((/* implicit */int) arr_12 [(short)8] [i_1] [i_0])) % (((/* implicit */int) arr_20 [i_6] [i_1] [i_0])))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_25 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1]))));
                    var_26 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                    arr_26 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */short) (((!(var_14))) || (((/* implicit */_Bool) ((int) 1606872878U)))));
                }
                var_27 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1))))));
            }
            arr_27 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */_Bool) (~(5330794213562437447LL)));
        }
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            var_28 = ((/* implicit */short) (-(((((/* implicit */int) var_0)) + (((/* implicit */int) (short)22285))))));
            var_29 = ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_0] [i_0]);
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_23 [i_0] [i_8] [i_8])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [14LL])) : (((/* implicit */int) var_5))))));
        }
    }
    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) max(((-(max((((/* implicit */long long int) var_7)), (var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (-(169664406))))))))))));
    var_31 = ((/* implicit */_Bool) min((var_31), (var_3)));
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (4294967293U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))))))));
}
