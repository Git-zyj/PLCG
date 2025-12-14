/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87799
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
    var_17 = max((max((((7491957463382789271LL) & (var_10))), (((((/* implicit */_Bool) 5808782291651137293LL)) ? (-7491957463382789272LL) : (-5808782291651137281LL))))), (((((/* implicit */_Bool) var_13)) ? (max((var_2), (842759913738857803LL))) : ((+(var_15))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((arr_2 [i_0]) - (var_8));
        var_18 = ((var_6) & (arr_2 [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_19 = ((long long int) ((((arr_2 [i_1]) > (var_5))) ? (((arr_1 [i_1] [i_1]) / (arr_6 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) < ((-9223372036854775807LL - 1LL))))))));
        var_20 += ((/* implicit */long long int) (((~(3524214231402611085LL))) > (((long long int) var_3))));
        var_21 = (((~((-(var_15))))) % (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (max((var_0), (arr_0 [i_1] [i_1]))) : (842759913738857787LL))));
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 9223372036854775798LL)))) && (((/* implicit */_Bool) max((var_1), (arr_8 [i_2]))))))), (var_4)))));
        var_23 = ((((((/* implicit */_Bool) arr_8 [i_2])) ? (var_14) : (((long long int) arr_8 [i_2])))) / (-5765515210886353423LL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            arr_13 [i_3] = ((var_15) % (var_16));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) var_7))));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_25 = ((((((/* implicit */_Bool) 7525558617029727814LL)) && (((/* implicit */_Bool) 842759913738857772LL)))) ? ((~(6969657864464403625LL))) : (((long long int) 7826438223390330029LL)));
                            arr_22 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) arr_9 [i_2])) ? ((-(var_13))) : (arr_9 [i_2]));
                            var_26 = ((arr_9 [15LL]) - (((long long int) 9223372036854775807LL)));
                            var_27 ^= arr_16 [i_6] [i_4] [i_4] [i_2];
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 4624489654946589048LL))) || (((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6])))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4436963983549001809LL)) || (((/* implicit */_Bool) -842759913738857801LL)))))) : (((var_3) - (arr_28 [i_2] [12LL])))))));
                var_30 = ((/* implicit */long long int) max((var_30), (((((/* implicit */_Bool) arr_19 [2LL] [i_7] [i_8] [i_2] [i_8] [i_2])) ? (((arr_28 [i_2] [i_7]) | (7036706718119776506LL))) : ((~(arr_18 [11LL] [4LL] [4LL] [i_7] [i_2] [i_2])))))));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    arr_33 [17LL] [i_7] [i_8] = var_8;
                    var_31 ^= ((long long int) ((((/* implicit */_Bool) 6LL)) ? (7036706718119776506LL) : (var_15)));
                }
                /* LoopSeq 4 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    arr_36 [14LL] &= -7525558617029727825LL;
                    var_32 = (~(((((/* implicit */_Bool) arr_12 [i_2])) ? (var_1) : (arr_17 [i_10] [i_7] [i_10] [i_8] [i_7] [i_2]))));
                    arr_37 [i_2] [14LL] [i_2] &= ((((/* implicit */_Bool) arr_17 [6LL] [0LL] [i_7] [i_7] [0LL] [i_10])) ? (arr_17 [i_2] [16LL] [i_8] [i_10] [i_8] [14LL]) : (arr_17 [i_10] [18LL] [i_8] [i_8] [18LL] [i_2]));
                }
                for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_33 = arr_8 [i_2];
                    var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    arr_40 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                }
                for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    var_35 = ((/* implicit */long long int) max((var_35), (((((long long int) var_11)) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    var_36 = var_16;
                }
                for (long long int i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    arr_46 [i_7] [1LL] [i_7] [i_7] [i_7] [i_7] = -7491957463382789271LL;
                    var_37 = (~(arr_38 [i_13] [i_8] [0LL] [i_2]));
                    var_38 = ((long long int) ((long long int) var_5));
                }
            }
            for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                var_39 = ((7491957463382789246LL) / (-957152282741173897LL));
                arr_51 [i_14] [i_14] [i_14] [i_7] = ((((/* implicit */_Bool) arr_41 [i_7] [12LL])) ? (arr_41 [i_2] [i_2]) : (arr_41 [i_2] [i_7]));
                arr_52 [i_7] = ((((var_5) + (9223372036854775807LL))) << (((arr_28 [i_14] [i_2]) - (4530099361372877504LL))));
                var_40 = ((long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (var_7)));
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        {
                            arr_57 [i_2] [i_2] [3LL] [i_7] [i_15] [i_2] = ((((/* implicit */_Bool) (-(arr_38 [i_2] [i_14] [i_15] [i_16])))) ? ((~(7491957463382789264LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_16] [i_7] [i_7] [i_7]) >= (7491957463382789270LL))))));
                            arr_58 [i_7] [i_16] [i_14] [i_15] [i_16] [i_15] [i_14] = ((((/* implicit */_Bool) ((-5156017124552591376LL) / (6969657864464403625LL)))) ? (2305843009213692928LL) : (((((var_5) + (9223372036854775807LL))) << (((8490696316483655859LL) - (8490696316483655859LL))))));
                        }
                    } 
                } 
            }
            for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        {
                            arr_66 [i_7] [i_7] [i_17] [i_17] [i_7] [i_18] [i_19] = ((((/* implicit */_Bool) ((arr_49 [i_2] [i_18] [i_2]) % (arr_31 [i_2] [i_7] [i_2] [i_7])))) ? (((arr_21 [i_2] [i_7] [i_17] [i_18]) & (var_0))) : ((~(var_7))));
                            var_41 = -842759913738857795LL;
                        }
                    } 
                } 
                var_42 = ((arr_24 [i_7] [i_7]) | (arr_24 [i_7] [i_7]));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    for (long long int i_21 = 0; i_21 < 20; i_21 += 4) 
                    {
                        {
                            arr_73 [i_2] [i_2] [i_7] [i_20] [i_7] = arr_42 [i_7] [i_17] [i_7] [i_7];
                            arr_74 [i_21] [i_20] [i_7] [i_7] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((var_9) != (var_3)))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_21] [i_20] [i_17] [i_7] [i_7] [4LL] [i_2])))))));
                            arr_75 [i_2] [i_7] [i_7] [i_7] [i_2] = var_14;
                            arr_76 [i_17] [i_20] [i_7] = ((((/* implicit */_Bool) -631896760619791569LL)) ? (-7525558617029727799LL) : (7491957463382789265LL));
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_2] [i_7] [i_17] [i_21])) || (((/* implicit */_Bool) 7491957463382789255LL))))))))));
                        }
                    } 
                } 
            }
            arr_77 [i_7] = ((long long int) ((((/* implicit */_Bool) var_5)) ? (arr_28 [i_2] [i_7]) : (arr_61 [14LL] [14LL] [i_7] [i_7] [15LL] [i_2])));
        }
    }
    var_44 = max((max((1099511627768LL), (9173739343486914513LL))), (min((-6675402189713106823LL), (6675402189713106822LL))));
}
