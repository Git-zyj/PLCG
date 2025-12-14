/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81552
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
    var_15 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(var_11))) == (((unsigned long long int) var_13)))))) : (var_5));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((((arr_0 [i_0 - 3] [i_0]) + (arr_0 [i_0 - 1] [i_0]))) <= (((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_0 + 1] [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(var_0))), (((/* implicit */long long int) ((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)9462))))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)37486))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0 + 2] [i_0])))));
    }
    for (long long int i_1 = 3; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) arr_1 [(_Bool)1]);
        arr_5 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) 2102716976U)), (((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((((/* implicit */_Bool) min((4256519768393312275LL), (((/* implicit */long long int) (signed char)-10))))) ? (-4256519768393312267LL) : (((/* implicit */long long int) arr_3 [2ULL] [i_1 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        arr_7 [i_1] = ((/* implicit */int) var_12);
    }
    for (long long int i_2 = 3; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) var_5))), (((unsigned long long int) -4256519768393312273LL))));
        var_18 = ((/* implicit */long long int) min((((unsigned long long int) 2784169850U)), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_0 [i_2] [i_2])))))))));
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) (+(var_1)));
                        arr_18 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */long long int) var_3);
                    }
                } 
            } 
            arr_19 [(signed char)4] [10LL] &= min((((unsigned long long int) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3 + 1])))))), (((/* implicit */unsigned long long int) -8630809192387150188LL)));
            var_20 = ((/* implicit */unsigned short) ((unsigned int) arr_15 [i_3] [i_3] [i_3] [6LL] [10]));
        }
        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            var_21 *= ((/* implicit */long long int) ((18446744073709551599ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6])))));
            arr_24 [i_2] [i_6] = ((/* implicit */unsigned short) min((2435347158771347324LL), (((/* implicit */long long int) (signed char)-61))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_22 = (-(18446744073709551599ULL));
                            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                            var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)17453));
                            arr_33 [i_7] [i_7] [i_7] [i_6] [i_2] [i_8] = ((/* implicit */signed char) (unsigned short)30645);
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */_Bool) -8630809192387150188LL);
    }
}
