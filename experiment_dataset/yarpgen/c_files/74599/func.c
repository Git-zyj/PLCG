/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74599
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
    var_15 ^= ((/* implicit */int) var_7);
    var_16 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = (unsigned short)6048;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (13942972963740787678ULL))), (7770108524894243096ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (18446744073709551615ULL)))))));
                                var_18 -= ((/* implicit */short) var_10);
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_11))));
                            }
                        } 
                    } 
                } 
                arr_14 [14ULL] [i_1] [i_0] = ((/* implicit */int) max((min((4503771109968763935ULL), (((/* implicit */unsigned long long int) -1476281127)))), (((/* implicit */unsigned long long int) ((int) var_5)))));
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 14; i_5 += 2) 
                {
                    for (short i_6 = 3; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((short) min((((17873661021126656ULL) + (((/* implicit */unsigned long long int) 1610612736)))), (((/* implicit */unsigned long long int) var_8)))));
                            arr_20 [i_5] [i_5] [i_5] [(unsigned short)12] [14] [i_6] &= ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */int) (unsigned short)48330)) == (((/* implicit */int) var_1))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -22472246)) ? (((/* implicit */int) (short)28694)) : (((/* implicit */int) (short)28206)))))));
                            arr_21 [i_6] = ((/* implicit */unsigned short) ((max((((/* implicit */int) (short)-21182)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-752717569) : (((/* implicit */int) (unsigned short)65535)))))) == (var_9)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1984)) ^ (((/* implicit */int) (short)28694))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3840)) ? (var_6) : (var_2)))), (4503771109968763923ULL)))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)7104)), (var_5)))), (((unsigned long long int) 1641422231))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (3ULL))))) : (((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_13)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (var_9)))) : (18446744073709551615ULL)))));
    var_23 = ((/* implicit */int) ((unsigned short) -752717559));
}
