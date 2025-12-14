/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74763
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
    var_12 += var_5;
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [13] = (-((~(arr_0 [i_0] [i_0]))));
        arr_3 [i_0 - 1] = var_11;
        var_13 = ((/* implicit */int) max((var_13), (((int) (-2147483647 - 1)))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [i_1] = ((int) (+(var_0)));
            arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [i_0 + 3] [i_1] [i_1 + 2]) : (arr_4 [i_0 + 3] [i_0 + 3] [i_1 - 2]));
        }
    }
    for (int i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_21 [i_2] [i_2 + 1] [i_3] [i_4] [i_3] [i_4] [i_6] = ((((/* implicit */_Bool) ((int) 0))) ? (((int) 0)) : (((2147483647) / (7))));
                            var_14 = ((int) arr_16 [i_2 + 3] [i_2 + 3] [i_5 + 1]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    var_15 = var_7;
                    var_16 = (-(282865187));
                }
                for (int i_8 = 4; i_8 < 17; i_8 += 1) 
                {
                    arr_26 [i_2] [10] [10] [i_4] = (-(arr_24 [i_2] [i_2 - 1] [i_2] [i_4] [i_2 + 3]));
                    arr_27 [i_2] [9] [9] [i_3] [i_4] [i_8] = arr_22 [i_2] [i_3] [16] [16] [i_8];
                    var_17 = ((/* implicit */int) max((var_17), ((~(arr_20 [i_2] [i_3] [10] [i_3] [7] [i_3])))));
                }
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    var_18 += ((/* implicit */int) ((var_7) <= (((int) var_10))));
                    arr_30 [13] [i_3] [i_4] [i_3] [15] [7] = ((/* implicit */int) ((((((/* implicit */_Bool) 2147483647)) ? (var_11) : (arr_19 [i_2 - 2] [i_3] [i_4] [i_4] [i_4] [i_4] [i_2 - 2]))) <= (arr_14 [i_2 - 2] [i_2 - 2] [i_4])));
                    /* LoopSeq 2 */
                    for (int i_10 = 4; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) -18)) ? ((+(var_5))) : (((int) -1621226925))))));
                        var_20 = arr_20 [i_10 - 3] [i_10 - 2] [i_10 - 4] [i_9 - 1] [i_2 - 1] [i_2];
                    }
                    for (int i_11 = 4; i_11 < 17; i_11 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
                        var_22 = ((int) var_0);
                    }
                }
                for (int i_12 = 1; i_12 < 16; i_12 += 4) /* same iter space */
                {
                    var_23 |= var_0;
                    /* LoopSeq 2 */
                    for (int i_13 = 3; i_13 < 14; i_13 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (var_4) : (var_0)))))))));
                        var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 + 3] [i_12 - 1]))));
                        arr_41 [i_13] [i_4] [12] [i_4] [16] [i_4] [i_2] = ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_12])) ? ((+(-10))) : (var_2));
                        arr_42 [i_2] [i_3] [i_4] [i_4] [i_4] = arr_25 [i_3] [2] [i_4];
                    }
                    for (int i_14 = 3; i_14 < 14; i_14 += 2) /* same iter space */
                    {
                        arr_46 [i_12 + 2] [9] [i_4] [i_14 + 3] [i_14] [3] [3] = arr_9 [i_2 - 1] [i_12 - 1];
                        arr_47 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] [i_3] = arr_23 [i_2] [i_3] [i_4] [i_12] [i_14];
                    }
                    var_26 = ((((/* implicit */_Bool) (~(arr_32 [i_12] [i_4] [i_4] [i_3] [i_4] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_4])) ? (arr_32 [i_2] [i_3] [i_2] [i_2] [i_4] [i_2] [2]) : (arr_40 [i_4] [i_3] [i_4] [i_12] [i_4]))) : (arr_16 [i_4] [i_2] [i_2]));
                    arr_48 [i_4] [i_3] [i_3] [i_4] = arr_19 [i_12] [i_4] [i_4] [i_3] [i_4] [i_2] [i_2];
                }
            }
            for (int i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                arr_51 [i_2 + 2] = (+((~(-1))));
                arr_52 [i_2] [i_2] [i_3] [i_2] |= (((-(-1098309563))) * (((/* implicit */int) ((arr_36 [i_2 - 2] [i_3] [i_3] [i_2 + 3]) <= (arr_18 [i_2] [i_2 - 1] [i_2] [i_3] [i_2])))));
            }
            arr_53 [i_2] [i_2] [i_2] = var_1;
        }
        for (int i_16 = 3; i_16 < 16; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                var_27 = min((((arr_50 [i_2] [i_16 + 2] [i_2]) - (var_1))), ((-(((((/* implicit */_Bool) var_9)) ? (1) : (arr_56 [i_16 - 1]))))));
                arr_58 [i_2] [8] [i_2] [i_2] = (((!(((/* implicit */_Bool) max((var_6), (arr_15 [i_17] [10] [i_16 - 2] [i_2 + 1])))))) ? ((~((-(arr_54 [i_16 - 1]))))) : (max((((/* implicit */int) ((2147483647) >= (var_3)))), (31457280))));
            }
            var_28 = 0;
        }
        arr_59 [8] = ((((/* implicit */_Bool) (~(16777200)))) ? (var_10) : (((((((/* implicit */_Bool) arr_45 [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) 282865198)))) ? (0) : (arr_20 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1]))));
        arr_60 [i_2 + 3] &= (+(2147483645));
        /* LoopSeq 1 */
        for (int i_18 = 3; i_18 < 14; i_18 += 2) 
        {
            arr_65 [i_18] = ((((/* implicit */_Bool) (-(max((arr_16 [i_18] [i_18 - 3] [i_18]), (var_1)))))) ? (max((((arr_5 [i_2] [i_18] [i_18]) / (var_5))), (((((/* implicit */_Bool) var_9)) ? (arr_44 [i_2] [i_18 + 2] [i_18] [15] [4]) : (var_2))))) : (((((/* implicit */_Bool) (+(2147483647)))) ? (0) : (-7))));
            /* LoopSeq 3 */
            for (int i_19 = 4; i_19 < 15; i_19 += 3) 
            {
                arr_69 [9] [i_18] [i_19] = ((/* implicit */int) ((((int) max((var_2), (2147483647)))) < (((((/* implicit */_Bool) arr_67 [i_18] [i_18] [9] [i_18])) ? ((~(-1))) : (((((/* implicit */_Bool) var_8)) ? (-1843256010) : (var_5)))))));
                var_29 = ((/* implicit */int) (((+(-31457255))) <= ((-(min((arr_10 [i_2] [i_2]), (var_8)))))));
            }
            for (int i_20 = 2; i_20 < 17; i_20 += 2) 
            {
                arr_72 [i_18] = arr_8 [i_2];
                arr_73 [i_2] [i_18] [i_18] [i_2] = (i_18 % 2 == zero) ? (((((var_9) + (2147483647))) << (((((((max((arr_14 [i_2] [i_2] [i_18]), (arr_14 [i_18] [i_2] [i_18]))) + (2147483647))) >> (((((((arr_39 [4] [i_2] [i_18 + 4] [i_18] [i_2 - 2] [i_2] [i_2 - 2]) + (2147483647))) << (((arr_4 [i_2] [i_18] [14]) - (790506055))))) - (992877558))))) - (75492))))) : (((((var_9) + (2147483647))) << (((((((((max((arr_14 [i_2] [i_2] [i_18]), (arr_14 [i_18] [i_2] [i_18]))) + (2147483647))) >> (((((((arr_39 [4] [i_2] [i_18 + 4] [i_18] [i_2 - 2] [i_2] [i_2 - 2]) + (2147483647))) << (((arr_4 [i_2] [i_18] [14]) - (790506055))))) - (992877558))))) - (75492))) - (48812)))));
            }
            for (int i_21 = 3; i_21 < 16; i_21 += 4) 
            {
                var_30 = max((min((var_6), (min((-2147483645), (2147483647))))), (((/* implicit */int) ((var_2) < ((+(arr_28 [i_18] [5] [5] [i_18])))))));
                /* LoopSeq 2 */
                for (int i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    arr_82 [i_18] = (-((((-(7))) - (max((16), (var_3))))));
                    /* LoopSeq 1 */
                    for (int i_23 = 3; i_23 < 17; i_23 += 4) 
                    {
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 4)) ? (arr_28 [7] [7] [3] [i_18]) : (-27))) : (((/* implicit */int) ((63) > (var_5))))))) ? (((int) min((668340076), (arr_31 [3] [i_18 + 4] [i_21] [i_21] [i_21] [i_22] [i_18])))) : (((/* implicit */int) (((-(8064))) == (((int) arr_16 [i_2] [i_2] [i_2]))))));
                        arr_85 [i_18] [i_21 + 2] [i_18] = max(((~(arr_20 [i_23 + 1] [i_21 - 2] [i_21] [i_21 + 1] [i_18 + 4] [i_18]))), (((((/* implicit */_Bool) var_10)) ? (min((var_4), (var_6))) : ((+(arr_23 [i_2] [i_2] [i_21] [i_22] [i_23]))))));
                        arr_86 [i_18] [i_18] = (-(max((((/* implicit */int) ((var_2) <= (var_9)))), ((~(-701876216))))));
                        var_32 -= ((/* implicit */int) ((-27) <= (-1)));
                        arr_87 [i_22] [i_18] [0] [i_23 + 1] [i_21] [i_23 + 1] [i_21] = ((/* implicit */int) ((-27) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_23 - 1])) || (((/* implicit */_Bool) -268435456)))))));
                    }
                    var_33 = 31457255;
                    var_34 = ((/* implicit */int) min((var_34), ((~(((int) (-2147483647 - 1)))))));
                }
                for (int i_24 = 1; i_24 < 15; i_24 += 4) 
                {
                    arr_91 [i_18] [i_21] [i_18] [i_18] [i_2] [i_2 + 2] = ((/* implicit */int) ((max((arr_29 [12] [i_18] [i_21] [i_21]), ((+(-1))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_74 [i_24 + 1] [i_24 + 1]))))) != (max((-26), (4))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_25 = 2; i_25 < 14; i_25 += 4) 
                    {
                        var_35 = ((/* implicit */int) min((var_35), ((~((-2147483647 - 1))))));
                        var_36 = ((/* implicit */int) min((var_36), (((int) 0))));
                    }
                    for (int i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        arr_97 [i_2] [i_18 + 2] [i_21] [i_24 + 1] [i_18] [i_18] = (((-(31457255))) ^ ((~(((((/* implicit */_Bool) 8388607)) ? (arr_10 [11] [i_26]) : (arr_84 [i_18] [13] [i_21 - 2] [i_18 + 4] [i_2] [i_18]))))));
                        arr_98 [i_18] [i_18] [i_26] = (~(((((/* implicit */_Bool) min((234881024), (-1)))) ? (arr_67 [i_18] [i_21 + 1] [i_18 + 3] [i_18]) : (((arr_11 [17] [17]) % (arr_57 [i_2 + 2] [i_2 + 2]))))));
                        arr_99 [i_18] = (~((~(((/* implicit */int) ((arr_17 [i_18] [i_18 + 1] [i_21 - 1] [i_24 - 1]) >= (-5)))))));
                    }
                }
                arr_100 [i_18] [i_18] [i_2] [i_18] = arr_16 [16] [i_18] [i_2];
                arr_101 [i_2] [i_18] = arr_93 [i_2] [i_18] [0] [0];
            }
        }
    }
    for (int i_27 = 4; i_27 < 17; i_27 += 1) 
    {
        var_37 = var_6;
        /* LoopSeq 1 */
        for (int i_28 = 3; i_28 < 16; i_28 += 2) 
        {
            var_38 ^= arr_12 [i_27] [i_27] [i_28];
            var_39 = (-(((arr_56 [i_28 + 1]) | (arr_15 [i_28] [i_28] [i_28] [i_28 + 1]))));
            /* LoopSeq 1 */
            for (int i_29 = 1; i_29 < 17; i_29 += 4) 
            {
                arr_110 [i_27 + 1] [i_27] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_27] [17] [i_27] [i_27] [i_28] [i_29])) ? (var_9) : (1984)))) ? (-574510183) : (((/* implicit */int) ((1046528) <= (67043328)))))));
                var_40 = ((int) arr_18 [i_27] [i_28 + 2] [i_28 + 2] [i_28 + 2] [i_27]);
                var_41 &= (~((~(922018689))));
            }
            var_42 = ((/* implicit */int) min((var_42), (2147483647)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_30 = 3; i_30 < 17; i_30 += 1) 
        {
            var_43 = ((/* implicit */int) min((var_43), (var_8)));
            arr_113 [i_27] [i_30 - 2] [i_27 - 4] = -1681082433;
            var_44 = ((16252928) % (arr_49 [8]));
        }
    }
    for (int i_31 = 4; i_31 < 17; i_31 += 4) 
    {
        arr_116 [i_31] [i_31] = ((int) ((((/* implicit */_Bool) min((var_8), (0)))) ? (2147483647) : (arr_115 [i_31 - 2] [i_31 + 3])));
        var_45 = (-(arr_114 [i_31 + 3] [i_31]));
        arr_117 [i_31] = max((arr_114 [i_31 - 2] [i_31]), (arr_114 [i_31] [17]));
    }
}
