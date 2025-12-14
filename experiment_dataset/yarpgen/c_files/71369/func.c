/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71369
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
                var_14 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) >= (((/* implicit */int) (signed char)125))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 14; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        arr_17 [i_5] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_13 [i_5] [i_4] [i_3] [i_2])))) | (arr_6 [i_3 - 1])))) % ((~(min((((/* implicit */unsigned int) (unsigned short)65530)), (2146923080U)))))));
                        var_16 = arr_15 [i_3] [i_3] [i_4] [i_5];
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            var_17 = ((/* implicit */_Bool) (unsigned char)2);
            var_18 = ((/* implicit */unsigned long long int) (~(max((min((((/* implicit */unsigned int) var_10)), (2025843659U))), (((/* implicit */unsigned int) (unsigned char)24))))));
            var_19 = ((/* implicit */unsigned int) (unsigned char)24);
            /* LoopNest 2 */
            for (long long int i_7 = 2; i_7 < 15; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((unsigned char) -952520892)))))))));
                            var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)6))))))), (min((((var_8) >> (((((/* implicit */int) (unsigned short)25214)) - (25183))))), (((/* implicit */long long int) arr_15 [i_2] [i_6] [i_7] [i_8]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 1; i_10 < 13; i_10 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3460))));
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_31 [i_2] [i_6] [i_7] [i_7] [i_2] [i_7]))))));
                        }
                        arr_32 [i_7] [i_6] [i_6] = ((/* implicit */long long int) arr_30 [i_2] [i_2] [i_2] [i_2] [i_7]);
                        var_24 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) -1073741824)) ? (2269123636U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61)))))), (((((/* implicit */_Bool) var_7)) ? (3585411775991310885LL) : (((/* implicit */long long int) 1U)))))) + (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_15 [i_8] [i_8] [i_8] [i_7 - 2])), (1778524002U))))));
                        var_25 = 2269123636U;
                        arr_33 [i_2] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((6306212506178051815LL) << (((144097595889811456ULL) - (144097595889811456ULL))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65517)) != (-1804557770)))))))) ? (min((arr_12 [i_7 - 1] [i_7] [i_6 - 2]), (arr_12 [i_7 - 1] [i_7] [i_6 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2413099647780718183LL) != (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8] [i_7] [i_6])))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_29 [i_6])), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2025843653U)))) % (11055403231929524843ULL)))));
        }
        var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_2])) + (((/* implicit */int) var_12))));
    }
}
