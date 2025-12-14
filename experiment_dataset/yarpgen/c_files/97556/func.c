/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97556
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            var_20 = arr_1 [i_0];
            var_21 &= max((min((-942571446567687647LL), ((+(-221186783474659979LL))))), ((+(((long long int) 942571446567687654LL)))));
        }
        var_22 = -221186783474659967LL;
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 13; i_5 += 2) 
                    {
                        var_23 = ((((arr_15 [i_4 - 1] [i_4 - 1] [i_5 + 2]) ^ (-7985022967725331953LL))) >> (((min((arr_15 [i_4 - 1] [i_5] [i_5 - 2]), (arr_15 [i_4 + 2] [i_5] [i_5 + 3]))) + (5563328121909965769LL))));
                        var_24 = var_12;
                        var_25 = max((3358371778885002660LL), (-942571446567687647LL));
                        var_26 = ((/* implicit */long long int) min((var_26), ((~(-169104643798262979LL)))));
                        var_27 = -8338072516549558349LL;
                    }
                    var_28 = ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (9223372036854775787LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) -3068509063166987964LL))))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        var_29 = arr_10 [i_2] [i_2] [i_2] [i_2];
                        var_30 = ((/* implicit */long long int) min((var_30), (min((7341605345452152366LL), (((2633145854738972272LL) / (-6529592644314975841LL)))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        arr_20 [i_3] [i_3] [i_3] |= ((((long long int) var_1)) & (((((/* implicit */_Bool) 1073741760LL)) ? (var_18) : (arr_7 [i_3] [i_7]))));
                        var_31 = 9223372036854775807LL;
                        arr_21 [i_2] [i_3] [i_2] [9LL] = ((((/* implicit */_Bool) 5734206736189588386LL)) ? (((long long int) (-9223372036854775807LL - 1LL))) : (arr_17 [i_3]));
                        var_32 = ((-6259778426300586540LL) / (-942571446567687655LL));
                        var_33 = ((/* implicit */long long int) max((var_33), (((long long int) ((-6866419739393504821LL) - (arr_13 [i_3] [i_3] [i_3]))))));
                    }
                }
            } 
        } 
        arr_22 [4LL] &= ((((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2])) ? (max((arr_7 [14LL] [i_2]), (-3330419622147555523LL))) : (max((5730701307865653045LL), (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [12LL]))))) & ((((~(arr_8 [12LL]))) ^ (((((/* implicit */_Bool) -1641103938056412974LL)) ? (5690830834475478805LL) : ((-9223372036854775807LL - 1LL)))))));
    }
    for (long long int i_8 = 3; i_8 < 19; i_8 += 3) 
    {
        arr_25 [i_8 + 1] [i_8 + 1] = -6811822636623533172LL;
        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 934650016204591202LL))));
        var_35 = max((((/* implicit */long long int) ((-36028797018963968LL) >= (arr_24 [i_8 - 1])))), (max((arr_23 [i_8 + 2] [i_8]), (arr_23 [i_8 + 1] [i_8 + 1]))));
        arr_26 [i_8 + 1] [8LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (7011204715632549733LL))))));
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_36 = max((((((/* implicit */_Bool) (+(-4265631728446680156LL)))) ? (max((arr_28 [i_8]), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((-5730701307865653060LL) >= (-221186783474659979LL))))))), (arr_23 [i_8 - 3] [i_8 - 2]));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                var_37 = ((/* implicit */long long int) min((var_37), (((((/* implicit */_Bool) arr_30 [i_9] [6LL])) ? (arr_23 [i_8 - 1] [i_8 + 2]) : (-6577809701433989872LL)))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    var_38 &= ((5734206736189588379LL) | (-8074371010857921489LL));
                    var_39 = ((/* implicit */long long int) max((var_39), (arr_24 [i_8])));
                    arr_34 [i_11] [i_11] = (-9223372036854775807LL - 1LL);
                    /* LoopSeq 3 */
                    for (long long int i_12 = 1; i_12 < 20; i_12 += 3) 
                    {
                        var_40 ^= ((long long int) 103358977146951858LL);
                        var_41 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 2821687691461327576LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_24 [i_11]) : (2166460537801723718LL))))));
                    }
                    for (long long int i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        arr_40 [i_9] [19LL] [i_9] [i_9] = ((long long int) ((9223372036854775807LL) & (arr_35 [i_8] [i_8] [i_10] [i_8] [i_13])));
                        var_42 = ((/* implicit */long long int) ((9190447209595804329LL) != (9223372036854775807LL)));
                    }
                    for (long long int i_14 = 2; i_14 < 20; i_14 += 2) 
                    {
                        arr_44 [i_9] [7LL] [i_9] [17LL] [4LL] = ((-5779525728268831879LL) + (7623171595146247442LL));
                        var_43 = arr_39 [i_11] [i_11] [i_11] [i_11] [i_11];
                        arr_45 [i_10] [i_11] [i_9] [i_14] [i_14 + 1] [i_14] [i_10] = ((var_11) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6866419739393504835LL)) && (((/* implicit */_Bool) 9223372036854775787LL)))))));
                    }
                }
                var_44 = ((((/* implicit */_Bool) -8481551395637757302LL)) ? (arr_39 [i_9] [i_10] [i_8 + 1] [10LL] [i_8 - 1]) : (-8481551395637757302LL));
                var_45 = ((1282823818532598643LL) << (((var_6) - (3279291720112642212LL))));
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    var_46 = ((((/* implicit */_Bool) arr_49 [12LL] [i_15] [i_15] [12LL])) ? (-1191214279186418130LL) : (14LL));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 2; i_16 < 19; i_16 += 3) 
                    {
                        arr_53 [i_10] [17LL] [i_10] [i_10] [i_15] = ((-1424474075068159445LL) & (2976518095543466837LL));
                        var_47 = ((long long int) ((((/* implicit */_Bool) arr_46 [i_16 - 1] [i_15] [i_16 - 1] [15LL])) ? (arr_32 [i_10] [i_10]) : (arr_29 [i_8 - 2] [i_8 - 2] [i_15])));
                        arr_54 [i_16] [i_15] [i_16] = ((((/* implicit */_Bool) arr_43 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16])) ? (arr_39 [i_16 - 2] [i_16] [i_16] [i_15] [i_10]) : (arr_39 [i_16 + 1] [i_8] [i_8] [4LL] [4LL]));
                        arr_55 [i_16 - 1] [i_15] [i_15] [i_10] [i_15] [i_9] [i_8] = ((long long int) 7064280052027327168LL);
                    }
                }
            }
            for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        {
                            var_48 = (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) -6092980470034645304LL)) ? ((-9223372036854775807LL - 1LL)) : (arr_57 [i_17] [i_17] [i_17]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7097130718333148250LL)))))))));
                            arr_66 [i_9] = min((max((5386763078344481496LL), (-9223372036854775787LL))), (arr_27 [12LL] [i_8 + 1] [i_8 + 1]));
                        }
                    } 
                } 
                var_49 = max((((min((arr_59 [i_17] [i_17] [i_17] [i_17]), (-4537363048193487726LL))) & (((long long int) -9223372036854775800LL)))), (((/* implicit */long long int) ((arr_32 [i_17] [i_9]) < (((-8802966903101753424LL) / (arr_59 [i_17] [i_9] [i_9] [i_8])))))));
                var_50 = (((~(-244917576511898545LL))) ^ ((~(5686188154581044520LL))));
                var_51 = ((long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_38 [i_8 + 2] [i_8 - 3] [i_8 + 1]) : (arr_38 [i_8 - 2] [i_8 + 1] [i_8 - 1])));
                var_52 &= max(((+((-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) -7138663904154547590LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_56 [i_17] [i_8] [i_8]) >= (-7341605345452152369LL))))) : (((long long int) -1282823818532598628LL)))));
            }
            for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_21 = 1; i_21 < 19; i_21 += 3) 
                {
                    for (long long int i_22 = 2; i_22 < 19; i_22 += 1) 
                    {
                        {
                            arr_74 [i_9] [i_9] [i_21] [i_22 + 1] = ((((/* implicit */_Bool) max((arr_28 [i_8 - 3]), (arr_61 [i_22] [i_22 + 2] [i_22 - 2] [i_22 - 1])))) ? (-5774188541364524194LL) : (3486468807705746587LL));
                            arr_75 [i_8] [i_9] [i_9] [i_20] [i_21] [i_22] = ((long long int) ((((3568252818097296682LL) != (-5774188541364524194LL))) ? (arr_36 [i_8]) : (((long long int) var_2))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_24 = 0; i_24 < 21; i_24 += 3) 
                    {
                        var_53 += ((/* implicit */long long int) ((-7699643819672862500LL) > (-876936861102989168LL)));
                        arr_83 [i_8 + 1] [i_8] [14LL] [16LL] [16LL] = ((/* implicit */long long int) ((arr_63 [i_20] [i_8 + 2] [i_9] [i_24] [i_23] [i_20]) >= (((6004340002505730493LL) | (876936861102989167LL)))));
                        var_54 = ((((((/* implicit */_Bool) arr_63 [i_20] [i_8] [i_23] [i_20] [i_20] [i_8])) ? (var_18) : (arr_32 [i_20] [i_24]))) ^ (((((/* implicit */_Bool) 9007199254478848LL)) ? (-1770597030428197535LL) : (9223372036854775807LL))));
                        arr_84 [i_8] = (~(-1424474075068159451LL));
                    }
                    /* vectorizable */
                    for (long long int i_25 = 2; i_25 < 20; i_25 += 4) 
                    {
                        var_55 = -1424474075068159446LL;
                        arr_87 [i_23] = (-(3566596368661116525LL));
                        var_56 |= 9223372036854775807LL;
                        var_57 = ((long long int) arr_56 [i_25] [i_25] [i_25]);
                    }
                    var_58 = -1LL;
                }
                for (long long int i_26 = 0; i_26 < 21; i_26 += 2) 
                {
                    arr_92 [i_8 - 1] [2LL] [i_8] [i_8 - 1] [i_8] [i_8] = 7699643819672862483LL;
                    /* LoopSeq 1 */
                    for (long long int i_27 = 4; i_27 < 18; i_27 += 2) 
                    {
                        var_59 = ((long long int) -8171100899315763952LL);
                        arr_95 [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_64 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))))));
                        var_60 = ((/* implicit */long long int) max((var_60), (((((-7001409566660290552LL) + (9223372036854775807LL))) << (((8419314706635576274LL) - (8419314706635576274LL)))))));
                        arr_96 [i_27] [i_27 + 1] [13LL] = 3641078282968488642LL;
                    }
                }
                for (long long int i_28 = 1; i_28 < 20; i_28 += 3) 
                {
                    var_61 = (+(((((/* implicit */_Bool) arr_86 [i_28 + 1] [i_8 - 3] [i_28 - 1] [i_28 - 1] [4LL])) ? (arr_86 [i_28 + 1] [i_8 - 3] [i_28 + 1] [i_8 - 3] [i_9]) : (arr_86 [i_28 + 1] [i_8 - 3] [i_28 + 1] [i_20] [i_28 + 1]))));
                    var_62 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -8171100899315763931LL)) ? (2140685810392152054LL) : (2140685810392152062LL)))) && (((/* implicit */_Bool) arr_60 [i_8] [i_9] [13LL] [i_9])))) || (((/* implicit */_Bool) ((long long int) 3171005596413515216LL)))));
                    var_63 = ((/* implicit */long long int) (~(((/* implicit */int) (((~((-9223372036854775807LL - 1LL)))) >= ((-9223372036854775807LL - 1LL)))))));
                    var_64 = ((/* implicit */long long int) min((var_64), (min((4323455642275676160LL), (221186783474659989LL)))));
                }
                var_65 = ((/* implicit */long long int) max((var_65), (arr_23 [i_9] [i_9])));
                var_66 = 8171100899315763951LL;
                /* LoopSeq 1 */
                for (long long int i_29 = 0; i_29 < 21; i_29 += 2) 
                {
                    var_67 = 3064262266012465046LL;
                    arr_104 [19LL] [19LL] [i_20] [i_29] = ((8171100899315763950LL) % (-3064262266012465047LL));
                    arr_105 [i_20] = ((3064262266012465052LL) % (3231668430014770584LL));
                }
            }
            arr_106 [i_9] = max((((long long int) ((((/* implicit */_Bool) -8184560795587781867LL)) ? (-8503290352299037930LL) : (-7618152159844426864LL)))), (((((/* implicit */_Bool) ((long long int) arr_81 [i_8] [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_9]))) ? (min((-3064262266012465037LL), (-5413887851982412452LL))) : (((long long int) -5680322253933625886LL)))));
        }
        for (long long int i_30 = 1; i_30 < 20; i_30 += 1) 
        {
            var_68 = ((((5664898166008617083LL) / (-9223372036854775787LL))) / (7299344892945088651LL));
            /* LoopSeq 2 */
            for (long long int i_31 = 2; i_31 < 20; i_31 += 3) 
            {
                arr_112 [i_8] [i_30 + 1] [i_30] [i_31] = ((long long int) ((((/* implicit */_Bool) arr_77 [i_30 + 1] [i_30] [i_30 + 1])) ? ((~(-3231668430014770584LL))) : (arr_77 [i_31] [i_31 - 1] [i_31])));
                /* LoopNest 2 */
                for (long long int i_32 = 0; i_32 < 21; i_32 += 2) 
                {
                    for (long long int i_33 = 0; i_33 < 21; i_33 += 3) 
                    {
                        {
                            var_69 = ((long long int) 109918917569491883LL);
                            var_70 = ((/* implicit */long long int) max((var_70), (arr_49 [i_30] [i_31 + 1] [i_32] [i_33])));
                            var_71 = ((((/* implicit */_Bool) -2888759123816398657LL)) ? (((5680322253933625886LL) | (arr_117 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33]))) : (((long long int) arr_117 [i_30] [i_31 + 1] [i_30] [i_31] [i_33] [i_30])));
                            var_72 = -2731832264291500868LL;
                            arr_120 [i_8] [i_32] [i_32] [i_31 - 2] [i_8] [i_8] = min((min((arr_76 [i_8 - 2] [i_8 - 2] [i_33]), (arr_76 [i_32] [i_32] [i_32]))), ((+(-4611686018427387904LL))));
                        }
                    } 
                } 
            }
            for (long long int i_34 = 2; i_34 < 19; i_34 += 3) 
            {
                arr_124 [i_34 + 1] [i_30] [i_8] = ((long long int) -822411013902381849LL);
                var_73 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [11LL])) && ((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
            }
            var_74 &= 9223372036854775802LL;
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_35 = 0; i_35 < 17; i_35 += 1) 
    {
        arr_129 [14LL] = ((arr_111 [1LL]) + (-8184560795587781840LL));
        /* LoopSeq 1 */
        for (long long int i_36 = 2; i_36 < 16; i_36 += 4) 
        {
            var_75 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17179868160LL)) ? (arr_50 [i_35] [i_36] [i_36]) : (arr_51 [i_36])))) && (((/* implicit */_Bool) 8793945538560LL))));
            var_76 = 9223372036854775807LL;
            var_77 = ((((arr_101 [17LL] [17LL] [17LL] [i_36 - 1] [i_36 - 2]) + (9223372036854775807LL))) >> (((2835585827056950249LL) - (2835585827056950195LL))));
        }
        var_78 = ((/* implicit */long long int) max((var_78), ((~(-2608499900313903399LL)))));
    }
    var_79 = 3622218749960523141LL;
    /* LoopSeq 2 */
    for (long long int i_37 = 0; i_37 < 17; i_37 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_38 = 1; i_38 < 14; i_38 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_39 = 2; i_39 < 14; i_39 += 1) 
            {
                var_80 = arr_117 [i_38] [i_39 + 2] [i_39 - 1] [i_38 + 2] [i_37] [i_37];
                var_81 = ((((((((/* implicit */_Bool) (~(6457906804644536709LL)))) ? ((~(536870911LL))) : (((((/* implicit */_Bool) arr_72 [i_38 + 3] [i_38 + 3])) ? (-9223372036854775800LL) : (5742871842889502153LL))))) + (9223372036854775807LL))) << (((((max((-6974872509887421308LL), (-114744442720606155LL))) + (114744442720606162LL))) - (7LL))));
            }
            var_82 = ((((/* implicit */_Bool) min((((((-9223372036854775807LL) + (9223372036854775807LL))) >> (((-5446434249538577177LL) + (5446434249538577209LL))))), (((long long int) arr_72 [i_38 - 1] [i_38 - 1]))))) ? ((+(6097740215284553466LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1556649587690497698LL)) ? (-9223372036854775788LL) : (9223372036854775787LL))) <= ((~(8184560795587781862LL))))))));
        }
        var_83 = 9223372036854775807LL;
        /* LoopSeq 2 */
        for (long long int i_40 = 1; i_40 < 15; i_40 += 1) /* same iter space */
        {
            var_84 = arr_80 [i_37] [i_40] [i_40] [i_37] [i_37];
            var_85 = ((/* implicit */long long int) max((var_85), (((long long int) max((((/* implicit */long long int) ((1556649587690497707LL) != (9223372036854775807LL)))), ((((-9223372036854775807LL - 1LL)) ^ (arr_69 [i_37] [i_37] [i_37] [i_37] [i_37] [i_40]))))))));
            var_86 = ((/* implicit */long long int) min((var_86), (((long long int) ((long long int) arr_111 [i_40 - 1])))));
        }
        for (long long int i_41 = 1; i_41 < 15; i_41 += 1) /* same iter space */
        {
            var_87 = ((long long int) max((arr_144 [i_37] [i_41 + 1] [i_37]), (-8473994099889484049LL)));
            arr_147 [i_37] [i_37] [i_41 - 1] = 848387600972138733LL;
            var_88 = arr_30 [i_41] [i_41 + 2];
            var_89 = 8346621158813447577LL;
            var_90 = ((long long int) max((-7838853217483973118LL), (7025930840410243762LL)));
        }
        /* LoopSeq 1 */
        for (long long int i_42 = 2; i_42 < 15; i_42 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_43 = 0; i_43 < 17; i_43 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_44 = 0; i_44 < 17; i_44 += 1) 
                {
                    for (long long int i_45 = 0; i_45 < 17; i_45 += 1) 
                    {
                        {
                            arr_158 [8LL] [i_44] [i_43] [8LL] &= 114744442720606154LL;
                            var_91 &= ((/* implicit */long long int) ((((long long int) arr_88 [i_44] [i_42] [i_44] [i_37] [i_42 - 2])) >= (8184560795587781888LL)));
                            var_92 = min(((+(-221186783474659989LL))), (max((arr_133 [i_37]), (-3649247190499286586LL))));
                            var_93 = ((/* implicit */long long int) min((var_93), ((+(((long long int) max((-9080511740624473084LL), (arr_133 [i_44]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_46 = 0; i_46 < 17; i_46 += 4) 
                {
                    for (long long int i_47 = 0; i_47 < 17; i_47 += 3) 
                    {
                        {
                            arr_166 [i_37] [i_47] [i_43] [i_37] [i_46] [i_43] = 1124800395214848LL;
                            var_94 = ((max((((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775806LL)) && (((/* implicit */_Bool) -9223372036854775806LL))))), (((9223372036854775805LL) >> (((arr_130 [i_42 + 2] [i_43] [i_46]) - (5337533349357783521LL))))))) >> (((((((-9223372036854775788LL) & (arr_164 [i_46] [i_46] [i_43] [i_43]))) - (-9223372036854775784LL))) + (82LL))));
                        }
                    } 
                } 
                arr_167 [i_43] [i_43] [i_42] [3LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775788LL)) ? (1124800395214849LL) : (6526416010306168747LL)))) ? (((long long int) (!(((/* implicit */_Bool) arr_128 [i_43]))))) : (min((((((/* implicit */_Bool) -9223372036854775787LL)) ? (arr_42 [i_42] [i_43] [i_37] [3LL] [i_37] [3LL] [i_37]) : (arr_76 [i_37] [i_42 - 2] [i_37]))), (min((var_12), (3649247190499286585LL))))));
                arr_168 [i_37] [i_43] [i_37] [i_37] = -9223372036854775796LL;
            }
            var_95 = ((9223372036854775807LL) - (((9223372036854775807LL) / (arr_100 [i_42 + 1] [i_42 - 1] [i_42 - 2] [i_42 + 1] [i_42 + 2]))));
            var_96 = ((((/* implicit */_Bool) (~(-4086900079560294982LL)))) ? (max((arr_163 [i_42] [i_42 - 1] [i_42 - 1] [i_42 - 1] [i_42 - 1]), (((((/* implicit */_Bool) arr_58 [i_42])) ? (-9024188619395216198LL) : (9223372036854775804LL))))) : (min((221186783474659987LL), (arr_163 [i_42] [i_42 - 1] [i_42 - 1] [i_42 - 1] [i_42 + 1]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_48 = 3; i_48 < 16; i_48 += 1) 
            {
                arr_172 [i_42] = ((/* implicit */long long int) (((-(arr_118 [i_48] [i_48 + 1] [11LL] [i_48] [6LL]))) != (arr_128 [i_42 + 1])));
                arr_173 [i_48] [i_42 + 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1124800395214829LL)) ? (arr_125 [7LL]) : (arr_137 [i_48] [i_42 - 1] [16LL]))) > ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_7) - (4528647251183902433LL)))))));
            }
            arr_174 [i_42] [i_42] [i_42 - 1] = max((((long long int) -8900874523484051210LL)), (arr_65 [i_42 - 1] [i_42 - 1]));
        }
    }
    for (long long int i_49 = 1; i_49 < 7; i_49 += 4) 
    {
        var_97 = arr_126 [i_49];
        var_98 = ((/* implicit */long long int) min((var_98), (7888742364586015637LL)));
    }
    var_99 ^= ((long long int) var_3);
}
