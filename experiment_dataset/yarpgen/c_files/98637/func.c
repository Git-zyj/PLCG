/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98637
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((min((min((4838282413578292033ULL), (var_2))), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) var_5))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((unsigned long long int) (!(((/* implicit */_Bool) (short)-31579))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)12397))))))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (0U)))) ? (max(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) >= (-6038661794361932365LL)))))) : (-167273422)));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_2);
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned long long int) ((int) min((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))), (((unsigned long long int) (_Bool)0)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_22 ^= ((/* implicit */unsigned int) arr_8 [i_1]);
            arr_10 [3ULL] [i_2] [3ULL] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
        }
        for (short i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_23 ^= ((/* implicit */signed char) min((min((((/* implicit */int) (short)-13151)), (452946398))), (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (short)31578)) || (((/* implicit */_Bool) var_6))))), (arr_0 [i_1 - 1]))))));
            arr_13 [(short)0] [(short)0] [i_3] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)0)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 577431357)) : (((((/* implicit */_Bool) 2131349376U)) ? (17269910285304141239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7873)))))))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) (unsigned short)29851)) : (((/* implicit */int) ((min((arr_12 [i_1]), (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_5)))))))))));
            var_24 *= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [(signed char)4] [i_1 + 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6212))) <= (821909140040385826ULL))))))), (var_2));
            arr_18 [i_4] = ((/* implicit */signed char) ((unsigned int) min((min((var_2), (((/* implicit */unsigned long long int) (short)19222)))), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_4 - 1])))));
            var_25 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */long long int) arr_5 [i_1] [i_4])) : (((((/* implicit */_Bool) (short)-13114)) ? (((/* implicit */long long int) 3836762188U)) : (36028797018963967LL)))))));
        }
        for (short i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            arr_21 [i_1 - 2] [i_5 + 2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (-452946414) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                var_26 = (~(((/* implicit */int) (signed char)87)));
                var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (arr_14 [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)22732)))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)13124))));
                    var_29 ^= ((/* implicit */_Bool) ((var_5) ? (821909140040385826ULL) : (((/* implicit */unsigned long long int) (+(arr_30 [5U] [5U] [i_7] [i_8]))))));
                }
                arr_31 [i_7] [i_1 - 2] [i_7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) arr_14 [i_1 - 1]))));
                arr_32 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_23 [i_5 - 1] [i_5] [i_5]))));
                var_30 = ((/* implicit */short) arr_12 [i_5]);
            }
        }
    }
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        var_31 = ((/* implicit */signed char) max((min(((+(var_19))), (((((/* implicit */_Bool) 3474538987731726040ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_34 [i_9]))))), (((/* implicit */unsigned int) max((var_1), ((short)(-32767 - 1)))))));
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)5097)), (arr_35 [i_9] [i_9])))) ? ((+(4669373250433523149ULL))) : (((/* implicit */unsigned long long int) max((arr_33 [i_9] [i_9]), (arr_34 [i_9])))))))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */long long int) var_3)), (8589410304LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)31579)), (arr_34 [i_9])))))))));
    }
    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_14))));
    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) | (12750482487840038984ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))), (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) 444255638)) : (14687561769734973890ULL))), (((/* implicit */unsigned long long int) (~(0)))))))))));
}
