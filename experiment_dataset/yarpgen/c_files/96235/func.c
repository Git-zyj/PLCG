/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96235
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
    var_16 = ((/* implicit */unsigned long long int) (-(((1LL) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (13LL)))))));
    var_17 = ((/* implicit */unsigned long long int) (unsigned char)12);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (1483858096U))))))) >> (((var_1) + (8329673715061995887LL)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 7; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 2314824684040047495LL))));
                                var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (13510798882111488ULL) : (((/* implicit */unsigned long long int) arr_8 [i_2] [(unsigned char)5] [i_2] [i_3]))))));
                                var_22 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((short) 14LL))) : ((+(arr_10 [i_1] [i_1])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-32))));
                }
                for (unsigned char i_5 = 2; i_5 < 7; i_5 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1609793920U)) ? (arr_15 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    var_25 = (~(((2938847664015714960ULL) / (min((((/* implicit */unsigned long long int) var_13)), (arr_0 [i_0]))))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_5 + 3])))) <= (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)13)), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) min((((/* implicit */short) arr_9 [i_1] [i_1] [i_1] [i_1])), ((short)15)))))))))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_9 [i_1] [i_1] [8U] [i_5])))))) ? (max((((((/* implicit */_Bool) var_8)) ? (-28LL) : (((/* implicit */long long int) 562413736)))), (((/* implicit */long long int) ((((/* implicit */long long int) 1097553183U)) == (arr_12 [i_1])))))) : ((~(arr_7 [i_0])))));
                }
            }
        } 
    } 
}
