/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56671
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)148)))), (((/* implicit */int) min((var_1), (((/* implicit */short) var_0)))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [(unsigned char)2]))) == (min((max((4294967295U), (var_11))), ((~(arr_1 [i_0] [i_2])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0 + 1] [i_1]))));
                        arr_12 [(signed char)4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (arr_7 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        arr_16 [(signed char)9] [(signed char)9] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))));
                        var_15 = -1199741906;
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1554348456U)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)45711)))) : (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_1))))));
                        var_17 = ((/* implicit */_Bool) arr_2 [i_2] [i_4]);
                        var_18 = (~(((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25773))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (!(((_Bool) var_3))));
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
}
