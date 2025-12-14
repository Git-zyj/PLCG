/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84801
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 &= max((((long long int) var_17)), (var_10));
                            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((max((arr_1 [i_0]), (arr_1 [i_0]))) ? (max(((-(arr_9 [i_3] [i_1] [i_1] [i_1] [9LL]))), (var_16))) : (((min((arr_2 [i_1]), ((_Bool)1))) ? (min((var_15), (arr_4 [i_1]))) : (((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (523264LL)))))));
                        }
                    } 
                } 
                var_19 = (~(((((/* implicit */_Bool) max((arr_8 [i_1] [17LL] [i_0] [i_1]), (445158320156126945LL)))) ? (((((/* implicit */_Bool) 523282LL)) ? (523281LL) : (arr_6 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0] [7LL])) ? (523305LL) : (523264LL))))));
                var_20 &= -6523824152494041365LL;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */long long int) arr_3 [(_Bool)1] [i_4] [15LL]);
        arr_15 [i_4] = (-(arr_12 [i_4]));
        arr_16 [i_4] = min((min((523282LL), (-6523824152494041365LL))), (9223372036854775807LL));
    }
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */long long int) var_5);
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((9223372036854775807LL) / (arr_8 [i_5] [i_8 - 1] [i_8 - 1] [i_5])))) || (((/* implicit */_Bool) (((_Bool)1) ? (-9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_23 = max((((((arr_11 [i_5]) + (9223372036854775807LL))) << (((((arr_18 [i_5]) + (6423573507145569179LL))) - (37LL))))), (min((17LL), (arr_18 [i_5]))));
            var_24 += max((((arr_23 [i_5] [i_9]) ? (-445158320156126945LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9] [(_Bool)0]))))), (max((523267LL), (((/* implicit */long long int) arr_23 [i_5] [i_9])))));
            arr_32 [i_9] [i_5] [i_5] |= ((/* implicit */long long int) ((_Bool) max((((long long int) arr_19 [i_5] [i_9])), (((/* implicit */long long int) ((((/* implicit */_Bool) -4735440397321292663LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        }
    }
    var_25 = ((((/* implicit */_Bool) var_12)) ? ((~(max((-523264LL), (4572768620625207946LL))))) : (max((((((/* implicit */_Bool) 523258LL)) ? (var_11) : (-7838129948994322957LL))), (((/* implicit */long long int) var_14)))));
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            {
                var_26 = ((/* implicit */_Bool) ((max((max((arr_35 [i_10] [i_10]), ((_Bool)1))), (arr_33 [i_10] [i_10]))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((max((arr_37 [i_10] [i_10]), (arr_34 [i_10]))), (((/* implicit */long long int) min((arr_35 [(_Bool)1] [i_10]), ((_Bool)0))))))));
                arr_38 [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (20LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_5))) - (arr_34 [(_Bool)1]))) / ((((_Bool)1) ? (arr_37 [i_10] [1LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [13LL] [i_11]))))))) : (max((((/* implicit */long long int) (_Bool)1)), (arr_34 [i_10]))));
                var_27 = (+(-9223372036854775805LL));
                var_28 = ((/* implicit */_Bool) ((9223372036854775804LL) - (min((((9223372036854775807LL) & (arr_34 [i_10]))), (((/* implicit */long long int) arr_36 [15LL] [(_Bool)1]))))));
                arr_39 [i_10] [i_10] [(_Bool)1] = ((((/* implicit */_Bool) 9223372036854775805LL)) ? (7315378309212091455LL) : (((((/* implicit */_Bool) arr_37 [i_10] [i_11])) ? (-1292881700355023924LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
}
