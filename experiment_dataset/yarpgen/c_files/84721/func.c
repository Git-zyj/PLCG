/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84721
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 6; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_13 = ((((var_4) + ((-(var_1))))) % (max(((~(arr_1 [i_0]))), (((unsigned long long int) arr_1 [i_0])))));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (var_6)));
                        }
                        arr_16 [i_0] [i_1] [i_2] [i_3] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (4611684918915760128ULL))))) == (13835059154793791505ULL))) ? ((~(((((/* implicit */_Bool) 14191199111630910521ULL)) ? (4643122816726523053ULL) : (16068132617947619636ULL))))) : (((var_10) % (4008162744266984732ULL))));
                        arr_17 [i_0] = max(((+(min((var_9), (13835059154793791488ULL))))), (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3 - 1] [i_3] [i_3])) ? (2892123907376310112ULL) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (13388230434572887196ULL) : (var_0))))));
                        var_15 = var_3;
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            var_16 ^= max((((/* implicit */unsigned long long int) ((min((var_3), (arr_15 [i_0] [0ULL] [0ULL] [i_5] [i_5]))) == (((6589700730321614052ULL) * (arr_21 [i_0] [i_0] [i_0])))))), (13835059154793791509ULL));
            var_17 = var_1;
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                {
                    arr_31 [i_8] = min((var_7), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13835059154793791488ULL))))));
                    var_18 = (((~(((((/* implicit */_Bool) 13835059154793791487ULL)) ? (0ULL) : (18446744073709551615ULL))))) + (((18287794992734554457ULL) & (arr_30 [i_7] [i_8 + 1] [i_8 - 1] [i_8 + 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    var_19 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((4611684918915760125ULL) == (0ULL))))));
                    var_20 = ((unsigned long long int) ((min((var_5), (var_12))) - (arr_32 [i_9])));
                    arr_39 [i_9] [i_10] [i_9] = max(((+(arr_38 [i_11] [i_11] [i_11] [i_9]))), (((unsigned long long int) ((var_5) == (var_10)))));
                    arr_40 [i_9] [i_10] = min((min((18446744073709551608ULL), (var_8))), ((~(((((/* implicit */_Bool) var_2)) ? (var_0) : (var_0))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    var_21 ^= min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 137438953471ULL))))), (((4611684918915760128ULL) + (3580935956417342876ULL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_37 [i_9] [i_10] [i_12])) ? (var_12) : (4611684918915760107ULL))), (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (arr_37 [i_9 + 3] [i_10] [i_13]))))) + (arr_46 [i_9 + 1] [i_9 + 1]))))));
                        var_23 ^= max((max((var_12), (((15741768742577342422ULL) << (((arr_34 [i_9] [i_9] [i_9]) - (11736968723851311145ULL))))))), (((2965375056899378906ULL) >> (((var_7) - (12795378268501953649ULL))))));
                        var_24 ^= ((min((arr_38 [i_9] [i_9 + 4] [i_9 + 4] [12ULL]), (var_5))) | (((((/* implicit */_Bool) 10074243521537863769ULL)) ? (12441603743166562019ULL) : (arr_38 [i_9] [i_9 + 3] [i_9 + 1] [i_12]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            var_25 = arr_37 [i_12] [i_10] [i_12];
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) arr_48 [i_9 + 2] [i_14] [i_9] [i_13] [i_14])) ? (var_8) : (arr_48 [i_9 + 1] [20ULL] [i_10] [i_12] [i_14])))));
                            arr_49 [i_9] [i_12] [i_14] = ((unsigned long long int) var_4);
                            var_27 = var_0;
                            arr_50 [i_9 + 1] [i_9] = ((((0ULL) / (6638919220067883817ULL))) >> (((((unsigned long long int) var_2)) - (9125697603327005770ULL))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((arr_35 [22ULL]) * (0ULL)))));
                            var_29 ^= arr_34 [i_9] [14ULL] [i_9];
                            arr_54 [i_9] [i_13] [i_15] = min((((((/* implicit */_Bool) arr_47 [i_9 + 1] [i_9] [i_9] [i_9 + 1])) ? (var_6) : (arr_47 [i_9 - 1] [i_9] [i_9] [i_9 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_9 + 4] [i_9 + 2] [i_9] [i_9 + 4])) && (((/* implicit */_Bool) arr_47 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            var_30 = (((((-(var_6))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3575169291342887890ULL)) && (((/* implicit */_Bool) var_7)))))))) + (max((max((var_1), (0ULL))), (min((var_5), (var_5))))));
                            arr_58 [i_9] [18ULL] [i_10] [i_12] [i_13] [i_16] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_38 [i_9] [i_9 + 3] [i_9] [i_9 - 1]), (var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 17860486750278353878ULL)) ? (7ULL) : (17945647332182351125ULL))))));
                            arr_59 [i_9] [i_10] [i_10] [i_12] [i_13] [i_9] = min((var_6), (min((((((/* implicit */_Bool) var_3)) ? (arr_33 [i_13]) : (var_1))), (((/* implicit */unsigned long long int) ((var_9) >= (0ULL)))))));
                            arr_60 [20ULL] [i_9] [i_12] [i_12] [i_13] [i_16] = arr_44 [i_12];
                        }
                        for (unsigned long long int i_17 = 2; i_17 < 22; i_17 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_47 [i_9 + 3] [i_17 - 2] [i_12] [i_17]) : ((~(13795591450973194028ULL))))) >= (((unsigned long long int) arr_56 [i_9 + 2] [i_17 + 1] [i_17 + 1] [i_9]))));
                            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_48 [i_9 + 4] [i_9 - 1] [i_17 - 2] [i_17 - 1] [i_17 - 2]))))));
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5933904423936816700ULL)) || (((/* implicit */_Bool) 3575169291342887890ULL))))), (11807824853641667825ULL))))));
                            arr_63 [i_9] [i_10] [i_9] [i_10] [i_10] [i_9 + 4] = ((unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                        }
                    }
                    var_34 = 14871574782366663753ULL;
                }
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 3; i_19 < 21; i_19 += 3) 
                    {
                        {
                            var_35 *= ((min((var_12), (5020570312577006818ULL))) + (min((arr_36 [i_9 + 3]), (4976653652616579542ULL))));
                            arr_70 [i_9] [i_18] [i_18] [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (4888605822815508552ULL) : (12512839649772734894ULL)))) ? (arr_67 [i_9 + 2] [i_19 + 2] [i_19 - 1] [i_19 - 2]) : (((var_2) ^ (var_0)))))) ? (min((6447566024444176046ULL), (17985560101525417912ULL))) : (min((arr_43 [i_9 - 1] [i_9 + 4] [i_19 + 2]), (((unsigned long long int) var_11)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_20 = 2; i_20 < 20; i_20 += 1) 
                {
                    var_36 = ((((/* implicit */_Bool) 1ULL)) ? (0ULL) : (9432345153355913006ULL));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        arr_77 [i_9] [i_9] [i_20 + 3] [i_21] = var_8;
                        var_37 = ((arr_42 [i_9 + 4]) / (arr_42 [i_9 + 4]));
                    }
                    for (unsigned long long int i_22 = 1; i_22 < 21; i_22 += 3) 
                    {
                        var_38 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2961851369096532077ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (var_7))))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((var_7) - (((10ULL) / (var_4)))))));
                        arr_80 [3ULL] [i_9] [i_10] [i_9] [i_20 - 2] [i_9] = (+(var_0));
                    }
                    for (unsigned long long int i_23 = 3; i_23 < 21; i_23 += 4) 
                    {
                        var_40 ^= ((unsigned long long int) var_2);
                        arr_83 [i_9] [4ULL] [i_20 - 1] [i_20 - 1] [i_20 - 2] [i_9] = (~(arr_66 [i_9 + 1] [8ULL] [i_9] [i_23 + 1]));
                    }
                }
                for (unsigned long long int i_24 = 3; i_24 < 22; i_24 += 2) 
                {
                    var_41 *= max((max((var_4), (var_8))), (((var_10) / (3575169291342887880ULL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_25 = 2; i_25 < 22; i_25 += 2) 
                    {
                        for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))));
                                var_43 = ((unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_10] [i_9 + 3] [i_24] [i_9 + 3] [i_24 + 1])) ? (var_6) : (arr_48 [i_9 + 2] [i_10] [i_9 + 2] [i_9 + 3] [i_24 + 1])));
                                var_44 = ((unsigned long long int) min((((var_0) + (127ULL))), (arr_38 [i_24 + 1] [i_9 + 3] [i_25] [4ULL])));
                                var_45 ^= ((max((arr_57 [i_10] [i_24] [i_24 - 2] [i_24 - 2] [i_24 - 2] [i_24 + 1] [i_24 - 1]), (arr_57 [i_9 + 2] [12ULL] [12ULL] [i_24] [22ULL] [12ULL] [i_24 - 3]))) + (((unsigned long long int) var_12)));
                            }
                        } 
                    } 
                }
                var_46 *= ((((arr_48 [i_9] [15ULL] [i_9 + 2] [i_10] [i_9]) + (arr_42 [i_9]))) ^ (var_11));
                /* LoopNest 2 */
                for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 3) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 23; i_28 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_29 = 0; i_29 < 23; i_29 += 2) 
                            {
                                arr_103 [15ULL] [i_9] [i_27] [i_28] [i_29] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_100 [i_9 + 4] [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 4] [i_27])))), (((((/* implicit */_Bool) arr_100 [11ULL] [i_9 + 4] [i_9 - 1] [i_9 + 3] [i_9 + 4] [12ULL])) && (((/* implicit */_Bool) arr_100 [i_9 + 1] [i_9] [i_9 - 1] [i_9] [i_9 + 3] [i_10]))))));
                                var_47 = ((((/* implicit */_Bool) 11283857404700056884ULL)) ? (((((/* implicit */_Bool) 9667552900370749887ULL)) ? (arr_100 [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_10] [i_9 + 1]) : (arr_100 [5ULL] [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]))) : (min((max((arr_33 [i_9 + 2]), (var_12))), (((var_12) + (5958959567995062080ULL))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_30 = 3; i_30 < 21; i_30 += 2) 
                            {
                                var_48 = ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3)))) ? (var_6) : (((unsigned long long int) var_1)));
                                var_49 += var_1;
                                arr_106 [i_9 + 3] [i_9] [i_27] = ((/* implicit */unsigned long long int) ((arr_52 [i_28] [i_28] [i_30] [i_30 + 1] [i_30]) == (arr_52 [i_9] [i_27] [i_27] [i_30 + 2] [i_30])));
                                var_50 = (+(var_7));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_31 = 0; i_31 < 23; i_31 += 3) 
                            {
                                arr_109 [i_9] [i_31] [18ULL] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_9] [i_9 - 1] [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 4])) && (((/* implicit */_Bool) var_8))));
                                var_51 = ((((1ULL) + (arr_88 [i_9]))) ^ (((((/* implicit */_Bool) var_11)) ? (var_7) : (var_10))));
                            }
                            arr_110 [i_9] [i_10] [i_9] [i_28] = ((arr_84 [i_28]) << (((min((((var_8) * (var_7))), (36028779839094784ULL))) - (36028779839094775ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
