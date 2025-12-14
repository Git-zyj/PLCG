/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78483
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
    var_16 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
    var_17 = ((/* implicit */_Bool) ((int) var_0));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13449))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) var_4)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [5LL] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32380))));
                                var_19 = ((/* implicit */long long int) ((_Bool) ((max((var_3), (((/* implicit */unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 6; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((arr_11 [i_0] [i_0] [i_2] [i_5] [i_6 + 1]), (min((((/* implicit */long long int) arr_18 [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6])), (((((/* implicit */long long int) ((/* implicit */int) (short)-25733))) + (578886274933346070LL)))))));
                                var_21 ^= ((/* implicit */unsigned int) ((-1193278748545116159LL) == (((/* implicit */long long int) ((/* implicit */int) ((short) 578886274933346070LL))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) ((((/* implicit */_Bool) -1193278748545116159LL)) ? (arr_7 [i_0] [i_1] [i_2] [0]) : (var_1)))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) var_12);
                    var_24 = ((/* implicit */unsigned short) (short)-19944);
                    var_25 ^= ((/* implicit */short) ((arr_8 [i_0] [(_Bool)1]) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))), (arr_17 [i_0] [i_1]))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 5019081210377659184LL)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (short)-25733)))))) << (((max((((/* implicit */unsigned int) var_2)), (647785720U))) - (647785701U)))));
    var_27 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3055635218118329284ULL)))))) : (((((/* implicit */_Bool) (short)-9948)) ? (1931363628U) : (((/* implicit */unsigned int) -793798985)))));
}
