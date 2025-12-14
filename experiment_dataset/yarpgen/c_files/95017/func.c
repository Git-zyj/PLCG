/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95017
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
    var_16 = var_8;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0 - 1] [i_0] [i_1]), (var_15)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0] [i_1]))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) var_0))), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1] [i_0] [i_0])))) : (0ULL)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) ((int) -46075329));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) << (((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (var_3))) - (5124245083682443998LL)))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)11781), ((unsigned short)0)))) ? (((/* implicit */int) ((short) arr_11 [i_0 - 1] [i_0 - 1] [i_4 - 1] [i_4 - 2] [i_1]))) : (((/* implicit */int) max((arr_5 [i_0 + 1] [i_0 - 1] [i_0] [i_1]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_1]))))));
                            arr_13 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 + 3] [i_1] [i_4 + 3] [i_0 + 1] [i_4 + 3] [i_5])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (max((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) (unsigned short)3611))))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] [i_1] = ((/* implicit */unsigned short) (unsigned char)34);
                        }
                        var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (arr_9 [i_1] [i_2] [i_1] [i_1] [i_1]))) == (var_9)));
                    }
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_22 ^= (((!(((/* implicit */_Bool) (short)14039)))) ? (max((max((arr_0 [i_2]), (arr_7 [i_0] [i_0] [i_0] [i_6]))), (min((var_12), (arr_7 [i_0] [i_1] [i_2] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33554))) != (((((/* implicit */_Bool) arr_3 [i_6] [i_1] [i_0])) ? (arr_9 [i_6] [i_1] [i_2] [i_6] [i_1]) : (var_14))))))));
                        arr_17 [i_6] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)11801)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53754)))));
                        var_23 = ((/* implicit */long long int) max((var_23), (-7230060074841521776LL)));
                        arr_18 [i_6] [i_1] [i_6] [i_1] [i_2] [i_6] = ((/* implicit */short) ((signed char) ((unsigned short) (unsigned short)0)));
                    }
                }
            } 
        } 
    } 
}
