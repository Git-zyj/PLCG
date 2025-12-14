/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62419
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    var_12 *= ((/* implicit */short) (~(((int) var_1))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_2]) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [5]))))))) + (330499566395771353LL)));
                }
                for (int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) -1)) ? (330499566395771363LL) : (4277702012607576859LL))));
                                var_14 = ((/* implicit */long long int) arr_4 [(short)0] [9]);
                                var_15 = ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) var_11)) : (var_8));
                                arr_18 [i_1] [7LL] [8LL] [i_1] [i_1] = ((((((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_0])) ? (arr_13 [i_0] [i_0] [i_0] [(short)7] [i_0]) : (arr_1 [i_0]))) - (((var_0) | (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) != (((/* implicit */int) arr_16 [i_0] [0LL] [i_3] [i_4] [(short)1]))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)38054)) ? (var_6) : (var_5))) : (((/* implicit */int) (short)0))))));
                }
                for (int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_6]);
                    arr_23 [i_0] [i_1] [i_6] [i_6] |= ((/* implicit */long long int) (~((~(((/* implicit */int) ((var_6) != (arr_6 [(unsigned short)6] [i_6] [i_6] [i_6]))))))));
                }
                for (int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    arr_26 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])), ((~(-6569904285980252673LL)))));
                    var_18 = ((/* implicit */short) max((var_18), (arr_11 [i_1])));
                }
                var_19 = ((/* implicit */int) (+(((((/* implicit */long long int) (+(((/* implicit */int) arr_19 [(unsigned short)7] [(short)4] [i_1]))))) + (max((((/* implicit */long long int) arr_22 [i_1] [i_1] [i_1] [i_0])), (arr_7 [i_1] [i_1] [i_1])))))));
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)32764))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_22 [(short)8] [i_0] [i_0 - 1] [i_0 + 1]), (arr_22 [4LL] [i_0] [i_0 + 1] [i_0 + 2]))))) : ((+(330499566395771353LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (~(-5384491415482748780LL)));
    var_22 = (unsigned short)51663;
}
