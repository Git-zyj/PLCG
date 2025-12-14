/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73356
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_8 [i_1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((unsigned short) var_0))), ((~(-5209028420397044915LL)))))));
                        arr_9 [i_0] [i_0] [i_2 - 3] [i_2 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (var_15)))), (min((arr_6 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */long long int) arr_5 [i_0 - 1] [i_1] [i_1] [i_3 + 1]))))))) && (((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_3] [6U] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))));
                        arr_10 [i_0] [i_0 + 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3584)))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) / (arr_16 [i_0] [i_6] [i_5] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_6]))))))));
                            arr_23 [i_0] [i_6] [i_0] [i_5] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_6] [i_6] [i_7] [i_7] [i_7]);
                            arr_24 [i_0] [i_4 + 1] [i_4] [i_4 - 2] [i_4] [i_4] = ((/* implicit */int) (+(0U)));
                        }
                        var_20 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_9)), (arr_21 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 - 3] [i_0 - 1] [i_5 + 1] [i_4]))), (((arr_21 [i_0] [i_0] [i_5 + 1] [i_4 + 2] [i_0 + 1] [i_5 + 1] [i_0]) - (arr_21 [i_0] [i_4] [i_5] [i_4 + 2] [i_0 + 1] [i_5 + 1] [i_0 + 1])))));
                    }
                    var_21 = ((/* implicit */_Bool) var_8);
                    arr_25 [i_4] [i_0] [i_5] = ((/* implicit */int) 0U);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_13)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (var_16)))) : (((((/* implicit */_Bool) (unsigned short)41565)) ? (var_3) : (var_15)))))))))));
}
