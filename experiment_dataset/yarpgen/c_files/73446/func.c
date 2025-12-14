/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73446
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) (unsigned short)18903)))) : (((/* implicit */int) arr_1 [i_1]))));
                    var_11 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-101)) >= (2080768)))), (((unsigned int) 319049123U))));
                    arr_8 [(_Bool)1] [i_1] [1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & (0LL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_2] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */int) var_0)))));
                }
                for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */short) 0U);
                        arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4 + 1] = ((/* implicit */unsigned short) ((int) (signed char)28));
                        var_12 = ((((/* implicit */int) ((unsigned char) -2013510421))) << (((((arr_3 [i_4 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))))) - (64592614451117634LL))));
                        arr_15 [i_0] = ((/* implicit */signed char) (-(1015808)));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967292U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32760)))))))) ? (((int) min((4809494809750648519LL), (((/* implicit */long long int) var_2))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_3 + 1] [i_5])) : (((/* implicit */int) var_0))))));
                        var_14 = ((/* implicit */unsigned int) min(((-((+(((/* implicit */int) (short)(-32767 - 1))))))), ((+(((/* implicit */int) arr_16 [(unsigned char)4] [i_3 + 2] [i_3 - 1] [i_5] [13]))))));
                        var_15 = ((/* implicit */unsigned int) ((arr_9 [(_Bool)1] [i_0] [i_0]) & (((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) 1959855629U)) ? (((/* implicit */unsigned long long int) -2147483646)) : (var_7))) : (((/* implicit */unsigned long long int) arr_6 [i_3 - 1] [i_3 + 2] [(_Bool)1] [i_3 + 2]))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_16 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) + (-582808065)))));
                        var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) (short)32760))));
                    }
                    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (6096312403339899763ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3968)))))))))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) var_3)))), (((((arr_19 [3ULL] [i_1] [i_3] [i_3 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))))))));
                }
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    arr_23 [i_0] [i_1] [i_1] [11ULL] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) max(((signed char)-126), ((signed char)-32)))))));
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((_Bool) min((arr_3 [i_7]), (((/* implicit */long long int) 3012025894U))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (unsigned char)142))))))));
                }
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((signed char) 10U))) <= (arr_12 [i_0] [0LL] [i_0] [i_0] [i_0] [i_0])))) >> ((((-(((/* implicit */int) (unsigned char)247)))) + (256))))))));
                arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-32749)) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (var_9))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned long long int) var_7));
}
