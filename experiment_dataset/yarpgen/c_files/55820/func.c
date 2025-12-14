/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55820
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (((+(((/* implicit */int) var_4)))) != (((/* implicit */int) ((var_14) > (((/* implicit */unsigned int) var_5)))))))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) < (var_7)))) != ((-(var_15))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */long long int) (((~(((/* implicit */int) var_2)))) != ((-((-(((/* implicit */int) var_4))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_20 = var_16;
                        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_15) >> (((var_17) + (7021205986405939212LL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_13))))))) << (((((((/* implicit */unsigned int) ((var_5) - (((/* implicit */int) var_8))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_14))))) - (3797854087U)))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) & (((((/* implicit */long long int) ((/* implicit */int) var_12))) % (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((var_11) - (var_11))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))) : (((var_11) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))))))));
                        arr_14 [i_4] [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_10)) & (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (var_7))))))));
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] [i_5] = ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) + (((var_15) - (((/* implicit */int) var_13))))))) + (((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) - (((((/* implicit */long long int) ((/* implicit */int) var_12))) + (var_6))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((var_12) ? (((/* implicit */unsigned int) var_7)) : (var_14)))))) ? (((((var_15) / (var_5))) * (((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))))));
                            arr_20 [i_0] [i_1] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) (((((-(var_7))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18)))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_16) && (((/* implicit */_Bool) var_11)))))) < ((+(var_14))))))));
                            arr_21 [i_6] [i_6] [i_2] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((var_11) != (((((((/* implicit */long long int) ((/* implicit */int) var_18))) >= (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_17)))))));
                        }
                    }
                    arr_22 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_7) : (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_13)))))))) ? (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18)))) | (((((/* implicit */int) var_4)) & (((/* implicit */int) var_3)))))) : (((var_1) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))));
                }
            } 
        } 
        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (var_17)))) << ((((-(((/* implicit */int) var_1)))) + (23))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        var_25 = (((-((+(((/* implicit */int) var_1)))))) > (((/* implicit */int) var_16)));
        arr_27 [i_7] = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) var_2)))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (38)))))))))));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_13))));
        var_27 ^= ((/* implicit */unsigned long long int) var_1);
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) -6032246602821889150LL)) && ((_Bool)1)))) - (((var_12) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16)))))) >> (((/* implicit */int) var_12)))))));
    }
    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 4) 
    {
        var_29 ^= var_0;
        arr_31 [i_8] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-1)) / (((/* implicit */int) (short)22207)))) - ((((+(((/* implicit */int) var_1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    }
    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */int) (((-(var_14))) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) & (((/* implicit */int) ((((((/* implicit */int) var_3)) > (((/* implicit */int) var_4)))) && (((/* implicit */_Bool) var_11))))))))));
}
