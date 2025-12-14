/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58740
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
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_8))));
        var_13 = ((/* implicit */_Bool) (-2147483647 - 1));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_14 = -1407706988;
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_15 = ((/* implicit */_Bool) var_1);
            var_16 = ((/* implicit */int) var_10);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 4; i_4 < 18; i_4 += 1) 
            {
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                var_17 += var_4;
                var_18 -= var_10;
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (3529759168350639499ULL)));
            }
            var_20 -= ((/* implicit */int) (_Bool)1);
            var_21 ^= var_6;
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_22 [i_1] [i_3] [i_5] [i_5] [i_7] = var_0;
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_8))));
                            arr_23 [i_3] [i_3] [i_5] [i_3] [i_1] = ((/* implicit */short) 9223372036854775680ULL);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) var_10);
            }
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                arr_28 [i_1] [i_3] |= var_9;
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) var_8);
                            arr_35 [i_1] [i_3] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */int) var_3);
                            var_25 -= ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                var_26 *= ((/* implicit */int) 0ULL);
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 117544836))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_28 = ((/* implicit */int) var_7);
                var_29 = ((/* implicit */int) var_1);
                var_30 = ((/* implicit */unsigned long long int) 2001385040);
                var_31 *= var_7;
            }
        }
        for (int i_12 = 4; i_12 < 17; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_4))));
                            var_33 *= ((/* implicit */_Bool) var_9);
                            arr_49 [i_15] [i_15] [i_1] = ((/* implicit */unsigned long long int) 524287);
                        }
                    } 
                } 
            } 
            arr_50 [i_1] = ((/* implicit */_Bool) 18446744073709551615ULL);
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    for (int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        {
                            arr_57 [i_1] = 0;
                            var_34 = ((/* implicit */_Bool) 805306368);
                        }
                    } 
                } 
            } 
            var_35 = var_8;
            /* LoopNest 2 */
            for (short i_19 = 1; i_19 < 18; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 2; i_20 < 18; i_20 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) var_6);
                        var_37 = ((/* implicit */short) var_7);
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) 0ULL))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_21 = 2; i_21 < 18; i_21 += 2) 
        {
            var_39 = ((/* implicit */unsigned long long int) -2001385041);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 1) 
            {
                var_40 &= var_9;
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 19; i_23 += 3) 
                {
                    for (int i_24 = 0; i_24 < 19; i_24 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) var_3))));
                            var_42 += ((/* implicit */unsigned long long int) (short)-23105);
                        }
                    } 
                } 
                var_43 = ((/* implicit */int) var_7);
                var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) 0ULL))));
            }
            /* vectorizable */
            for (int i_25 = 2; i_25 < 17; i_25 += 4) 
            {
                arr_77 [i_1] [i_21] [i_25 + 1] = ((/* implicit */unsigned char) 15656790311689996426ULL);
                var_45 = ((/* implicit */unsigned long long int) (_Bool)0);
                var_46 = ((/* implicit */short) var_4);
                var_47 = (unsigned char)39;
                arr_78 [i_1] [i_21] [i_1] = ((/* implicit */_Bool) 0ULL);
            }
            for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 3) 
            {
                var_48 = ((/* implicit */short) var_9);
                var_49 = 18446744073709551615ULL;
            }
            var_50 = ((/* implicit */_Bool) var_6);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 2) 
        {
            for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
            {
                {
                    arr_85 [i_1] [i_27] [i_28] = ((/* implicit */int) (short)(-32767 - 1));
                    var_51 |= var_9;
                    var_52 = ((/* implicit */int) (_Bool)1);
                    var_53 &= ((/* implicit */int) var_7);
                }
            } 
        } 
        var_54 = var_9;
        var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) var_1))));
    }
    /* vectorizable */
    for (unsigned char i_29 = 0; i_29 < 18; i_29 += 3) 
    {
        var_56 *= ((/* implicit */unsigned char) 1975672098);
        /* LoopSeq 2 */
        for (int i_30 = 2; i_30 < 15; i_30 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_31 = 3; i_31 < 15; i_31 += 1) 
            {
                for (unsigned long long int i_32 = 1; i_32 < 16; i_32 += 4) 
                {
                    {
                        var_57 *= ((/* implicit */unsigned long long int) (_Bool)0);
                        var_58 = ((/* implicit */int) 1ULL);
                        var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) var_1))));
                    }
                } 
            } 
            var_60 = ((/* implicit */unsigned long long int) var_3);
        }
        for (int i_33 = 2; i_33 < 15; i_33 += 1) /* same iter space */
        {
            var_61 &= ((/* implicit */short) var_2);
            var_62 = 2305842871774740480ULL;
            /* LoopSeq 3 */
            for (int i_34 = 0; i_34 < 18; i_34 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    for (unsigned long long int i_36 = 2; i_36 < 14; i_36 += 1) 
                    {
                        {
                            var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) var_9))));
                            var_64 -= ((/* implicit */short) var_10);
                        }
                    } 
                } 
                var_65 = (_Bool)1;
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 18; i_37 += 1) 
                {
                    for (int i_38 = 2; i_38 < 16; i_38 += 1) 
                    {
                        {
                            var_66 = 2001385041;
                            var_67 -= ((/* implicit */int) var_4);
                            var_68 = ((/* implicit */int) (short)32);
                            var_69 = ((/* implicit */short) 7114482631624785954ULL);
                            var_70 = ((/* implicit */int) var_1);
                        }
                    } 
                } 
                var_71 = ((/* implicit */unsigned char) 134216704);
            }
            for (unsigned long long int i_39 = 3; i_39 < 15; i_39 += 3) 
            {
                arr_113 [i_39] [i_33 - 2] [i_39] [i_33 + 2] = ((/* implicit */int) (unsigned char)59);
                var_72 = (short)(-32767 - 1);
                var_73 = ((/* implicit */unsigned long long int) var_6);
            }
            for (short i_40 = 1; i_40 < 16; i_40 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_41 = 0; i_41 < 18; i_41 += 3) 
                {
                    for (unsigned char i_42 = 0; i_42 < 18; i_42 += 4) 
                    {
                        {
                            arr_121 [i_29] [i_33] [i_40] [i_41] [i_42] [i_40] = ((/* implicit */int) (short)32767);
                            var_74 = ((/* implicit */unsigned long long int) (unsigned char)0);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_43 = 0; i_43 < 18; i_43 += 4) 
                {
                    arr_124 [i_29] [i_29] [i_40 - 1] [i_43] &= ((/* implicit */_Bool) var_1);
                    arr_125 [i_43] [i_40] [i_40] [i_43] = ((/* implicit */_Bool) (short)-8192);
                }
                for (unsigned long long int i_44 = 0; i_44 < 18; i_44 += 1) 
                {
                    var_75 = var_10;
                    var_76 = ((/* implicit */int) (unsigned char)220);
                    var_77 *= ((/* implicit */short) var_5);
                }
                for (int i_45 = 0; i_45 < 18; i_45 += 2) 
                {
                    var_78 -= ((/* implicit */_Bool) var_1);
                    var_79 = ((/* implicit */_Bool) var_0);
                    /* LoopSeq 2 */
                    for (_Bool i_46 = 0; i_46 < 1; i_46 += 1) 
                    {
                        var_80 = ((/* implicit */int) min((var_80), (((/* implicit */int) (unsigned char)123))));
                        var_81 = ((/* implicit */short) var_4);
                    }
                    for (short i_47 = 0; i_47 < 18; i_47 += 1) 
                    {
                        arr_137 [i_29] [i_33] [i_33] [i_29] [i_40] [i_45] [i_45] = ((/* implicit */unsigned long long int) var_3);
                        arr_138 [i_40] [i_40] [i_47] = ((/* implicit */unsigned char) (_Bool)0);
                        var_82 += ((/* implicit */unsigned long long int) (unsigned char)128);
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_48 = 0; i_48 < 18; i_48 += 4) 
                    {
                        var_83 = ((/* implicit */unsigned char) min((var_83), (((/* implicit */unsigned char) -1))));
                        var_84 += ((/* implicit */unsigned char) (short)(-32767 - 1));
                    }
                    for (_Bool i_49 = 0; i_49 < 1; i_49 += 1) 
                    {
                        arr_144 [i_29] [i_40 - 1] [i_40] [i_29] [i_49] [i_33 + 1] [i_29] = ((/* implicit */int) var_1);
                        var_85 = var_9;
                        arr_145 [i_49] [i_40] [i_40] [i_29] = ((/* implicit */int) var_4);
                    }
                    for (_Bool i_50 = 0; i_50 < 1; i_50 += 1) 
                    {
                        var_86 = ((/* implicit */int) max((var_86), (var_6)));
                        var_87 = 2578113088139558385ULL;
                    }
                    for (_Bool i_51 = 0; i_51 < 1; i_51 += 1) 
                    {
                        var_88 = ((/* implicit */unsigned char) 7114482631624785954ULL);
                        var_89 -= ((/* implicit */short) var_2);
                    }
                }
            }
        }
    }
    var_90 = ((/* implicit */int) 11420547879925745616ULL);
}
