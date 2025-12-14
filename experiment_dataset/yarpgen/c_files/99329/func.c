/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99329
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
    var_17 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) 14185751051063281211ULL))));
                        arr_12 [i_3] [(short)11] [1LL] [i_1] [10ULL] = ((/* implicit */int) var_15);
                        arr_13 [i_3 - 2] [i_1 + 1] [i_1 + 1] [14LL] = ((/* implicit */short) 4260993022646270402ULL);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((-499352611) + (arr_6 [i_0]))))))))))));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_4 [i_2]))));
                        arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_9 [i_2])) / (var_15)));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 85343882))) ? (((16204202535988138493ULL) - (8982032794188048686ULL))) : (((/* implicit */unsigned long long int) (-(132400652))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [8LL] [i_4] [i_4] [i_0])) + (4260993022646270402ULL)))) ? (arr_7 [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) var_16)))) : (max((((((/* implicit */unsigned long long int) 6986879855776333642LL)) + (arr_4 [i_1 + 1]))), (((/* implicit */unsigned long long int) var_13))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > (arr_5 [i_1] [i_1] [2LL]))))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_6] [0ULL] [8] [i_6] [8] = ((/* implicit */short) ((((((/* implicit */_Bool) -499352595)) ? (((/* implicit */unsigned long long int) 1372211760841597117LL)) : (((unsigned long long int) 7602705965378665072ULL)))) ^ (((/* implicit */unsigned long long int) -2044072596))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 590412886028106659LL)) ? (525182607) : (132400638)))) ? (278134947) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1794439234222379331LL)) ? (arr_1 [i_0] [i_0]) : (-2808915362266428071LL)))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))));
                                var_24 = ((/* implicit */short) min((arr_18 [i_6] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_2]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max(((~(arr_18 [15ULL] [15ULL] [i_1 + 1] [15ULL]))), (arr_5 [i_0] [i_1 - 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 15; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (short)-23597))));
                                var_27 = -590412886028106685LL;
                                arr_27 [i_8] [i_1] [10LL] [i_2] [i_1] [i_1] [i_0] = var_8;
                                var_28 = ((/* implicit */int) ((((9747626059924403584ULL) << (((2808915362266428076LL) - (2808915362266428019LL))))) & (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) (short)-532)) && (((/* implicit */_Bool) ((long long int) 16534413948285931264ULL))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            {
                                arr_39 [i_9] [i_9] [i_12] = arr_4 [i_10];
                                var_30 = var_3;
                                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((var_0) * (var_0))))));
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_22 [10LL] [10LL] [i_11] [10LL]))));
                                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((-2808915362266428077LL) < (2807293554967098075LL))))));
                            }
                        } 
                    } 
                    arr_40 [i_10] = ((/* implicit */long long int) ((-590412886028106660LL) < (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) 267386880))));
                }
                for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    arr_43 [15] [i_10] [i_14] [i_10] = ((arr_26 [i_9] [(short)15] [(short)15] [i_9] [i_9]) + (((/* implicit */unsigned long long int) 5816687257383008856LL)));
                    var_35 = ((/* implicit */long long int) ((short) (+(var_5))));
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        for (short i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */int) max((var_36), (var_11)));
                                var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 6620917441835374357LL)) != (9694565528435974109ULL)));
                                arr_50 [i_14] [14LL] [0ULL] [i_15] [i_15] = var_13;
                                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_41 [i_15] [i_16] [(short)6]))));
                            }
                        } 
                    } 
                }
                var_39 = ((/* implicit */short) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_10]);
            }
        } 
    } 
    var_40 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        for (long long int i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            {
                var_41 = ((/* implicit */int) ((((/* implicit */long long int) -1107943508)) % (1073725440LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    for (long long int i_20 = 0; i_20 < 19; i_20 += 1) 
                    {
                        {
                            arr_61 [i_19] [i_18] = ((/* implicit */int) var_4);
                            arr_62 [i_19] [i_19] = 70368744176640ULL;
                            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_20] [i_19] [i_18] [i_17]))) : (((((/* implicit */long long int) (-2147483647 - 1))) - (-590412886028106668LL))))))));
                            arr_63 [i_20] [i_19] [i_18] [i_19] [i_17] = ((/* implicit */int) (((((~(6756781474986396368ULL))) & (((/* implicit */unsigned long long int) arr_55 [i_17])))) * (((/* implicit */unsigned long long int) min((arr_54 [i_17] [i_18] [i_19]), (((/* implicit */int) (short)32753)))))));
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 70368744176640ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
