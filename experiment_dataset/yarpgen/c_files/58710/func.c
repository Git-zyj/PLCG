/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58710
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
    var_14 = ((max((2281892278U), (((((/* implicit */_Bool) var_5)) ? (2281892270U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))) - (var_7));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (arr_0 [i_0 - 2] [i_0 - 1])))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 - 2])) : ((-9223372036854775807LL - 1LL)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 4; i_2 < 18; i_2 += 2) 
        {
            arr_7 [i_1] [i_1] = ((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_6)))))))) | (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (min((arr_6 [i_2] [i_1]), (((/* implicit */unsigned int) var_12)))))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2013075014U))))));
        }
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_4])) ? (((/* implicit */int) var_6)) : (-1885308709)))) ? (arr_10 [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) 0U)) ? (9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) var_1)))) : (((/* implicit */int) var_1))))))))));
                var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (var_8) : (arr_0 [i_1] [(short)0]))))))));
            }
            var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1))))), (var_8)));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) arr_1 [i_5]);
        arr_15 [(signed char)15] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (-1396668067))))));
        /* LoopSeq 2 */
        for (short i_6 = 4; i_6 < 14; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                arr_22 [i_7] [i_7] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_22 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((short)1566), ((short)-11))))));
                    arr_26 [i_6] [i_6] [i_6] = (!(((/* implicit */_Bool) arr_3 [i_5] [i_6 + 2])));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) var_10)), (arr_0 [i_6 + 2] [i_6 - 1]))))))));
                }
                arr_27 [i_5] [i_6 - 4] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) (short)-23))))) % (min((((/* implicit */unsigned long long int) arr_1 [i_7])), (arr_18 [i_5] [i_5])))));
                arr_28 [i_5] [i_6 + 1] [i_5] [i_5] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) 2013075018U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) : (2508175304U))));
            }
            var_24 = ((/* implicit */unsigned long long int) var_12);
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (short)-31697)))))) : (((/* implicit */int) var_1))));
            arr_29 [i_6] |= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) 9223372036854775790LL)), ((-(0ULL))))) == (((((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_5] [i_6]))) & (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_14 [i_6 - 4])))))));
        }
        for (unsigned long long int i_9 = 4; i_9 < 14; i_9 += 3) 
        {
            var_26 *= max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_9] [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 1]))))), (((unsigned int) arr_30 [i_5] [9ULL] [i_9 + 2])));
            arr_34 [i_9] = ((/* implicit */short) (((!(((/* implicit */_Bool) 8714666220494487455LL)))) ? (((arr_9 [i_9 - 4] [i_9 - 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (arr_3 [i_9 + 2] [i_9 - 4])));
        }
        arr_35 [i_5] = ((/* implicit */short) max((max((max((((/* implicit */unsigned long long int) var_0)), (10808648360205909493ULL))), (((/* implicit */unsigned long long int) (short)-22)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (arr_30 [i_5] [i_5] [i_5]))))));
    }
    for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 2) 
    {
        arr_39 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10 + 1] [i_10 - 1]))) : (var_5)))) + (((((/* implicit */unsigned long long int) arr_38 [(unsigned short)15])) - (arr_37 [i_10])))));
        var_27 = ((/* implicit */unsigned int) arr_36 [i_10] [i_10]);
        /* LoopSeq 2 */
        for (long long int i_11 = 1; i_11 < 21; i_11 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
            arr_43 [i_10] [i_10] = ((/* implicit */_Bool) var_0);
            arr_44 [i_10] [i_10] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0)))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 4; i_12 < 21; i_12 += 1) 
        {
            arr_47 [i_10] = ((/* implicit */unsigned int) (_Bool)0);
            var_29 = ((/* implicit */unsigned short) ((arr_38 [i_10 - 1]) < ((-(15872U)))));
        }
    }
}
