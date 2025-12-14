/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9884
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
    var_17 &= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15354)) + (((/* implicit */int) var_13))))) ? ((+(((/* implicit */int) ((_Bool) var_1))))) : ((+(var_11))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (+(arr_8 [i_1])))) : (((long long int) var_11))))) ? (var_11) : (var_11)));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((_Bool) (signed char)-69));
                        var_19 = ((/* implicit */_Bool) (-(var_5)));
                        arr_13 [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) min((((long long int) arr_0 [i_1 + 2])), (((/* implicit */long long int) (((-(1778619007))) / (1778619004))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) (unsigned short)13455);
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (unsigned short)22298)))));
                        arr_18 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [2LL] [i_2])) && (((/* implicit */_Bool) var_2)))), (arr_4 [i_1 - 2]))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 3; i_5 < 14; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */int) min((var_22), (max(((-(((((/* implicit */_Bool) (signed char)67)) ? (2009832225) : (((/* implicit */int) (short)-14721)))))), (((/* implicit */int) ((short) max((((/* implicit */short) (_Bool)1)), (var_12)))))))));
                        var_23 = ((/* implicit */_Bool) ((unsigned int) (~((~(-2009832226))))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 2147483647))))) : ((-(var_11)))));
                        var_25 = ((/* implicit */unsigned int) arr_15 [i_0] [15LL]);
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        arr_26 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((unsigned int) -2009832225)) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_10 [i_0] [i_0] [0] [i_7])))) ? (((((/* implicit */int) var_9)) + (arr_10 [i_0] [(unsigned short)15] [(short)11] [i_7]))) : (((/* implicit */int) (unsigned short)40895)))))));
                        arr_27 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((arr_24 [i_1 - 2] [i_1] [i_1 + 3] [i_1 + 1] [i_1 - 2] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1])))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        arr_30 [i_2] [8LL] [i_2] = ((((((((/* implicit */_Bool) (unsigned short)60956)) ? (((/* implicit */long long int) -1778619007)) : (-3539105446200288464LL))) + (((/* implicit */long long int) var_6)))) * (((/* implicit */long long int) ((/* implicit */int) (!(max(((_Bool)0), ((_Bool)1))))))));
                        arr_31 [i_8] [i_2] [i_1] [i_1 - 2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) max((((/* implicit */int) var_15)), (2009832225))))) ? (((((/* implicit */int) arr_20 [i_8] [i_2] [i_1 + 2] [i_0])) / (((/* implicit */int) arr_20 [i_0] [i_1 + 3] [i_2] [i_8])))) : (max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)))), (((((/* implicit */_Bool) arr_25 [i_8] [i_0] [i_2] [i_2] [1U])) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) var_12))))))));
                        var_26 += ((/* implicit */unsigned short) ((signed char) arr_15 [11LL] [11LL]));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_0] [i_2] [i_0] [i_9] = ((/* implicit */unsigned int) var_16);
                        arr_35 [i_2] [i_1] [11LL] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1] [i_1] [i_1 + 3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) - ((-((+(((/* implicit */int) arr_0 [i_0]))))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) var_9);
    var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
    var_29 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0))));
}
