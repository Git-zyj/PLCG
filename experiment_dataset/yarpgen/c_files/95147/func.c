/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95147
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
    var_20 = ((((long long int) max((-2894792981985027369LL), (-316484256433061309LL)))) & (var_5));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) <= (var_19))))) & (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (-5505049444648157206LL))));
        arr_5 [i_0] [i_0] = ((((arr_3 [i_0]) > (arr_0 [i_0] [i_0]))) ? (((long long int) arr_3 [i_0])) : (((9223372036854775807LL) / (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_9 [i_1] = ((long long int) 7762031150605245777LL);
        arr_10 [19LL] [i_1] = ((/* implicit */long long int) ((arr_2 [i_1]) <= (arr_7 [i_1] [i_1])));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_21 = ((((-3235571902120919457LL) + (9223372036854775807LL))) << (((((-4456435824376697481LL) + (4456435824376697529LL))) - (48LL))));
                    var_22 &= -9223372036854775789LL;
                }
            } 
        } 
        var_23 = var_4;
    }
    var_24 = var_1;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
        {
            arr_24 [7LL] [i_5] [i_6] = ((long long int) arr_19 [i_6 - 2] [7LL]);
            arr_25 [6LL] [i_6] [4LL] = 8169338479571003429LL;
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        arr_32 [i_6 + 2] [7LL] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) 786441031200373005LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2864333645507507405LL))))) : (((/* implicit */int) ((-3235571902120919457LL) <= (arr_23 [i_7]))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1091626408561969885LL))));
                            var_26 = ((-3235571902120919457LL) ^ (-4686199198438556836LL));
                            arr_35 [8LL] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7] [i_5])) && (((/* implicit */_Bool) 8621817490463758051LL))));
                        }
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_7] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_8] [i_6] [i_6] [i_6 + 1] [i_6] [i_6]))));
                            var_27 = ((long long int) arr_34 [i_6 + 2] [i_6]);
                            var_28 = ((-1638394925557351366LL) & (3302857451794346288LL));
                            var_29 = var_11;
                            var_30 = ((/* implicit */long long int) max((var_30), (arr_31 [i_5] [i_5] [i_6 - 1] [i_8] [i_8])));
                        }
                        arr_39 [i_5] [i_6 - 1] [0LL] [6LL] = ((-2273794296473967314LL) & (arr_17 [i_6 - 1]));
                    }
                } 
            } 
            var_31 = ((((var_1) + (9223372036854775807LL))) >> (((arr_19 [i_5] [i_6]) / (var_9))));
            arr_40 [i_6] [i_6] [i_6] = ((1873371139237593801LL) - (-7320764420754867225LL));
        }
        for (long long int i_11 = 3; i_11 < 8; i_11 += 1) /* same iter space */
        {
            var_32 = ((arr_30 [i_5] [i_11 - 2] [i_11] [i_11 - 2] [i_11] [2LL]) / (-9223372036854775807LL));
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_5] [i_11 - 2] [i_13])) || (((/* implicit */_Bool) arr_22 [i_13]))))) >> (((/* implicit */int) ((9223372036854775807LL) <= (var_3))))));
                        var_34 = ((/* implicit */long long int) ((arr_44 [i_11 + 1] [i_13] [i_13]) < (arr_44 [i_11 + 2] [5LL] [5LL])));
                    }
                } 
            } 
            var_35 = -2190447120004585668LL;
            var_36 = -9223372036854775807LL;
            var_37 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5])) || (((/* implicit */_Bool) arr_3 [i_5]))));
        }
        for (long long int i_14 = 3; i_14 < 8; i_14 += 1) /* same iter space */
        {
            var_38 = (-(-3053351577391969649LL));
            var_39 = ((long long int) -4686199198438556852LL);
            arr_54 [2LL] [2LL] [i_14 - 2] = arr_6 [i_5] [19LL];
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        {
                            var_40 = ((5014144929467328786LL) + (954599773343207182LL));
                            arr_63 [i_5] [i_15] [i_14 + 2] [6LL] [8LL] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_17] [i_14 + 2] [i_5]))));
                            var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_51 [i_14 - 1]))));
                        }
                    } 
                } 
            } 
            arr_64 [i_5] [i_5] &= ((long long int) arr_50 [i_14 - 3]);
        }
        /* LoopSeq 3 */
        for (long long int i_18 = 1; i_18 < 9; i_18 += 2) 
        {
            arr_69 [i_18] [i_18] [i_18 - 1] = ((((/* implicit */_Bool) arr_56 [i_18] [i_18 + 1] [i_18 + 1])) ? (var_13) : (-954599773343207183LL));
            arr_70 [i_18] = ((3953638007280205181LL) & (4236440082353840787LL));
            arr_71 [i_18] = ((arr_41 [i_18 + 1] [i_18 - 1]) | (308951565577149303LL));
        }
        for (long long int i_19 = 1; i_19 < 9; i_19 += 2) 
        {
            var_42 ^= ((long long int) ((long long int) var_7));
            var_43 = ((-7378734508095617346LL) - (-5004160187339537478LL));
            arr_75 [6LL] [i_5] [i_19] = ((long long int) arr_50 [i_5]);
        }
        for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
        {
            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (-(((/* implicit */int) ((arr_62 [i_5] [i_5] [i_5] [2LL] [i_20] [i_20]) <= (arr_57 [6LL] [i_5] [i_20])))))))));
            var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_20]))));
            arr_80 [i_20] [i_5] [i_20] = ((((/* implicit */_Bool) arr_62 [9LL] [i_5] [i_5] [i_20] [i_20] [i_20])) ? (arr_62 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_62 [i_5] [i_5] [i_5] [i_20] [3LL] [i_20]));
            var_46 = ((((/* implicit */_Bool) arr_14 [i_5] [i_20] [7LL])) ? (arr_14 [i_5] [i_20] [i_20]) : (arr_14 [i_5] [i_20] [i_20]));
            /* LoopSeq 1 */
            for (long long int i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                arr_83 [i_5] [3LL] [i_20] [1LL] = ((/* implicit */long long int) ((((arr_56 [i_5] [0LL] [i_5]) < (arr_16 [i_21]))) || (((/* implicit */_Bool) 1427212150011686559LL))));
                arr_84 [i_20] [i_20] [i_21] = ((((/* implicit */_Bool) arr_7 [i_20] [i_21])) ? (var_17) : (arr_7 [i_5] [i_20]));
                var_47 = ((((/* implicit */_Bool) arr_76 [i_21] [i_20])) ? (arr_76 [i_21] [i_5]) : (var_2));
            }
        }
        /* LoopNest 2 */
        for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
        {
            for (long long int i_23 = 1; i_23 < 6; i_23 += 3) 
            {
                {
                    arr_90 [i_5] [i_23] [8LL] = ((/* implicit */long long int) ((arr_65 [i_5] [i_22] [i_23 - 1]) >= (arr_76 [i_22] [i_5])));
                    arr_91 [i_23] [i_22] [i_23] = ((arr_46 [i_5] [i_22] [i_23 + 1] [i_23 + 3]) & (arr_46 [i_22] [i_22] [i_22] [i_22]));
                    var_48 -= ((((/* implicit */_Bool) 1048575LL)) ? (11LL) : (arr_81 [i_23 + 3] [i_23 + 1] [i_23 + 1]));
                }
            } 
        } 
        arr_92 [i_5] = ((/* implicit */long long int) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8935202496280871929LL)) || (((/* implicit */_Bool) -9223372036854775788LL))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_24 = 0; i_24 < 15; i_24 += 2) 
    {
        var_49 = (((((-9223372036854775807LL - 1LL)) + (max((8616769576885711137LL), (-9223372036854775805LL))))) - (((long long int) ((arr_13 [9LL]) / (var_3)))));
        arr_95 [10LL] = 6936564595896130480LL;
    }
    for (long long int i_25 = 0; i_25 < 16; i_25 += 2) 
    {
        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((long long int) ((-1427212150011686538LL) / (5544585080369084294LL)))) > (var_4))))));
        /* LoopNest 3 */
        for (long long int i_26 = 3; i_26 < 13; i_26 += 1) 
        {
            for (long long int i_27 = 3; i_27 < 15; i_27 += 2) 
            {
                for (long long int i_28 = 0; i_28 < 16; i_28 += 3) 
                {
                    {
                        arr_109 [10LL] [10LL] [i_26] [11LL] [i_28] [i_28] = -954599773343207182LL;
                        var_51 = arr_11 [i_25];
                        /* LoopSeq 2 */
                        for (long long int i_29 = 1; i_29 < 12; i_29 += 1) 
                        {
                            var_52 = -1LL;
                            arr_112 [i_25] [i_27] [12LL] = -954599773343207176LL;
                        }
                        for (long long int i_30 = 2; i_30 < 15; i_30 += 3) 
                        {
                            var_53 = ((((/* implicit */_Bool) arr_101 [i_26 + 2] [i_27 - 2])) ? (arr_2 [i_26 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))));
                            arr_117 [i_25] [14LL] [i_27] [i_30] [i_30 - 2] = min((-4497941530836833811LL), (-576460752303423488LL));
                            var_54 = ((((576460752303423496LL) - ((+(-954599773343207176LL))))) - (max((((((/* implicit */_Bool) 312124594422562321LL)) ? (-116359485545611379LL) : (var_3))), (arr_14 [i_27 - 3] [i_30] [i_27 - 2]))));
                            arr_118 [i_25] [i_26] [i_30] [i_28] [i_30] = 6701246543547137336LL;
                        }
                    }
                } 
            } 
        } 
    }
}
