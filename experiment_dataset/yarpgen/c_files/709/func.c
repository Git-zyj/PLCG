/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/709
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_7)))))))));
    var_14 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((int) 1398470128U))))) ? (((int) max((((/* implicit */unsigned short) var_1)), (var_11)))) : (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned int) var_9);
                        arr_14 [i_1] [(_Bool)1] [(signed char)2] = ((((1834967460U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))) && (((/* implicit */_Bool) 2147483647)));
                        var_16 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                        arr_15 [i_0] [i_1] [7U] [i_0] = ((/* implicit */int) arr_3 [i_0] [1]);
                    }
                    for (short i_4 = 3; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 2] [i_0] [i_0]))) == (var_3)))))))));
                        var_18 ^= arr_13 [i_0] [(short)3] [i_4 - 2] [i_4];
                        arr_18 [i_0 + 1] [i_1] [i_2] [i_4] [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (arr_3 [(short)8] [i_0 + 1]) : (arr_3 [i_0] [i_0 - 1])))));
                        arr_19 [i_0 - 1] [i_1] [i_0] [(unsigned short)6] &= arr_12 [i_4] [i_0] [i_1] [i_0] [i_0 + 1];
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) (-(arr_20 [i_6] [i_5] [i_2] [(short)6] [i_1] [i_6])));
                                var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7))), (((/* implicit */long long int) ((unsigned int) (!(var_10)))))));
                                arr_25 [i_1] [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_5] [10LL] = ((/* implicit */unsigned char) arr_16 [i_5] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
