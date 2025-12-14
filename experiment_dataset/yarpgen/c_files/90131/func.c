/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90131
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [14LL] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775800LL)) ? (5174342204598790094LL) : (var_12))) ^ ((~(-9223372036854775800LL)))))) ? (max((var_3), (var_2))) : (max((min((arr_3 [i_0 - 1]), (9223372036854775771LL))), (arr_3 [i_1]))));
                arr_5 [12LL] [i_0] [i_0] &= (-((-(((((/* implicit */_Bool) var_15)) ? (-6860851575473352288LL) : (var_11))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [2LL]) - (-6860851575473352316LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [14LL])) ? (var_0) : ((~(-6914757491348689670LL)))))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_4] = (((~(min((var_5), (var_10))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5749231965664425744LL)) ? (var_8) : (arr_7 [i_2])))))))));
                    var_17 = min(((~(-527314021976187181LL))), (((long long int) 134217727LL)));
                    var_18 = ((/* implicit */long long int) min((var_18), (arr_12 [i_2] [i_2] [i_2 - 1])));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 23; i_7 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_26 [i_2] [i_5] [i_2] [3LL] [i_7] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6914757491348689658LL)) ? (var_5) : (var_13)))) ? (max((arr_24 [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2]), (var_9))) : (-5055280516867357787LL)))) ? (min((((long long int) -527314021976187164LL)), (max((arr_21 [i_5] [i_5]), (var_4))))) : (((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 + 1])) ? (var_7) : (var_11))));
                            arr_27 [i_2] [i_2] = ((((/* implicit */_Bool) (+(((((-6860851575473352293LL) + (9223372036854775807LL))) << (((1073741823LL) - (1073741823LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_20 [i_8] [i_7]))))))) : (((((/* implicit */_Bool) arr_9 [i_7 - 2] [i_7 + 1] [i_2 - 1])) ? (((arr_10 [i_7] [i_6] [i_5]) >> (((var_5) - (4752875857129404879LL))))) : (max((-2278555489848426847LL), (-527314021976187187LL))))));
                        }
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9085653872004703205LL)) ? (var_5) : (((long long int) var_14))))) ? (((long long int) max((var_6), (var_1)))) : (7116628288144982797LL)))));
                            var_20 = (+(var_6));
                        }
                        var_21 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (6860851575473352292LL) : (arr_22 [i_2] [i_2] [i_2 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (9223372036854775777LL) : (var_9)))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) >= (var_4))))))) : (var_3));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    {
                        arr_37 [i_2] = max((((-6860851575473352289LL) - (-4596369725892592319LL))), ((~(-3422725997968926573LL))));
                        var_22 = (+(max((arr_24 [4LL] [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2]), (var_6))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                        {
                            var_23 = arr_21 [i_2] [i_2 + 3];
                            var_24 = ((/* implicit */long long int) max((var_24), (var_15)));
                        }
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (min(((~(7792661143356733826LL))), (var_6)))));
                            arr_42 [i_2] [i_2] [i_10] [i_11] [i_10] [i_10] = arr_23 [i_2 + 3] [i_2 + 3] [i_11] [i_13];
                            var_26 = var_2;
                            var_27 ^= 6914757491348689684LL;
                        }
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                        {
                            arr_45 [i_2] [i_5] [i_2] [i_5] [i_5] = ((var_13) >> (((6860851575473352291LL) - (6860851575473352286LL))));
                            var_28 = var_13;
                            arr_46 [i_2] [i_5] [i_2] [i_11] [i_14] [i_14] = ((long long int) min((((-4596369725892592318LL) + (6914757491348689661LL))), ((-(var_11)))));
                        }
                        var_29 = (((~(var_6))) + (max((var_11), (9223372036854775780LL))));
                    }
                } 
            } 
            arr_47 [i_2] [i_5] = ((((((/* implicit */_Bool) arr_20 [i_2] [15LL])) ? (527314021976187211LL) : (arr_20 [i_2] [i_5]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
        for (long long int i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                for (long long int i_17 = 3; i_17 < 22; i_17 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_18 = 1; i_18 < 21; i_18 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (var_15)));
                            var_31 = ((long long int) var_4);
                            arr_57 [i_2] [i_15] [i_16] [i_17] [i_17] [i_2] = (-(min((((/* implicit */long long int) ((arr_50 [i_2] [i_2] [i_2]) >= (6860851575473352289LL)))), (max((-19LL), (5650586535964387438LL))))));
                        }
                        /* vectorizable */
                        for (long long int i_19 = 1; i_19 < 21; i_19 += 4) /* same iter space */
                        {
                            var_32 = (-(6860851575473352272LL));
                            var_33 = var_13;
                            var_34 = ((/* implicit */long long int) max((var_34), (((long long int) ((((/* implicit */_Bool) var_14)) ? (var_8) : (var_11))))));
                            var_35 = ((((/* implicit */_Bool) var_13)) ? (-6860851575473352258LL) : ((+(var_14))));
                        }
                        for (long long int i_20 = 1; i_20 < 21; i_20 += 4) /* same iter space */
                        {
                            var_36 = max((((arr_31 [i_15] [i_15] [i_16] [i_20]) / ((+(var_0))))), (((var_9) - (arr_48 [i_2] [i_2 + 2] [i_17]))));
                            var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((long long int) 6860851575473352296LL)) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (var_15)))))) ? ((-(2088382828572125338LL))) : (max((((((/* implicit */_Bool) arr_48 [7LL] [7LL] [i_20])) ? (6860851575473352308LL) : (var_3))), (-6914757491348689658LL))));
                        }
                        for (long long int i_21 = 1; i_21 < 23; i_21 += 4) 
                        {
                            arr_65 [i_2] = ((/* implicit */long long int) (((((~(var_13))) - (var_10))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_2] [i_17] [i_17 - 3]) == (((19LL) >> (((var_12) + (9213813278173370861LL)))))))))));
                            arr_66 [i_16] [i_16] [3LL] [i_2] [i_21] = ((var_3) / (((((/* implicit */_Bool) max((var_8), (-6959276194674216162LL)))) ? (var_3) : (9223372036854775795LL))));
                            var_38 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((6504013110230134655LL), (arr_64 [i_15])))) && (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_11)))))))) : (arr_6 [i_15] [i_21]));
                        }
                        var_39 = max((((arr_62 [i_2] [i_15] [i_2] [i_2] [i_2 + 1]) - (var_15))), (((arr_62 [i_16] [i_16] [i_16] [11LL] [11LL]) + (var_4))));
                        var_40 = ((/* implicit */long long int) max((var_40), (7509431968223783598LL)));
                    }
                } 
            } 
            arr_67 [i_2] [i_2] [20LL] = (i_2 % 2 == 0) ? (((((((/* implicit */_Bool) var_10)) ? (arr_31 [i_2] [i_2 + 1] [i_2] [i_15]) : (arr_31 [i_2] [i_2 + 1] [i_15] [i_15]))) >> (((min((var_6), (arr_31 [i_2] [i_2 + 1] [i_15] [i_15]))) - (3810301122870310185LL))))) : (((((((/* implicit */_Bool) var_10)) ? (arr_31 [i_2] [i_2 + 1] [i_2] [i_15]) : (arr_31 [i_2] [i_2 + 1] [i_15] [i_15]))) >> (((((min((var_6), (arr_31 [i_2] [i_2 + 1] [i_15] [i_15]))) - (3810301122870310185LL))) + (2633528684934878282LL)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                var_41 |= ((((long long int) var_2)) >> ((((+(4075166884018480581LL))) - (4075166884018480536LL))));
                /* LoopSeq 4 */
                for (long long int i_23 = 0; i_23 < 24; i_23 += 1) /* same iter space */
                {
                    arr_72 [i_22] [i_22] [i_22] [i_2] [i_2] = (((~(arr_32 [i_2] [15LL] [i_2]))) - (((((/* implicit */_Bool) 17179738112LL)) ? (arr_36 [i_2] [i_15] [i_2] [i_2]) : (arr_8 [i_2]))));
                    arr_73 [i_15] [i_2] = (-(var_11));
                }
                for (long long int i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
                {
                    var_42 = arr_38 [i_2] [i_24] [i_2] [i_24] [i_22] [i_22] [i_22];
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [i_2 + 3] [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 3])))))));
                }
                for (long long int i_25 = 0; i_25 < 24; i_25 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */long long int) ((363655059403593408LL) >= (((17LL) % (-363655059403593410LL)))));
                    arr_80 [i_2] [i_2] [i_15] [i_22] [i_25] = ((long long int) var_11);
                    arr_81 [i_2 + 3] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                }
                for (long long int i_26 = 0; i_26 < 24; i_26 += 1) /* same iter space */
                {
                    arr_84 [i_2] [i_15] [21LL] [21LL] [i_26] [i_2] = arr_12 [i_2] [i_2] [i_2];
                    /* LoopSeq 1 */
                    for (long long int i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        arr_89 [i_2 - 1] [i_15] [i_2] [i_15] [i_26] [3LL] = ((((/* implicit */_Bool) var_12)) ? (4075166884018480596LL) : (arr_54 [i_2 + 1] [i_2 + 1] [i_22] [i_2 + 1] [i_2]));
                        arr_90 [i_2] [i_2] [i_26] = -6914757491348689664LL;
                        var_45 = ((long long int) 6118301154392617179LL);
                    }
                }
                var_46 = ((7649341467597500590LL) - (var_2));
            }
        }
        for (long long int i_28 = 0; i_28 < 24; i_28 += 4) /* same iter space */
        {
            arr_94 [i_28] [i_2] &= max((((/* implicit */long long int) ((-5868391948692794872LL) < (-1016109766690921289LL)))), (6914757491348689658LL));
            arr_95 [i_2] = ((/* implicit */long long int) ((min((5856787563624196514LL), (((8367729055816195963LL) & (8367729055816195963LL))))) > (var_8)));
            /* LoopNest 3 */
            for (long long int i_29 = 0; i_29 < 24; i_29 += 4) 
            {
                for (long long int i_30 = 0; i_30 < 24; i_30 += 2) 
                {
                    for (long long int i_31 = 0; i_31 < 24; i_31 += 2) 
                    {
                        {
                            arr_104 [i_2] = var_6;
                            var_47 &= max((((((/* implicit */_Bool) 6118301154392617171LL)) ? (-6914757491348689651LL) : (-20LL))), ((-(arr_83 [i_30]))));
                            var_48 = ((/* implicit */long long int) max((var_48), ((~(((long long int) 18010000462970880LL))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (long long int i_32 = 0; i_32 < 24; i_32 += 1) 
        {
            var_49 = min((((var_9) - (((long long int) 7577067075849107727LL)))), (((((/* implicit */_Bool) var_9)) ? (var_6) : (4621512983137014051LL))));
            /* LoopNest 2 */
            for (long long int i_33 = 0; i_33 < 24; i_33 += 1) 
            {
                for (long long int i_34 = 3; i_34 < 21; i_34 += 4) 
                {
                    {
                        var_50 &= ((/* implicit */long long int) ((var_3) != (((((/* implicit */_Bool) min((1152921504338411520LL), (6914757491348689665LL)))) ? (((long long int) var_15)) : (((((/* implicit */_Bool) -18010000462970889LL)) ? (-172683888581692526LL) : (arr_97 [i_2] [12LL] [i_2] [i_34])))))));
                        arr_113 [i_2] [i_2 + 3] [i_32] [i_33] [i_2 + 3] [i_2] = (~(((((/* implicit */_Bool) arr_88 [i_2] [i_34 - 3] [i_34 + 1] [i_34] [i_2 + 3])) ? (var_13) : (arr_44 [i_2] [21LL] [i_34 + 1] [i_2] [i_2 + 3]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_35 = 0; i_35 < 24; i_35 += 2) 
        {
            for (long long int i_36 = 0; i_36 < 24; i_36 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_37 = 0; i_37 < 24; i_37 += 1) 
                    {
                        for (long long int i_38 = 0; i_38 < 24; i_38 += 4) 
                        {
                            {
                                var_51 = min((max((6914757491348689651LL), (9223372036854775807LL))), (4398046511103LL));
                                var_52 = -21LL;
                                arr_123 [i_2] [i_37] [13LL] = var_14;
                                var_53 += (((+(((var_7) / (arr_43 [i_2 - 1] [i_36] [i_2 - 1] [i_2 - 1]))))) / ((-(((((/* implicit */_Bool) var_1)) ? (12LL) : (arr_29 [i_2] [i_2] [i_2] [i_36] [i_37] [i_38]))))));
                            }
                        } 
                    } 
                    arr_124 [i_2] [i_2] [i_2] [i_2] = ((long long int) var_6);
                    arr_125 [i_2 + 1] [i_2] [i_2] [i_2] = max((7508493365183690519LL), (max((((arr_38 [i_2] [i_2] [i_36] [i_2] [i_36] [i_36] [i_35]) - (var_9))), ((+(var_11))))));
                    var_54 = var_12;
                    /* LoopSeq 3 */
                    for (long long int i_39 = 0; i_39 < 24; i_39 += 2) /* same iter space */
                    {
                        var_55 = max(((+(((var_9) / (18010000462970875LL))))), ((~(max((-6914757491348689666LL), (arr_52 [i_36] [i_36] [i_36] [i_36] [i_36]))))));
                        arr_128 [i_2 + 1] [i_2] [i_2 + 1] [i_36] [17LL] [i_36] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) -18010000462970889LL)) ? (-8LL) : (6107870001833052477LL))));
                    }
                    for (long long int i_40 = 0; i_40 < 24; i_40 += 2) /* same iter space */
                    {
                        var_56 = (~((-(max((var_10), (9071122496708355982LL))))));
                        arr_133 [7LL] [i_2] [i_2] [i_2] = ((max((-7000714424183578374LL), (var_15))) + (-9194170363598630098LL));
                    }
                    for (long long int i_41 = 0; i_41 < 24; i_41 += 2) 
                    {
                        arr_137 [i_2] [i_35] = (~(min((-8475590429912359251LL), (((((/* implicit */_Bool) arr_76 [i_36] [i_36] [i_36] [2LL])) ? (7094971365245850733LL) : ((-9223372036854775807LL - 1LL)))))));
                        var_57 = ((long long int) -4LL);
                        var_58 = var_12;
                        var_59 = ((long long int) -230208147046254888LL);
                        var_60 = (-(arr_127 [i_41]));
                    }
                }
            } 
        } 
    }
}
