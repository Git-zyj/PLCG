/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85921
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
    var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) min((min((var_9), (var_1))), ((+(var_4)))))) ? (var_19) : (min((((((/* implicit */_Bool) var_15)) ? (var_2) : (var_19))), (var_6)))))));
    var_21 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (-(var_3)))) ? (var_6) : (var_2))) : (var_3));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_22 = (+((-(var_2))));
        var_23 = ((/* implicit */long long int) max((var_23), ((+((~(((((arr_2 [i_0] [i_0]) + (9223372036854775807LL))) << (((((-1LL) + (62LL))) - (61LL)))))))))));
        var_24 = arr_2 [i_0] [i_0];
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            arr_8 [i_2] = ((min(((-(arr_5 [i_2] [i_1] [i_1]))), (var_16))) / (((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_1] [i_2 + 4]) : (281474976710655LL))) : (var_11))));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 17; i_3 += 4) /* same iter space */
            {
                var_25 = ((arr_6 [i_2 + 1]) / (((((/* implicit */_Bool) arr_10 [i_2 + 1] [0LL] [i_3 - 1])) ? (arr_5 [i_1] [i_1] [i_3 - 1]) : (arr_10 [i_1] [i_2] [i_3 + 1]))));
                var_26 = ((/* implicit */long long int) min((var_26), (arr_6 [i_3])));
                var_27 = ((((/* implicit */_Bool) 362289957675760218LL)) ? (var_16) : (arr_6 [i_1]));
            }
            for (long long int i_4 = 1; i_4 < 17; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    var_28 = ((((((/* implicit */_Bool) -7772446089189044826LL)) ? (var_12) : (var_6))) + (((((/* implicit */_Bool) var_14)) ? (var_0) : (arr_13 [i_4] [i_2 - 1]))));
                    var_29 = arr_14 [i_4] [i_4 + 1] [i_4 + 1];
                }
                /* LoopSeq 4 */
                for (long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    var_30 = ((((/* implicit */_Bool) (-(arr_5 [i_4 - 1] [i_6 + 1] [i_4])))) ? (((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_6 + 2] [i_4 - 1])) ? (arr_5 [i_4 + 1] [i_6 + 2] [i_4 - 1]) : (arr_5 [i_4 - 1] [i_6 + 1] [i_4 + 1]))) : (((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_6 + 2] [i_4 - 1])) ? (arr_5 [i_4 - 1] [i_6 + 1] [i_4]) : (arr_5 [i_4 + 1] [i_6 + 2] [i_4 + 1]))));
                    var_31 = 5448472953816250539LL;
                    var_32 = 63050394783186944LL;
                    var_33 *= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 6852055674869619491LL)))))));
                }
                for (long long int i_7 = 3; i_7 < 16; i_7 += 2) 
                {
                    arr_22 [i_7] [i_2 + 2] [i_2] [i_2] = ((((/* implicit */_Bool) ((arr_17 [i_7 - 2] [i_4 + 1] [i_2 - 1] [i_1]) & (arr_21 [i_7 + 2] [i_4] [i_7] [i_7] [i_1] [i_1])))) ? (arr_17 [i_1] [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_2 - 1] [i_2 - 1] [4LL]));
                    var_34 ^= arr_3 [i_1] [i_1];
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_35 = ((/* implicit */long long int) min((var_35), ((+(((((/* implicit */_Bool) (-(arr_17 [i_1] [i_1] [i_1] [i_1])))) ? (min((arr_11 [i_1] [i_2] [i_4] [i_8]), (6852055674869619480LL))) : (-3248259556351300640LL)))))));
                    var_36 = (-(-4563935847202952736LL));
                }
                for (long long int i_9 = 3; i_9 < 17; i_9 += 3) 
                {
                    var_37 = ((arr_16 [i_1] [i_2] [i_4] [i_9]) - (min((((((/* implicit */_Bool) var_12)) ? (arr_13 [i_1] [i_2 + 1]) : (arr_15 [i_1] [i_2 + 3] [i_4] [i_1] [i_1]))), (-5448472953816250536LL))));
                    var_38 += ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_12 [8LL] [i_2 + 1] [i_2 - 1] [i_1])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9] [i_4] [i_4] [i_2] [i_2 + 2] [i_1])) ? (-7667112929566858205LL) : (-6852055674869619506LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) 384LL)) ? (arr_23 [i_1] [i_1] [i_1] [i_9]) : (-5448472953816250524LL))))));
                    var_39 = arr_13 [i_2] [i_4 - 1];
                }
            }
            var_40 = -4962154696643595927LL;
            arr_28 [i_1] [i_1] = (~((+((+(arr_27 [i_1] [1LL] [i_1] [i_1] [i_1]))))));
            var_41 = min((((/* implicit */long long int) (!(((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_19))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-5682364745083149308LL) : (var_6)))) ? (arr_17 [i_2 + 2] [i_2] [i_1] [i_1]) : (4096LL))));
        }
        /* vectorizable */
        for (long long int i_10 = 2; i_10 < 17; i_10 += 3) 
        {
            var_42 &= arr_19 [i_1] [i_10] [i_10] [i_10] [10LL] [10LL];
            var_43 = arr_5 [i_1] [i_1] [i_10];
            var_44 = ((/* implicit */long long int) min((var_44), (arr_12 [i_1] [i_10 - 2] [i_10 - 1] [i_10 - 1])));
        }
        for (long long int i_11 = 1; i_11 < 17; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    {
                        arr_42 [i_1] [i_11] [i_11] [i_11] [i_11] [i_1] |= -6426925169686607065LL;
                        var_45 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1])) ? (arr_19 [i_1] [i_1] [i_1] [i_11] [i_13] [i_13]) : (-4962154696643595927LL)))) ? (min((7772446089189044799LL), (arr_6 [i_1]))) : (arr_32 [i_11 - 1]))), (min((((((/* implicit */_Bool) var_14)) ? (arr_18 [i_13]) : (arr_41 [i_1] [i_11] [i_11 - 1] [i_12] [i_13]))), (min((arr_9 [i_1]), (var_17))))));
                        var_46 = ((((((long long int) -1029599051160982044LL)) != (((arr_16 [i_1] [i_11 - 1] [i_12] [i_1]) - (-9223372036854775799LL))))) ? (-1029599051160982036LL) : (-940896446537588649LL));
                        var_47 = arr_35 [i_11 + 1] [i_11 - 1] [i_11] [i_11 - 1];
                        var_48 ^= max((7757049424524953621LL), (6589136905086229272LL));
                    }
                } 
            } 
            var_49 = ((/* implicit */long long int) min((var_49), ((~(((-7772446089189044797LL) + (6848359268227646270LL)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_14 = 3; i_14 < 14; i_14 += 4) 
            {
                var_50 = arr_37 [i_1] [6LL] [i_1];
                var_51 = ((((/* implicit */_Bool) arr_3 [i_14 + 4] [i_1])) ? ((~(arr_18 [16LL]))) : (-4104415104554847414LL));
            }
        }
        var_52 += ((/* implicit */long long int) (-(((/* implicit */int) ((arr_24 [16LL] [17LL] [i_1] [i_1] [i_1]) >= (arr_43 [i_1] [i_1] [i_1] [i_1]))))));
        var_53 |= var_1;
        var_54 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1]))))) << (((((((/* implicit */_Bool) 7757049424524953621LL)) ? (-2LL) : (var_19))) + (26LL))))))));
    }
    for (long long int i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
    {
        arr_49 [i_15] |= ((/* implicit */long long int) (!(((-20LL) >= (4058561512183217908LL)))));
        var_55 = ((/* implicit */long long int) (+(((/* implicit */int) ((-22LL) == (min((arr_7 [i_15]), (var_16))))))));
    }
    for (long long int i_16 = 1; i_16 < 22; i_16 += 1) 
    {
        var_56 = arr_50 [i_16] [i_16];
        var_57 ^= 6096538360807592302LL;
    }
}
