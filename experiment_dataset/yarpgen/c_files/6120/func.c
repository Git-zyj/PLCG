/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6120
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9))) != (var_10))))))) ? (min((((/* implicit */unsigned long long int) var_5)), (((var_2) - (var_10))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1454182159)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_12)))))));
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((unsigned long long int) var_1)))))));
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) var_6)))) / (((var_7) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (var_6))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) var_2);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_17 -= ((/* implicit */int) (-(((((/* implicit */long long int) (-(arr_6 [i_2])))) * (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) / (var_8)))))));
                        var_18 = 1649623201;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10)) ? (((/* implicit */int) (unsigned char)95)) : (1454182175))))));
                            arr_15 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) (~(max((1780623697258093814LL), (((/* implicit */long long int) var_6))))));
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 1]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_21 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_14 [1] [i_1] [i_0] [i_1] [i_3 - 1]) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5])));
                            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) arr_17 [i_3 - 1] [i_3 + 1] [i_5])) * (((/* implicit */int) arr_17 [i_3 + 1] [i_3 - 1] [i_1]))))));
                            var_23 *= ((/* implicit */unsigned long long int) arr_3 [i_3 + 1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_1] [i_2] = ((/* implicit */short) var_2);
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((var_10) / (((/* implicit */unsigned long long int) arr_1 [i_2] [i_6 - 1])))))));
                        }
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [7ULL] [8ULL] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9)))))) ? (max((((/* implicit */unsigned long long int) var_8)), (18446744073709551603ULL))) : (max((var_7), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)12052)), (arr_8 [i_0] [9ULL] [i_0])))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [6LL] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_26 = max((((/* implicit */unsigned long long int) ((unsigned char) var_8))), (var_7));
}
