/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76528
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((int) var_1)) : (((var_17) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (short)24)) : (((/* implicit */int) (short)-10670)))) : (((/* implicit */int) ((unsigned short) (signed char)-112)))))));
    var_20 |= ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
                    arr_10 [i_1] = ((/* implicit */unsigned char) arr_7 [(unsigned short)13] [(short)6] [i_0]);
                    var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) (~(1783511245U)));
                    var_23 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)127)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 2] [i_1 - 2] [i_1 - 1])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1])) ? (arr_15 [i_4] [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_1 - 1]) : (((/* implicit */int) var_17)))));
                        arr_18 [i_4] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (+(((unsigned int) 2834226789U))));
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (((-(4294967295U))) << (((((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_0])) : ((-2147483647 - 1)))) + (26797))))))));
                        arr_19 [i_1] [i_1] [i_1 - 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned short)65424)) : (((/* implicit */int) (signed char)-101))));
                    }
                    for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        arr_22 [i_5] [i_1] [i_1] [3ULL] = ((/* implicit */unsigned char) max((2307508999297401104LL), (((/* implicit */long long int) 974834004U))));
                        var_25 = ((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2423))) : (2U)))) & (arr_20 [i_5 + 3] [i_5 - 1] [i_5 - 1] [i_1 - 2] [i_1 - 1]))) : (((/* implicit */unsigned long long int) var_12))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3187312999728924289LL)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2305807824841605120ULL)));
                        arr_26 [i_6] [(short)14] [(short)14] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_6 + 1] [i_1 - 1] [i_1]))));
                    }
                    arr_27 [(unsigned short)4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) 0U);
                }
                for (unsigned char i_7 = 2; i_7 < 21; i_7 += 1) 
                {
                    arr_31 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_12);
                    var_27 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)-100))))));
                    arr_32 [i_7] [i_1] [i_1] [(_Bool)1] = ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (short)-32763)) & (((/* implicit */int) arr_28 [i_1] [i_1] [i_1])))) : ((+(((/* implicit */int) (unsigned short)9611))))));
                    arr_33 [i_1] [16LL] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-32766))))));
                }
                for (signed char i_8 = 2; i_8 < 21; i_8 += 1) 
                {
                    arr_36 [i_1] [i_1] = ((/* implicit */_Bool) (((+((((_Bool)1) ? (((/* implicit */unsigned long long int) var_8)) : (var_14))))) - (2305807824841605134ULL)));
                    arr_37 [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_0])) ? (arr_8 [i_1] [i_1]) : (((unsigned long long int) (short)14336))))));
                }
                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (short)1468)))))))));
            }
        } 
    } 
}
