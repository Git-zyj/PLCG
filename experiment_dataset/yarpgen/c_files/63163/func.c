/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63163
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_14 = max((((/* implicit */long long int) ((((long long int) -4294861516961572929LL)) == ((~(var_3)))))), (arr_4 [i_0]));
            arr_7 [i_0] = max((((long long int) arr_2 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8))))));
            var_15 = arr_2 [i_0];
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                var_16 ^= min(((+(arr_3 [i_1]))), (((long long int) arr_2 [i_1])));
                arr_10 [i_0] [i_1] [i_1] = var_3;
                arr_11 [i_0] = -4294861516961572947LL;
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_17 = arr_13 [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 1];
                    var_18 = max((-2478632552707575990LL), (((((/* implicit */_Bool) 2425384775870466366LL)) ? (-2425384775870466388LL) : (7794012694789549018LL))));
                }
                for (long long int i_4 = 4; i_4 < 17; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        var_19 = min((((((/* implicit */long long int) ((/* implicit */int) ((-2425384775870466366LL) > (var_10))))) & (min((var_6), (arr_3 [i_0]))))), (((long long int) -2425384775870466363LL)));
                        arr_20 [i_0] = min((max((arr_12 [i_5 - 1]), (var_4))), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_5]));
                        var_20 = ((/* implicit */long long int) min((var_20), (min((((long long int) var_8)), (max((((var_12) / (var_10))), (arr_6 [i_5 - 1])))))));
                    }
                    arr_21 [i_0] [i_0] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -2425384775870466365LL))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_0])) ? (arr_1 [i_0] [i_0]) : (var_9))) : (arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_4]))))));
                }
            }
        }
        for (long long int i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            arr_24 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((-2425384775870466386LL) / (-2425384775870466364LL))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (var_2) : (-2425384775870466392LL))))))));
            /* LoopNest 2 */
            for (long long int i_7 = 4; i_7 < 16; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    {
                        var_21 = ((long long int) ((arr_27 [i_0] [i_6 + 3] [i_0]) == (arr_9 [i_0] [i_0])));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_22 = min((max((2382571462430428571LL), (arr_0 [i_7 + 2]))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_17 [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 2] [i_6 + 2] [i_6 - 2] [i_6 - 2]) : (((((/* implicit */_Bool) var_9)) ? (36026597995708416LL) : ((-9223372036854775807LL - 1LL)))))));
                            var_23 = min((arr_25 [i_0] [i_0]), (max((1191628038880754934LL), (arr_25 [i_6 - 2] [i_0]))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_9] = ((((/* implicit */_Bool) ((long long int) min((-4031235187243471658LL), (-2425384775870466380LL))))) ? (arr_29 [i_0] [i_0] [i_0]) : ((-((~(var_5))))));
                        }
                        for (long long int i_10 = 2; i_10 < 18; i_10 += 1) 
                        {
                            var_24 = min((var_1), (var_10));
                            arr_40 [i_0] [i_6] [i_7 + 1] = ((long long int) (+(min((4398046511103LL), (arr_38 [i_0] [i_0] [i_7] [i_8] [i_0] [i_7] [i_10])))));
                        }
                        for (long long int i_11 = 4; i_11 < 18; i_11 += 2) 
                        {
                            arr_44 [i_0] [18LL] [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (min((max((((((/* implicit */_Bool) var_12)) ? (var_6) : (arr_4 [i_0]))), (((((/* implicit */_Bool) 9223372036854775797LL)) ? (-6715943303798572134LL) : (-36026597995708417LL))))), (((((arr_43 [i_11 + 1] [i_8] [i_0] [i_6 + 2] [i_0]) - (-8846963388020116823LL))) | (min((arr_4 [i_0]), (-1347633932114913631LL))))))) : (min((max((((((/* implicit */_Bool) var_12)) ? (var_6) : (arr_4 [i_0]))), (((((/* implicit */_Bool) 9223372036854775797LL)) ? (-6715943303798572134LL) : (-36026597995708417LL))))), (((((arr_43 [i_11 + 1] [i_8] [i_0] [i_6 + 2] [i_0]) + (-8846963388020116823LL))) | (min((arr_4 [i_0]), (-1347633932114913631LL)))))));
                            var_25 = ((((/* implicit */_Bool) min((-2425384775870466397LL), (-341141539764489601LL)))) ? (((long long int) arr_8 [i_11 - 2] [i_6 + 2])) : (((((/* implicit */_Bool) -2425384775870466397LL)) ? (arr_17 [i_6 + 1] [i_7 - 3] [i_7 + 3] [i_7 + 3] [i_7] [i_11 - 4] [i_7 + 3]) : (min((-8078474309804201160LL), (2425384775870466362LL))))));
                        }
                        var_26 = ((((/* implicit */_Bool) arr_6 [19LL])) ? (arr_33 [i_6] [i_6] [i_6]) : (arr_27 [i_8] [i_6] [i_8]));
                    }
                } 
            } 
            var_27 = var_2;
        }
        /* LoopSeq 2 */
        for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            arr_48 [i_0] [14LL] [i_12] = (-(min((((/* implicit */long long int) ((arr_1 [i_0] [i_0]) <= (var_1)))), (min((9223372036854775786LL), (var_6))))));
            var_28 = ((/* implicit */long long int) max((var_28), (((((((/* implicit */_Bool) arr_25 [i_0] [i_12])) ? (arr_25 [10LL] [i_12]) : (arr_25 [i_12] [i_12]))) ^ (arr_39 [i_0] [i_0] [i_12] [i_0] [i_0])))));
            arr_49 [i_0] = arr_26 [i_0] [i_0] [i_0];
            arr_50 [i_0] = min((((((/* implicit */_Bool) -13LL)) ? (((long long int) var_7)) : (((long long int) var_8)))), ((-(((((/* implicit */_Bool) arr_6 [i_12])) ? (var_8) : (arr_45 [i_0]))))));
        }
        for (long long int i_13 = 2; i_13 < 17; i_13 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                for (long long int i_15 = 2; i_15 < 19; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        {
                            var_29 = ((((/* implicit */_Bool) 3572124439027667070LL)) ? (max((4106010126807613032LL), (36026597995708413LL))) : (8726815997938767482LL));
                            var_30 = arr_16 [i_0] [i_13] [i_0] [i_15] [i_0];
                            var_31 = ((long long int) min((arr_0 [i_15 - 2]), (var_2)));
                        }
                    } 
                } 
            } 
            arr_59 [i_0] = ((long long int) arr_8 [i_0] [i_0]);
        }
    }
    /* LoopNest 3 */
    for (long long int i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        for (long long int i_18 = 4; i_18 < 17; i_18 += 2) 
        {
            for (long long int i_19 = 0; i_19 < 19; i_19 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_20 = 3; i_20 < 18; i_20 += 2) /* same iter space */
                    {
                        var_32 = (+(arr_15 [i_17] [i_17] [i_17] [i_18 - 3] [i_17] [i_20 - 2]));
                        arr_72 [i_20] [i_20] [i_19] [i_20 - 1] = min((-1989389382958273670LL), (7936LL));
                    }
                    for (long long int i_21 = 3; i_21 < 18; i_21 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_22 = 0; i_22 < 19; i_22 += 3) 
                        {
                            arr_77 [i_17] [i_18 + 2] [18LL] [i_22] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_76 [i_18 + 2]))) ? (-2020827797567724706LL) : (4106010126807613032LL))))));
                            arr_78 [i_17] [i_17] [i_19] [i_19] [i_19] = ((((((/* implicit */_Bool) -5117139582478830234LL)) && (((/* implicit */_Bool) -2020827797567724704LL)))) ? (9223372036854775807LL) : (4106010126807613032LL));
                            var_33 |= -2924889714156805545LL;
                            arr_79 [i_17] [i_17] [i_18 + 2] [i_18 + 2] [6LL] [i_22] [i_22] = 2565464629819593LL;
                        }
                        for (long long int i_23 = 3; i_23 < 17; i_23 += 2) 
                        {
                            var_34 = min((max((arr_80 [i_17] [i_17] [i_17] [i_17] [4LL]), (arr_80 [i_23 - 1] [i_18] [i_17] [i_18] [i_17]))), (max((((/* implicit */long long int) ((var_1) >= (var_8)))), (min((2924889714156805541LL), (-2382571462430428599LL))))));
                            var_35 = var_10;
                            var_36 = min((((long long int) min((arr_54 [i_17] [i_19] [i_19] [i_21]), (var_12)))), (((long long int) var_2)));
                        }
                        for (long long int i_24 = 4; i_24 < 16; i_24 += 2) 
                        {
                            var_37 = arr_54 [i_17] [i_17] [i_19] [i_24];
                            var_38 |= ((long long int) max((((long long int) -341141539764489598LL)), (arr_32 [i_17] [i_21 - 2] [i_24 - 4] [i_24 + 3] [i_24] [i_24 - 4])));
                            var_39 = var_5;
                            arr_85 [i_17] [i_18 - 1] [i_18 - 1] [i_19] [i_21 - 2] [i_24] = ((/* implicit */long long int) ((arr_26 [i_24] [i_18 + 1] [i_19]) == (min((((/* implicit */long long int) (!(((/* implicit */_Bool) -24LL))))), (8437125768193620186LL)))));
                        }
                        var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_17] [i_18 - 4] [i_19] [i_17] [i_21 - 3])) ? (arr_82 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) : (-2382571462430428558LL)))) ? ((((!(((/* implicit */_Bool) -24LL)))) ? ((+(var_11))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (var_1))))) : (var_0));
                    }
                    for (long long int i_25 = 1; i_25 < 17; i_25 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (long long int i_26 = 1; i_26 < 15; i_26 += 1) 
                        {
                            arr_92 [i_17] [i_18] [i_19] [i_26] [i_26] [i_26] = 0LL;
                            arr_93 [16LL] [i_26] = ((((/* implicit */_Bool) max((min((992497858015264513LL), (-5117139582478830262LL))), (-36026597995708420LL)))) ? (((((/* implicit */_Bool) min((-2382571462430428572LL), (arr_61 [i_17])))) ? (3304002031085969917LL) : (((long long int) -3304002031085969917LL)))) : (-36026597995708437LL));
                            var_41 = ((long long int) ((((/* implicit */_Bool) arr_38 [i_17] [i_17] [i_17] [i_17] [i_26] [i_17] [i_17])) ? (arr_75 [i_17]) : (arr_75 [i_25])));
                            var_42 = ((/* implicit */long long int) min((var_42), ((+(((long long int) arr_87 [i_26 + 2] [i_25 - 1] [i_25 + 1] [i_18 - 1]))))));
                        }
                        for (long long int i_27 = 2; i_27 < 18; i_27 += 2) /* same iter space */
                        {
                            var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                            var_44 = ((((/* implicit */_Bool) min((arr_95 [i_17] [i_18 - 2] [i_19] [i_25 - 1] [i_27] [i_25 + 1]), (arr_95 [i_17] [i_18 - 3] [i_19] [i_25] [i_27 - 1] [i_25 + 1])))) ? (arr_71 [i_19] [i_18] [i_18] [0LL]) : (((((/* implicit */_Bool) ((arr_4 [i_27]) / (var_6)))) ? (((((/* implicit */_Bool) 44LL)) ? (5117139582478830262LL) : (-3557519679591719042LL))) : (var_9))));
                            arr_97 [i_17] [i_17] [i_19] [i_17] [i_27] = ((long long int) ((((/* implicit */_Bool) -6943553514640960079LL)) ? (var_1) : (((((/* implicit */_Bool) 1125762467889152LL)) ? (var_8) : (5117139582478830238LL)))));
                            var_45 = ((((/* implicit */_Bool) -2382571462430428570LL)) ? (((((/* implicit */_Bool) (-(-6943553514640960067LL)))) ? (((((/* implicit */_Bool) var_1)) ? (-2382571462430428549LL) : (arr_26 [i_27] [i_18 - 4] [2LL]))) : (((((/* implicit */_Bool) arr_86 [i_19] [i_27])) ? (6415658577430052223LL) : (arr_57 [i_17] [i_17] [10LL] [i_19] [i_17] [i_27]))))) : (((long long int) (-(var_3)))));
                        }
                        for (long long int i_28 = 2; i_28 < 18; i_28 += 2) /* same iter space */
                        {
                            var_46 = max((((((/* implicit */_Bool) var_13)) ? (((long long int) arr_69 [i_17] [i_25])) : (((((/* implicit */_Bool) var_4)) ? (arr_87 [i_17] [i_17] [i_17] [i_25 + 1]) : (9223372036854775807LL))))), (((long long int) min((-6943553514640960088LL), (var_11)))));
                            arr_101 [i_17] [i_17] [i_25] [i_28 - 1] = max(((((!(((/* implicit */_Bool) arr_53 [i_17] [i_19] [i_19])))) ? (-6943553514640960088LL) : (((long long int) var_11)))), (((long long int) arr_99 [i_17] [7LL] [i_17] [i_17] [i_17])));
                            var_47 |= (+(5117139582478830268LL));
                            arr_102 [8LL] [i_18 - 4] [i_19] [16LL] [i_18 - 4] [i_18 - 4] [3LL] = var_6;
                            var_48 = ((((/* implicit */_Bool) (-(var_3)))) ? ((~(arr_82 [i_28 - 2] [i_25] [17LL] [i_18 - 1] [i_17] [i_17]))) : ((-(arr_75 [i_17]))));
                        }
                        for (long long int i_29 = 2; i_29 < 18; i_29 += 2) /* same iter space */
                        {
                            arr_105 [i_17] [14LL] [14LL] [i_29] = ((/* implicit */long long int) ((((long long int) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (-5117139582478830266LL) : (-5117139582478830283LL)))) >= (min((-5117139582478830270LL), (6943553514640960059LL)))));
                            var_49 = ((long long int) ((long long int) min((2382571462430428567LL), (-7499878314167808116LL))));
                            var_50 = min((-3304002031085969908LL), ((((-(arr_63 [i_17]))) / (min((arr_64 [i_25]), (arr_43 [i_17] [i_18] [i_19] [i_25 - 1] [i_25 - 1]))))));
                            var_51 = var_13;
                        }
                        arr_106 [i_17] = ((/* implicit */long long int) (((-(arr_1 [i_18 - 1] [i_18 - 2]))) <= (((long long int) ((((/* implicit */_Bool) 5117139582478830271LL)) ? (-2382571462430428549LL) : (arr_70 [10LL] [i_18 - 1] [9LL] [i_19] [i_25] [i_25]))))));
                    }
                    for (long long int i_30 = 1; i_30 < 17; i_30 += 2) /* same iter space */
                    {
                        var_52 |= var_3;
                        var_53 = ((((/* implicit */_Bool) (~(-6941828758279237627LL)))) ? (arr_36 [i_17] [i_17] [i_19] [i_17] [i_30 + 1]) : (((-2954754883758734405LL) | (9223372036854775807LL))));
                        /* LoopSeq 4 */
                        for (long long int i_31 = 0; i_31 < 19; i_31 += 2) /* same iter space */
                        {
                            var_54 = var_1;
                            var_55 = ((/* implicit */long long int) max((var_55), (var_0)));
                        }
                        for (long long int i_32 = 0; i_32 < 19; i_32 += 2) /* same iter space */
                        {
                            var_56 = ((long long int) (+(-2668184567090946133LL)));
                            arr_115 [14LL] = max((((((/* implicit */_Bool) (-(-3255101263739961013LL)))) ? (((arr_6 [i_30 + 2]) / (arr_46 [i_17] [i_30]))) : ((+(12LL))))), (-27LL));
                        }
                        for (long long int i_33 = 0; i_33 < 19; i_33 += 2) /* same iter space */
                        {
                            arr_118 [i_17] [i_18] [i_18 - 2] [i_19] [i_30] [i_17] [i_33] = arr_88 [i_19] [i_18] [i_19] [i_30 + 1];
                            var_57 = arr_16 [14LL] [16LL] [i_17] [i_30 + 1] [i_30];
                            var_58 = var_13;
                        }
                        for (long long int i_34 = 0; i_34 < 19; i_34 += 2) 
                        {
                            var_59 = ((long long int) (+(arr_47 [i_17] [i_30 + 2])));
                            var_60 = ((/* implicit */long long int) min((var_60), ((+((~(-5117139582478830274LL)))))));
                        }
                    }
                    var_61 = ((arr_52 [i_18 - 3] [i_18 - 3]) / (((long long int) arr_52 [i_18 + 2] [i_18])));
                    var_62 = ((((/* implicit */_Bool) 826853795943697426LL)) ? (6943553514640960058LL) : (-2954754883758734427LL));
                    arr_121 [i_18 - 1] = ((long long int) var_4);
                }
            } 
        } 
    } 
    var_63 &= (~(var_10));
    /* LoopSeq 2 */
    for (long long int i_35 = 2; i_35 < 20; i_35 += 2) 
    {
        var_64 = ((((/* implicit */_Bool) ((min((arr_122 [i_35]), (0LL))) * (((long long int) 2954754883758734385LL))))) ? (min((((long long int) arr_124 [i_35] [i_35])), (((arr_123 [i_35 + 1]) / (var_0))))) : (((long long int) ((((/* implicit */_Bool) -2954754883758734405LL)) ? (arr_124 [i_35 - 2] [i_35]) : (645528762326216508LL)))));
        var_65 |= ((((/* implicit */_Bool) ((long long int) arr_124 [i_35 - 1] [i_35 + 1]))) ? (min(((-9223372036854775807LL - 1LL)), (5117139582478830268LL))) : ((-(arr_124 [i_35 + 2] [i_35 - 2]))));
        arr_126 [18LL] = min((min((((((/* implicit */_Bool) var_1)) ? (arr_125 [i_35]) : (arr_124 [i_35 + 3] [i_35 + 3]))), (arr_123 [i_35 + 2]))), (max((6073060443873763667LL), (36028795945222144LL))));
        arr_127 [i_35] |= (-(min((var_9), (arr_125 [i_35 + 1]))));
    }
    for (long long int i_36 = 0; i_36 < 15; i_36 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_37 = 0; i_37 < 15; i_37 += 1) 
        {
            for (long long int i_38 = 2; i_38 < 13; i_38 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_39 = 0; i_39 < 15; i_39 += 1) 
                    {
                        for (long long int i_40 = 1; i_40 < 14; i_40 += 1) 
                        {
                            {
                                arr_140 [i_36] [i_37] [i_38] [i_39] [i_40 + 1] = var_3;
                                arr_141 [i_36] [2LL] [i_36] [i_36] [i_40 + 1] [i_38] = var_11;
                            }
                        } 
                    } 
                    var_66 = arr_28 [i_36] [i_37] [i_37] [i_37] [i_36] [i_37];
                    var_67 = (+(5984731860188383354LL));
                    arr_142 [i_36] [i_36] [i_38] [4LL] = ((long long int) -12LL);
                }
            } 
        } 
        var_68 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 527114724174873019LL)) ? (5728780360291470499LL) : (6664071244185571156LL)))) ? (var_4) : (2791037010685380555LL))), (-6834255069318519827LL));
        var_69 = min((((long long int) var_8)), (((((/* implicit */_Bool) var_5)) ? (max((arr_15 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36]), (var_0))) : (12LL))));
    }
}
