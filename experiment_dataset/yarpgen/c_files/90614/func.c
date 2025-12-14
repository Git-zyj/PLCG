/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90614
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
    var_20 = ((/* implicit */short) max((max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_5)))), (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */long long int) var_1)) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_21 += var_9;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_4 [(unsigned short)6] [(unsigned short)6] |= ((/* implicit */_Bool) ((long long int) ((unsigned int) var_7)));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((min((((unsigned long long int) arr_1 [i_0 - 1])), (((/* implicit */unsigned long long int) ((arr_3 [i_0] [0ULL]) - (((/* implicit */long long int) var_1))))))), (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
        }
        for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_2 + 2])))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) (_Bool)1)))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_0] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0 - 1]))))));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-((-(((/* implicit */int) (short)13691)))))))));
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))) << (((max((((((/* implicit */unsigned long long int) 5U)) * (0ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2] [i_2 - 2]))))))) - (18446744073709551461ULL))))))));
                var_26 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_2 - 1])))));
                var_27 = ((/* implicit */int) max((var_27), (var_1)));
            }
            var_28 = ((/* implicit */unsigned short) var_14);
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))));
            arr_14 [i_0] [i_0] = var_3;
            var_30 += ((/* implicit */unsigned short) ((18446744073709551592ULL) << ((((((_Bool)1) ? (-10LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (47LL)))));
        }
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_31 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_19)), (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_9) : (arr_17 [i_0] [i_5] [12ULL])))))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 9U);
                        var_32 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])) ? (((unsigned int) (short)0)) : (((((/* implicit */_Bool) arr_15 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_26 [2] [i_8] |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((((/* implicit */_Bool) arr_3 [i_8] [(unsigned short)14])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_12 [i_8] [i_8] [17LL]))) : (((/* implicit */unsigned long long int) arr_22 [i_8] [i_8])))));
        var_33 += ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8]))));
        arr_27 [i_8] [8LL] &= ((/* implicit */short) arr_16 [i_8] [i_8] [i_8]);
    }
    /* vectorizable */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_34 = var_10;
        var_35 |= ((/* implicit */_Bool) arr_1 [i_9 - 1]);
    }
}
