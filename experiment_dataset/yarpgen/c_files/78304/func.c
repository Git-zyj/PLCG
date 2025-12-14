/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78304
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((unsigned char) arr_2 [i_0] [19ULL]);
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [10])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) : (min((((/* implicit */long long int) (_Bool)1)), (var_2)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_10)))))) : (max((max((((/* implicit */unsigned long long int) 92267949)), (var_3))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (var_3)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) arr_12 [(short)10] [(_Bool)1] [(unsigned char)11] [i_2 - 3]);
                                arr_16 [i_1] [i_1] [(signed char)2] [i_1] [i_3] [i_4] [2] = ((/* implicit */long long int) var_13);
                                arr_17 [i_2] [i_2] [i_3 - 1] [i_4] [(_Bool)1] &= ((/* implicit */long long int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [(_Bool)1] [(unsigned char)3] [i_3 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_12 [i_5] [i_3 + 1] [i_3 + 1] [i_2 - 1])) : (((/* implicit */int) arr_12 [i_5] [i_5 - 1] [i_3 + 1] [i_2 - 2])))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) min(((~(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64718)) * (((/* implicit */int) arr_6 [i_1])))))));
                }
            } 
        } 
    } 
}
