/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76516
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
    var_16 = ((/* implicit */unsigned short) ((signed char) var_14));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-5))))) <= (var_3))))));
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) var_0);
            var_19 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_1]))))) - (var_15)));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3]))))), ((~(268435455)))));
                            var_21 = ((/* implicit */int) ((unsigned short) (+(arr_2 [i_4 + 1] [i_4]))));
                        }
                        for (int i_5 = 2; i_5 < 20; i_5 += 3) 
                        {
                            var_22 += (+(min(((+(var_15))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))));
                            var_23 += ((/* implicit */short) ((var_4) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned short)58705)) : (min((-1), (((/* implicit */int) var_11)))))) - (58684)))));
                            var_24 = ((/* implicit */_Bool) var_10);
                        }
                        for (signed char i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            arr_21 [i_6] [i_6] [15] [i_6] [i_3] [i_6 - 2] [15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_6 - 2] [i_2] [i_6 - 2] [i_6 - 2] [i_3])) ? ((~(((/* implicit */int) arr_11 [i_0] [i_6 - 1] [i_6 - 1] [i_3] [i_3] [i_3])))) : (((/* implicit */int) (unsigned short)6830))));
                            arr_22 [i_0] [i_3] [i_2] [i_3] [i_2] [(unsigned short)13] [i_1] = ((/* implicit */unsigned short) max(((~(var_3))), ((~(((/* implicit */int) var_11))))));
                            arr_23 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)6830), (((/* implicit */unsigned short) var_11)))))))) : (((((/* implicit */long long int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3])) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) : (arr_15 [i_0] [i_0])))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((_Bool) min((((long long int) var_0)), (((/* implicit */long long int) -1))))))));
                            arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */short) ((var_15) == (((/* implicit */long long int) ((/* implicit */int) ((430515444) == (-1561320513)))))))), ((short)0)));
                        }
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-1LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_10 [i_0] [i_0] [5])) - (3782)))))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [i_2])))) : (((((/* implicit */int) (signed char)-9)) - (((/* implicit */int) (signed char)29))))))) ? (max((arr_17 [i_0] [i_3] [(signed char)20] [i_3] [i_2] [i_3]), (arr_17 [i_0] [i_3] [(signed char)16] [i_3] [i_3] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        arr_25 [i_3] = ((/* implicit */long long int) (-(((int) (signed char)8))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) == (((/* implicit */int) var_0)))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])), (arr_14 [i_0] [i_0] [i_0] [i_2] [i_3])))) : (min((var_13), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_0] [i_3] [(signed char)9])))))))));
                    }
                } 
            } 
            arr_26 [i_0] [i_1] [i_0] = ((max((((/* implicit */int) arr_5 [i_1] [i_1] [i_0])), (var_4))) < ((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_28 += ((/* implicit */int) min((arr_17 [12] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
        }
        arr_27 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) var_12)), (var_14)));
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) arr_30 [i_7]);
        var_30 = arr_30 [i_7];
        var_31 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((_Bool)0) && ((!(((/* implicit */_Bool) var_10))))))), (min((min((14303266615875685434ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)0)))))))));
        arr_31 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_28 [i_7])))))) ? (min((((var_5) ? (((/* implicit */int) (unsigned short)6815)) : (((/* implicit */int) (short)-24)))), (((/* implicit */int) ((((/* implicit */int) arr_28 [i_7])) < (var_3)))))) : (((/* implicit */int) var_8))));
        var_32 += arr_28 [i_7];
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((var_1) | (((/* implicit */int) var_5)))))));
        var_34 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)25712))))) <= (((/* implicit */long long int) (~(-1971716865))))));
        var_35 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8] [14LL]))) ^ (var_7)))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_2))))));
        var_36 += ((/* implicit */short) ((unsigned short) ((long long int) arr_33 [i_8])));
    }
}
