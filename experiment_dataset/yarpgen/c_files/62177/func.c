/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62177
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
    var_15 = ((/* implicit */int) max((var_15), ((~(((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */int) (!(max(((!(((/* implicit */_Bool) -750976314)))), (var_11)))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) min((((/* implicit */long long int) max((var_14), (var_0)))), (min((arr_1 [i_0]), ((+(arr_2 [(short)7] [(_Bool)0])))))));
                        var_17 = ((/* implicit */_Bool) (~(min((min((-4973689685982595425LL), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), (var_1))))))));
                        var_18 = ((/* implicit */_Bool) (+(min((((/* implicit */int) var_8)), (min((-864090159), (var_6)))))));
                        var_19 ^= min((min((arr_6 [i_0] [i_1] [i_2] [i_3]), (arr_6 [i_0] [i_0] [i_0] [i_0]))), (max((arr_6 [i_0] [5LL] [i_0] [i_0]), (arr_6 [(_Bool)1] [i_1] [i_2] [i_3]))));
                    }
                    for (short i_4 = 2; i_4 < 11; i_4 += 3) 
                    {
                        var_20 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [0] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [0])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_5 + 1] = (-((+(((/* implicit */int) (short)4088)))));
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_5] = (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-1)), ((+(var_5)))))));
                            var_21 += ((/* implicit */long long int) (+((+(((/* implicit */int) arr_6 [i_2] [i_2] [1LL] [i_4 - 1]))))));
                        }
                        for (int i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            arr_24 [(short)1] = ((/* implicit */_Bool) min(((+((+(((/* implicit */int) var_13)))))), (min(((-(268435456))), (((/* implicit */int) min((arr_4 [i_0]), (arr_0 [i_0]))))))));
                            arr_25 [i_0] [i_1] [i_0] [i_4 - 1] [i_6 - 1] = ((/* implicit */short) min((min((((/* implicit */int) var_1)), (min((var_9), (((/* implicit */int) (_Bool)1)))))), ((+((-2147483647 - 1))))));
                            arr_26 [i_6] [i_4 + 1] [i_2] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_14 [i_6 - 1] [i_4 - 2] [i_2] [i_1] [i_0]))))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [0LL] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)2668))))), ((~(arr_16 [i_4] [(_Bool)1] [i_4 + 1] [i_4] [i_4 + 1])))));
                        arr_28 [i_0] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_1)), (arr_12 [i_4 - 2] [i_4] [i_4 - 2] [i_4 - 2])))));
                        arr_29 [i_0] [5] = ((/* implicit */short) min(((+(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) max((var_13), (var_10))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        var_22 = (~((+(var_2))));
                        arr_32 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) min(((_Bool)1), (var_11)))), ((+(((/* implicit */int) (_Bool)1)))))))));
                        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_8 [i_1] [i_2]), (arr_8 [i_1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2]))));
                        arr_35 [i_8] = ((/* implicit */short) (+(((/* implicit */int) var_12))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (short i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (+(min((((/* implicit */int) (_Bool)1)), (var_6)))));
                                arr_42 [i_0] [i_1] [10] [i_9] [i_0] [i_9] [i_9] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_4)), (arr_1 [i_10 + 1]))), (((/* implicit */long long int) (+(var_5))))));
                                var_26 = ((/* implicit */_Bool) max((max((1873386740), (((/* implicit */int) arr_38 [i_9] [i_9] [i_10 - 1] [i_10] [(_Bool)0] [i_10 - 1])))), (min((196608), (((/* implicit */int) arr_38 [i_0] [i_10 + 2] [i_10 - 1] [(short)2] [i_10] [i_10 - 2]))))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (!((_Bool)1)))))))))));
                                var_28 = ((/* implicit */short) (+(min((((/* implicit */int) min((var_1), (((/* implicit */short) (_Bool)1))))), (min((1732898667), (((/* implicit */int) arr_33 [i_10]))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) (~(max(((~(((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_2])))), (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    } 
    var_30 += ((/* implicit */int) var_10);
}
