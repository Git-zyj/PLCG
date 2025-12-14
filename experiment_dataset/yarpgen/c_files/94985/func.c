/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94985
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [(unsigned char)0] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1])) : (816410270)))) : (2476123610149053986LL)))) / (((min((var_3), (((/* implicit */unsigned long long int) 1620500144)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_11 -= ((/* implicit */int) ((((/* implicit */_Bool) 559048406U)) ? (((/* implicit */unsigned int) (((-(1916668355))) / (((var_9) / (((/* implicit */int) (unsigned char)84))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [7] [(unsigned short)4] [i_3 - 2])) * (((/* implicit */int) var_4))))) + (((1156424320U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2])))))))));
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_10))));
                            arr_12 [i_0] [i_2] [i_2] [i_3 + 1] |= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 - 1])) >> (((((/* implicit */int) arr_4 [i_0 + 1])) - (3088)))))) < (-1415207605846794482LL)));
                        }
                    } 
                } 
                arr_13 [2LL] [i_1] [2LL] &= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((382498349) <= (((/* implicit */int) (short)-18253))))), (11156063064080808465ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_11 [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            {
                arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) arr_19 [i_4] [i_4] [i_4]);
                arr_23 [i_4] [i_4] = (i_4 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (arr_21 [i_5] [i_4] [i_4]))) >> (((((((/* implicit */_Bool) arr_21 [i_5] [i_4] [i_4])) ? (arr_21 [i_5] [i_4] [i_4]) : (arr_21 [i_4] [i_4] [17]))) - (17474353975523178688ULL)))))) : (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (arr_21 [i_5] [i_4] [i_4]))) >> (((((((((/* implicit */_Bool) arr_21 [i_5] [i_4] [i_4])) ? (arr_21 [i_5] [i_4] [i_4]) : (arr_21 [i_4] [i_4] [17]))) - (17474353975523178688ULL))) - (4760809215816554613ULL))))));
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_9)) <= (arr_21 [i_5] [i_5] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_4] [(unsigned char)3])) < (((/* implicit */int) var_8)))))) : (min((-2476123610149053993LL), (((/* implicit */long long int) (unsigned char)171))))))) ? (((/* implicit */unsigned long long int) max(((~(var_6))), (min((arr_5 [i_4]), (var_10)))))) : (max((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (unsigned char)63))))), (max((var_3), (((/* implicit */unsigned long long int) var_9)))))))))));
                arr_24 [18] [i_4] [18] = ((/* implicit */unsigned int) (unsigned char)17);
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) -382498352))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((int) 382498353)) : (min((var_0), (var_6)))))) : (11156063064080808465ULL)));
            }
        } 
    } 
}
