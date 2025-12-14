/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80801
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - ((((+(-1998669865))) - (((((/* implicit */int) var_0)) + (((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))))) / (3140727191U)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_18))))));
        var_21 -= ((/* implicit */_Bool) (((((-(((/* implicit */int) var_6)))) + (2147483647))) << (((((((/* implicit */int) (unsigned short)65535)) >> (((1154240104U) - (1154240094U))))) - (63)))));
        arr_9 [i_1] [i_1] = (short)3795;
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 0))));
                arr_15 [(_Bool)1] [i_2] [i_3] = ((/* implicit */long long int) ((1998669864) | (-7)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_6))))));
                        arr_21 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */short) (((~(var_11))) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 501600400U)) ? (((/* implicit */unsigned long long int) 1597434733U)) : (18446744073709551615ULL))))));
                    }
                    for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */short) var_11);
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_27 [i_2] = ((/* implicit */short) ((unsigned char) (-(var_18))));
                            var_26 = ((/* implicit */unsigned short) arr_24 [11LL] [11LL] [i_4] [i_7]);
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_9))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((_Bool) arr_20 [i_8 + 2] [i_8] [i_2] [i_3] [i_8] [i_6])))));
                        }
                        var_30 = ((/* implicit */unsigned int) 3ULL);
                    }
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12341)) ? (3018073852U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3774))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                {
                    var_32 -= ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)0), (var_13)))) > (((/* implicit */int) (!((_Bool)0))))));
                    arr_34 [i_2] [i_3] [i_9] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) == (((/* implicit */int) ((signed char) 1154240104U))))));
                    arr_35 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 5326083625626393082LL)) ? (((/* implicit */int) (_Bool)0)) : (6))));
                }
            }
        } 
    } 
}
