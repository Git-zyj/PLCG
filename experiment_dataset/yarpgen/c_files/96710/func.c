/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96710
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
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253)))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) != (var_5)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    var_15 &= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0 + 2] [i_1 + 3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_1 + 2]))))));
                    arr_6 [(signed char)0] [i_1] [i_1] [i_0 + 1] &= ((/* implicit */signed char) var_0);
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1 - 1]))))))));
                    arr_7 [i_0] [i_1 - 4] [i_0] [i_1 - 4] = ((/* implicit */int) max((max((arr_1 [i_0]), (var_4))), (max((arr_1 [i_0]), (var_0)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (short)-22633))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))) : (max((arr_1 [i_0]), (-7288363769008204533LL)))));
                                var_18 = ((/* implicit */unsigned short) var_1);
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (signed char)60))))), ((-(2053170833U)))))))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_17 [i_0 - 3] [i_0 - 3] [i_5 + 2] [i_0] = (-(((((/* implicit */_Bool) var_11)) ? (6606798033923608288LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 + 3] [i_1 + 2] [i_1 + 1] [i_0 - 1]))))));
                        var_20 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_5 + 1] [i_6])) ? (((/* implicit */long long int) var_11)) : (arr_1 [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_5] [(unsigned char)14] [(short)0])) ? (arr_3 [i_6] [i_6] [i_1]) : (((/* implicit */long long int) var_10))))))));
                        arr_18 [i_0] = ((/* implicit */_Bool) 1899336077U);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_6])) ? ((-(((/* implicit */int) arr_12 [i_1 + 3] [i_1 - 2])))) : (((/* implicit */int) var_6))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_22 [14LL] [i_0] = ((/* implicit */long long int) arr_19 [i_0] [1ULL] [i_0]);
                        arr_23 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [(unsigned char)10] [i_0 + 1] [i_0 - 3] [i_0]))) : (arr_3 [i_0 + 2] [i_1 + 3] [i_0])));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17134)) << (((291852778319741574LL) - (291852778319741569LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)7449)))))) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_20 [i_7] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])), (arr_11 [i_5 + 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) arr_2 [i_0] [i_7])))));
                    }
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((+(var_4))) * (min((((/* implicit */long long int) (_Bool)1)), (var_12)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((12069800146463246593ULL) - (12069800146463246565ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(unsigned char)4] [i_5 + 2]))))) : (((arr_9 [i_0] [i_1 + 3] [7LL] [(unsigned short)0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)9]))))))))))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_12))));
                    var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0 + 2] [i_1 + 1]) % (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((arr_2 [i_0 + 2] [i_1 + 3]) == (arr_2 [i_0 - 2] [i_1 - 3])))) : (((/* implicit */int) var_9))));
                }
                for (short i_8 = 4; i_8 < 24; i_8 += 2) 
                {
                    var_26 = ((/* implicit */int) arr_14 [i_0] [i_1 + 2] [i_0]);
                    var_27 &= ((/* implicit */short) (~((+(((/* implicit */int) var_8))))));
                    arr_27 [i_0] [i_1 + 1] = (i_0 % 2 == zero) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0] [i_1] [i_1] [i_8] [i_8 - 4])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [(_Bool)1])) << (((-8351589595915723499LL) + (8351589595915723505LL)))))) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)94)) || (((/* implicit */_Bool) -4591398557183465798LL))))))) + (49)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0] [i_1] [i_1] [i_8] [i_8 - 4])) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0] [(_Bool)1])) + (2147483647))) << (((((-8351589595915723499LL) + (8351589595915723505LL))) - (6LL)))))) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)94)) || (((/* implicit */_Bool) -4591398557183465798LL))))))) + (49))))));
                }
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    arr_30 [i_1] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (-(var_0)))))));
                    var_28 *= ((/* implicit */unsigned int) var_8);
                }
                var_29 = ((int) var_0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_10 = 2; i_10 < 21; i_10 += 3) 
                {
                    arr_33 [i_0] [i_0] [i_10 + 1] = ((/* implicit */_Bool) var_1);
                    var_30 = ((/* implicit */long long int) (-(((/* implicit */int) (short)28009))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2495700054U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11)))) : (max((-5103543723528715017LL), (((/* implicit */long long int) 996159143))))))));
}
