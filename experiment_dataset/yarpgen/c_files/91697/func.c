/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91697
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [14LL] = var_10;
                                var_18 |= (~(var_15));
                                var_19 = var_1;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_20 = var_11;
                                var_21 = ((/* implicit */long long int) min((var_21), (min((7292089664226093228LL), (((((/* implicit */_Bool) max((2997120659140853682LL), (-7292089664226093229LL)))) ? (5443801729383019926LL) : (3079407900126779087LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 18; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((var_10) <= (2358287481261562023LL))))))) ? ((-((-(arr_2 [i_0] [13LL]))))) : (min((1188801067650117652LL), (-1223783484290802100LL)))))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((var_5) / (((((/* implicit */_Bool) var_2)) ? (arr_9 [20LL] [i_7 + 3] [i_0] [i_8]) : (arr_9 [i_2] [i_7 + 1] [i_0] [2LL])))))));
                                var_24 = ((/* implicit */long long int) min((var_24), ((+((~(7292089664226093216LL)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) min((var_25), (max((((var_3) + (var_0))), (((/* implicit */long long int) ((arr_18 [6LL] [i_1] [16LL] [i_0] [i_1] [16LL] [i_1]) <= (-2358287481261562024LL))))))));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (3079407900126779107LL)))) ? ((~(var_11))) : (-6529499473289032335LL))))));
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        for (long long int i_10 = 2; i_10 < 23; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_11 = 2; i_11 < 22; i_11 += 3) 
                {
                    for (long long int i_12 = 2; i_12 < 23; i_12 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (max((((((/* implicit */_Bool) var_8)) ? (arr_30 [23LL] [i_12 - 1] [i_11 + 2]) : (arr_30 [i_11 + 2] [i_12 - 1] [i_11 + 2]))), (((((/* implicit */_Bool) arr_29 [22LL] [i_9])) ? (var_10) : (-1701228119784165631LL)))))));
                            var_28 = (~(((((/* implicit */_Bool) min((var_12), (2358287481261562045LL)))) ? (arr_32 [i_10 - 1] [i_11 - 2] [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                            arr_35 [18LL] &= 6529499473289032348LL;
                            var_29 = ((((/* implicit */_Bool) max((-8007733468054232162LL), (arr_30 [20LL] [i_11 - 1] [16LL])))) ? (min((arr_30 [22LL] [i_11 - 1] [22LL]), (var_2))) : (max((-8026257239662095315LL), (-1667007201434288902LL))));
                        }
                    } 
                } 
                var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-3792901390613067701LL) : (var_7)))) ? (max((arr_26 [i_9]), (var_10))) : (((((/* implicit */_Bool) arr_26 [i_10 - 1])) ? (arr_27 [i_9]) : (arr_27 [i_9]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
    {
        for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            for (long long int i_15 = 1; i_15 < 15; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        for (long long int i_17 = 1; i_17 < 14; i_17 += 4) 
                        {
                            {
                                var_31 = max((var_12), (-4086312662473281904LL));
                                var_32 = var_14;
                                arr_50 [i_17] = ((((/* implicit */long long int) ((/* implicit */int) ((max((-2358287481261562019LL), (3208868667573391082LL))) > ((~(-6468188518151789235LL))))))) + (var_2));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 1; i_18 < 15; i_18 += 3) 
                    {
                        for (long long int i_19 = 3; i_19 < 13; i_19 += 3) 
                        {
                            {
                                arr_55 [i_18] [i_14] [i_18] [i_18] = var_6;
                                var_33 = max(((-(((((/* implicit */_Bool) var_12)) ? (-9223372036854775802LL) : (var_14))))), (((((/* implicit */_Bool) 2358287481261562046LL)) ? (-2358287481261562045LL) : (-6509804824422593398LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_20 = 1; i_20 < 15; i_20 += 4) 
                    {
                        for (long long int i_21 = 0; i_21 < 16; i_21 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) max((var_34), (((((/* implicit */_Bool) var_16)) ? (((((((/* implicit */_Bool) -9223372036854775806LL)) ? (var_11) : (17587891077120LL))) - (2358287481261562044LL))) : ((~((~(var_6)))))))));
                                arr_61 [i_15] [i_15] [i_21] = ((long long int) ((min((arr_25 [i_20]), (9223372036854775807LL))) | (arr_39 [i_20 + 1] [i_20 + 1] [i_15])));
                                arr_62 [i_13] = var_0;
                                arr_63 [i_13] [6LL] [10LL] = (~((~(var_12))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
