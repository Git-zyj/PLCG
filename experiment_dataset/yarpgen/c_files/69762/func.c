/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69762
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) ((unsigned int) arr_1 [i_0 - 1]));
        arr_2 [i_0] = -6392827032806845540LL;
        arr_3 [(short)19] = ((-1733427828352456103LL) & (((arr_1 [i_0]) & (-1733427828352456103LL))));
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [6LL] [(signed char)10] &= ((/* implicit */short) var_2);
                    var_19 = min((max((((/* implicit */long long int) (unsigned char)16)), (1733427828352456103LL))), (((/* implicit */long long int) ((((((/* implicit */int) var_4)) << (((((arr_1 [9]) + (8863389844491965521LL))) - (22LL))))) << (((((((((/* implicit */_Bool) 2147483647ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))))) + (28LL))) - (25LL)))))));
                    arr_11 [(unsigned char)1] [i_1] [i_2] [i_1] = ((long long int) ((var_6) != (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [(signed char)8] [i_1] [i_2] [12LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21089))) : (arr_9 [i_1] [i_1] [i_1 + 2] [i_3 + 2])));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_7))));
                                var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) var_10);
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_8))))));
        var_24 = (~(max((min((var_16), (4100807942701313557LL))), (-7469436200525802377LL))));
        arr_17 [i_1] = ((/* implicit */unsigned int) -8127892517322897723LL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_25 = ((/* implicit */int) ((_Bool) ((((arr_9 [i_1] [i_1] [i_1] [2LL]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (88))))));
            var_26 = ((/* implicit */unsigned short) (-(arr_1 [i_1 + 3])));
            var_27 = ((/* implicit */_Bool) (unsigned char)217);
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) ((((var_1) >> (((6392827032806845526LL) - (6392827032806845521LL))))) != (((/* implicit */unsigned long long int) arr_21 [i_1] [i_7] [(unsigned char)3]))));
                var_29 = ((/* implicit */unsigned long long int) var_16);
            }
            arr_26 [(unsigned short)10] [5LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_8))) ? (((long long int) var_11)) : (((var_15) / (((/* implicit */long long int) 2793883908U))))));
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    {
                        arr_35 [0LL] [4ULL] [(short)8] [(short)3] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) var_17)) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_9] [i_9])))))));
                        arr_36 [i_1] [(short)11] [3ULL] [(short)11] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)44447)) << (((((/* implicit */int) var_0)) - (15268)))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) ((((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) ^ (var_13)));
            arr_37 [0U] = ((/* implicit */unsigned long long int) var_11);
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    {
                        arr_45 [i_12] = ((/* implicit */unsigned int) (~(((long long int) -4510457375956133738LL))));
                        arr_46 [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_1 - 1] [i_1 + 1] [i_9] [i_1 - 1] [i_13] [i_9])) >> (((((/* implicit */int) arr_41 [i_1] [5ULL] [i_9] [i_12] [(unsigned char)10] [6U])) - (142)))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_40 [2ULL] [i_1 + 1]))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned int) arr_19 [i_1] [9LL]);
        }
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            var_33 = ((((/* implicit */long long int) ((/* implicit */int) arr_38 [(_Bool)1] [1LL] [i_15]))) % (arr_12 [7LL] [i_15]));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                arr_54 [i_14] [5] [i_16] = ((/* implicit */unsigned short) ((long long int) var_12));
                arr_55 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) -4510457375956133719LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_14 [8LL] [i_16])))));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) 3642450771365968412LL);
                            arr_61 [i_14] [i_17] [(short)2] = ((/* implicit */unsigned int) var_14);
                            var_35 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44447)) ? (((/* implicit */int) (short)21532)) : (((/* implicit */int) (signed char)72))));
                            arr_62 [i_17] [i_17] [i_17] [i_17] [i_14] = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                var_36 &= ((/* implicit */signed char) ((unsigned short) 534773760));
            }
            var_37 = ((/* implicit */long long int) arr_13 [i_15] [(short)0] [i_14] [(short)0]);
            var_38 = var_8;
        }
        arr_63 [9ULL] [i_14] = ((((6204847833997620226LL) + (arr_39 [i_14] [i_14]))) != (arr_39 [i_14] [i_14]));
        arr_64 [i_14] = ((/* implicit */unsigned long long int) (+(arr_4 [i_14])));
        /* LoopSeq 2 */
        for (unsigned int i_19 = 1; i_19 < 6; i_19 += 4) 
        {
            var_39 = ((/* implicit */unsigned long long int) (~(var_3)));
            arr_67 [i_14] [4LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_13))) || (((/* implicit */_Bool) 534773760))));
            /* LoopSeq 2 */
            for (long long int i_20 = 0; i_20 < 10; i_20 += 1) 
            {
                var_40 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_14]))) >= (arr_60 [i_14] [i_14] [i_19] [i_19] [(unsigned char)0])));
                arr_72 [(_Bool)1] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_29 [2LL] [i_19 + 1] [i_19 + 2]))));
            }
            for (long long int i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                var_41 = ((/* implicit */long long int) min((var_41), (((((/* implicit */_Bool) 4540325638884263118ULL)) ? (((/* implicit */long long int) 134209536U)) : (-4510457375956133738LL)))));
                arr_75 [4U] [4U] = ((/* implicit */long long int) ((arr_53 [(short)4] [i_14] [(short)4] [i_14]) != (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_4)))))));
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_19 + 3] [2] [i_21] [(short)11] [(unsigned char)2] [(short)11])) ? (arr_43 [i_19 + 4] [i_19 + 4] [i_19 + 4] [i_21] [8] [12LL]) : (((/* implicit */long long int) var_6))));
            }
            arr_76 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_19 + 2] [i_19 + 4] [i_19 + 2]))) != (var_3)));
            arr_77 [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_19 - 1] [i_14] [i_19] [2ULL])) ? (((/* implicit */int) arr_13 [i_19 - 1] [i_19] [i_14] [12LL])) : (-534773761)));
        }
        for (short i_22 = 2; i_22 < 8; i_22 += 1) 
        {
            arr_80 [1LL] [i_14] = ((/* implicit */unsigned int) (short)32750);
            var_43 -= ((/* implicit */long long int) arr_41 [11ULL] [i_22 - 2] [i_22 - 1] [(short)2] [11U] [11U]);
            var_44 = ((/* implicit */signed char) (-(var_1)));
            arr_81 [i_14] [i_22] = ((arr_4 [2ULL]) / (((long long int) (unsigned short)65534)));
            arr_82 [(signed char)5] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_16) + (6215349327227297367LL)))));
        }
    }
    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) max((((var_15) & (min((-1LL), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) var_12)))))));
}
