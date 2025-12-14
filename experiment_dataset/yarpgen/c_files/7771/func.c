/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7771
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
    var_12 -= min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (1336400939168595331LL)))) || (((/* implicit */_Bool) var_6))))));
    var_13 = ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */_Bool) var_9)) ? (var_10) : (var_9))) * (((/* implicit */long long int) ((/* implicit */int) ((var_4) < (var_11))))))) : (((4267156162294178765LL) >> (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_14 = ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_5) : (-1336400939168595347LL))) / (var_3));
        var_15 = ((/* implicit */long long int) min((var_15), (((long long int) min(((-9223372036854775807LL - 1LL)), (var_11))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_16 = ((((/* implicit */_Bool) var_7)) ? (var_1) : (arr_2 [i_1]));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (long long int i_3 = 3; i_3 < 14; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_17 = var_8;
                        var_18 = (-9223372036854775807LL - 1LL);
                        var_19 = arr_11 [i_3] [i_3] [i_3 + 1] [i_3];
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) ((1336400939168595331LL) == (((((var_8) + (9223372036854775807LL))) << (((((-1336400939168595345LL) + (1336400939168595367LL))) - (22LL)))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_5])) || (((((/* implicit */_Bool) -1525694109359387506LL)) && (((/* implicit */_Bool) 17592186044415LL))))));
        }
    }
    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_23 = var_3;
        var_24 = min((min((((long long int) -3227994283684104880LL)), (1336400939168595320LL))), (((arr_18 [i_6]) << ((((~(-1336400939168595331LL))) - (1336400939168595330LL))))));
    }
    for (long long int i_7 = 1; i_7 < 11; i_7 += 3) 
    {
        arr_23 [i_7] [i_7] = ((((((/* implicit */_Bool) -7206944052145272229LL)) ? (arr_14 [i_7] [i_7]) : (((var_10) / (4267156162294178765LL))))) << (((((((arr_18 [i_7 + 1]) | (((((/* implicit */_Bool) -1336400939168595334LL)) ? (var_2) : (arr_11 [i_7] [14LL] [i_7 + 2] [14LL]))))) + (2738329328186830097LL))) - (11LL))));
        /* LoopSeq 4 */
        for (long long int i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 4; i_9 < 11; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (long long int i_11 = 1; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_35 [i_8] [i_8] [i_8] [i_10] [i_8] = (i_8 % 2 == zero) ? (((((((long long int) 7206944052145272252LL)) != (((long long int) arr_11 [i_9] [i_8] [i_8] [i_10])))) ? (((((arr_11 [i_8] [i_8] [i_7 + 2] [i_8]) + (9223372036854775807LL))) << (((((-7206944052145272229LL) + (7206944052145272237LL))) - (8LL))))) : (var_10))) : (((((((long long int) 7206944052145272252LL)) != (((long long int) arr_11 [i_9] [i_8] [i_8] [i_10])))) ? (((((((arr_11 [i_8] [i_8] [i_7 + 2] [i_8]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((-7206944052145272229LL) + (7206944052145272237LL))) - (8LL))))) : (var_10)));
                            var_25 = ((((/* implicit */_Bool) var_5)) ? (-1336400939168595360LL) : (1309972210357692524LL));
                            arr_36 [i_7 - 1] [i_8] [i_7 - 1] [i_11 + 1] = ((/* implicit */long long int) (((+(2781071795799243944LL))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_9])) ? (var_10) : (4965263377464864468LL)))) ? (var_10) : (arr_3 [i_7] [i_8 + 1])))));
                            arr_37 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_11] = (-(var_0));
                        }
                    } 
                } 
            } 
            var_26 = 1336400939168595345LL;
            var_27 = ((((/* implicit */_Bool) min((arr_16 [i_8]), (((((/* implicit */_Bool) arr_12 [i_7] [i_8] [i_8] [i_7 - 1] [i_7 - 1] [i_7])) ? (var_6) : (7034716683875272687LL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((3654930372473440181LL) != (-1336400939168595331LL))))) - (arr_29 [i_7] [i_7] [i_7] [i_7]))) : (-3081689626118100908LL));
            var_28 = -1123149175255850860LL;
        }
        for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                arr_42 [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [14LL])) ? (-1336400939168595332LL) : (var_1))) <= (((((/* implicit */_Bool) arr_38 [i_7 + 2])) ? (arr_38 [i_7 - 1]) : (arr_38 [i_7])))));
                var_29 = 1336400939168595320LL;
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    var_30 = ((/* implicit */long long int) ((var_7) <= (min((1219029660292158039LL), ((+(-5778002773630973087LL)))))));
                    arr_45 [i_7] [i_7] [i_7] [i_14] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((-3739204535257257117LL), (arr_26 [i_7 + 1] [0LL] [i_7 + 2]))))));
                }
            }
            arr_46 [i_7] [i_7 + 2] [i_7] = ((1309972210357692535LL) << ((((-(((long long int) arr_40 [i_12] [i_12])))) - (8214161832870179107LL))));
            arr_47 [i_7] [i_7] [i_7] = min((((((/* implicit */_Bool) arr_8 [i_12] [i_7 + 2] [i_7 + 1] [i_7 - 1])) ? (arr_11 [i_7 + 1] [6LL] [i_7 + 1] [i_7 - 1]) : (arr_8 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7]))), (arr_1 [i_7 + 1]));
            var_31 = min(((~(var_10))), (((((/* implicit */_Bool) (~(arr_4 [i_12])))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (arr_31 [i_7] [i_7] [i_7] [i_7 + 1]))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (var_8))))));
        }
        for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            var_32 = min((((-3336823385110981986LL) / ((-(arr_41 [i_7] [i_7] [i_15] [i_7]))))), (var_5));
            arr_50 [i_7] [i_7 - 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6484128420053542786LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_15] [i_7 + 1])))))));
            var_33 = ((/* implicit */long long int) (!((!(((((/* implicit */_Bool) arr_17 [i_7])) || (((/* implicit */_Bool) var_4))))))));
        }
        for (long long int i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            arr_53 [i_16] = arr_9 [i_7] [i_7];
            arr_54 [i_7 + 1] [i_7 + 1] = 2347623236246504289LL;
        }
    }
}
