/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7799
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_16))))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */unsigned int) -131603997))))));
        var_20 = ((/* implicit */unsigned int) (~(min((arr_2 [i_0]), (arr_2 [i_0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_4] [9LL] [3ULL]);
                            arr_15 [i_4] [(short)12] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_1])), (arr_6 [i_1] [13ULL] [13ULL])))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (5848826680466781465ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11605))))))));
                            arr_16 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) 18446744073709551615ULL);
                        }
                        /* vectorizable */
                        for (short i_5 = 4; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((long long int) (+(((/* implicit */int) var_2))));
                            var_22 = ((((/* implicit */_Bool) arr_10 [5ULL] [i_2] [i_2] [i_5 - 4] [i_2] [i_2])) ? (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_5] [i_3] [i_0] [i_0] [i_0] [i_0]) : (var_1))) : ((~(var_1))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5 - 4] [i_5 - 4] [13] [i_5] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 - 1] [i_5 - 4] [i_5 + 1] [i_5] [(short)4] [(short)4] [i_5 + 2]))) : (arr_17 [i_1] [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_1])));
                            var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                        }
                        for (short i_6 = 4; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) var_9);
                            var_26 = ((unsigned int) ((((/* implicit */_Bool) (unsigned short)39094)) ? (9650986102163288766ULL) : (arr_17 [i_1] [i_1] [i_0] [i_1] [i_6 + 1] [i_1])));
                            var_27 = ((/* implicit */unsigned int) (-(var_4)));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)6541))))) >= ((+(var_4)))));
                            arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_6 - 3] = ((/* implicit */unsigned int) var_4);
                        }
                        for (short i_7 = 4; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((11285020292374269622ULL) - (((/* implicit */unsigned long long int) -59848659)))) * (((/* implicit */unsigned long long int) (~(var_4))))))) ? (((/* implicit */int) min((arr_25 [i_1] [i_7 + 2] [i_1] [13LL] [i_1] [i_2] [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_11)))))))) : (((((/* implicit */_Bool) arr_11 [i_7 - 3] [i_7 - 3] [0ULL] [5U] [i_0] [0ULL])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_18) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))) : (((/* implicit */int) (short)-30530))))));
                            arr_26 [i_7] [i_1] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967279U))))) | (arr_23 [i_0] [i_1] [i_1] [i_3] [i_7 + 2])))), (((((/* implicit */_Bool) 31457280)) ? (((/* implicit */unsigned int) 144831627)) : (2297783198U)))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) var_15);
                        arr_27 [i_2] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((short) (unsigned short)23215));
                        arr_28 [i_2] [i_0] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) min(((((~(13603677807124210328ULL))) >> (((arr_18 [i_0] [i_0] [i_0] [i_1]) - (17491451747944128766ULL))))), ((((~(3999898458327395997ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_1] [i_0])))))))) : (((/* implicit */unsigned int) min(((((~(13603677807124210328ULL))) >> (((((arr_18 [i_0] [i_0] [i_0] [i_1]) - (17491451747944128766ULL))) - (18150037698360459785ULL))))), ((((~(3999898458327395997ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_1] [i_0]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            for (int i_9 = 2; i_9 < 13; i_9 += 1) 
            {
                {
                    arr_34 [i_8] [i_8] = ((((/* implicit */_Bool) (short)20510)) ? (((/* implicit */int) (short)13930)) : ((-(((/* implicit */int) (short)13470)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        for (int i_11 = 4; i_11 < 12; i_11 += 3) 
                        {
                            {
                                arr_41 [i_11 - 1] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 18446744073709551600ULL)))) : (((((/* implicit */_Bool) 17996806323437568ULL)) ? (3307570296U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12760))))))), (((/* implicit */unsigned int) ((short) 18446744073709551615ULL)))));
                                var_31 = ((/* implicit */short) min((max((((long long int) (short)-28051)), (((/* implicit */long long int) ((unsigned short) arr_2 [i_11 + 2]))))), (((/* implicit */long long int) arr_19 [i_11 + 1] [i_10] [i_0] [i_9 + 1] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_32 &= ((/* implicit */short) arr_17 [(short)8] [i_8] [i_9 - 2] [(short)8] [(short)8] [i_8 + 2]);
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (max((var_1), (((/* implicit */unsigned long long int) 1006617636225274661LL)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) - (min((arr_20 [i_0] [(short)6] [i_0] [i_0] [i_0] [(short)4] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1344366270U)) ? (var_11) : (7U))))))));
    }
    var_34 = ((/* implicit */unsigned long long int) (_Bool)1);
}
