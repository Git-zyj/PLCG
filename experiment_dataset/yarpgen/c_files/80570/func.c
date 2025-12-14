/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80570
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = arr_6 [i_2] [i_1] [i_0];
                    arr_8 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 142146671))) ? (((((/* implicit */_Bool) ((3660732936513730186LL) | (3660732936513730186LL)))) ? (arr_5 [i_1]) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) 802890493U)) : (arr_1 [1U] [i_2]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) -142146659)), (arr_5 [i_1])))) ? (((/* implicit */long long int) arr_2 [4U] [i_2] [i_2 + 1])) : (min((arr_0 [i_0] [i_1]), (((/* implicit */long long int) arr_6 [i_0] [i_1] [13U]))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_3] = arr_2 [i_3] [i_1] [i_0];
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3])) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1] [7LL])) ? (arr_5 [i_0 - 1]) : (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_3])))) : ((+(-3660732936513730189LL)))));
                    var_13 *= 2754227070U;
                    var_14 = ((/* implicit */int) var_3);
                }
                for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [0U] [i_4])))))))) ? (((((((/* implicit */unsigned int) var_2)) >= (611149330U))) ? ((+(arr_13 [i_0] [i_1] [i_1] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 710239328)) > (2754152797900984128LL))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_16 *= ((/* implicit */unsigned int) ((((arr_0 [i_0 + 1] [i_1]) | (max((((/* implicit */long long int) var_0)), (var_4))))) << ((((((!(((/* implicit */_Bool) -1001464242693420163LL)))) ? (var_3) : (max((((/* implicit */unsigned int) -142146667)), (2588451309U))))) - (4152820625U)))));
                    arr_15 [i_4] [i_1] [i_4] [i_4] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2588451304U) : (0U));
                }
                var_17 = ((/* implicit */long long int) var_5);
                arr_16 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_1]))));
                var_18 = ((/* implicit */int) 964115515U);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((int) -9223372036854775798LL)) > (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1593175910)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [6U]))) : (-5242902913124250457LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) arr_17 [i_5]))))))));
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) (~(1593175910)));
        arr_21 [i_5] = ((/* implicit */unsigned int) arr_18 [i_5]);
        var_19 = ((/* implicit */long long int) arr_18 [i_5]);
    }
}
