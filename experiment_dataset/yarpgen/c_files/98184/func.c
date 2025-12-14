/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98184
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_11) / (max((12213594353217858878ULL), (var_16))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1] [i_0]) == (var_12))))));
            arr_4 [3ULL] [i_1] [8ULL] = min((max((6233149720491692738ULL), (14419659478548983764ULL))), (var_14));
        }
        for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11574180306048052052ULL))));
                        var_23 += var_10;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_2]) > (arr_3 [i_2] [i_6 - 1])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_21 [i_0] [i_2] [i_5] [i_0] [i_7] = var_13;
                        var_25 -= ((unsigned long long int) ((unsigned long long int) var_16));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        arr_25 [i_8] [9ULL] [4ULL] [i_6] [9ULL] [i_8] [i_5] = ((/* implicit */unsigned long long int) ((arr_10 [i_0 + 1] [i_0 + 1] [i_2 + 2]) != (12213594353217858878ULL)));
                        var_26 -= ((unsigned long long int) arr_16 [i_0 + 1] [i_2 + 1]);
                        arr_26 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2] [i_6 + 2] [i_0 + 1]))));
                        var_27 -= ((unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_3) : (arr_17 [i_0] [2ULL] [i_5] [i_6 + 1] [i_8])));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 4) 
                    {
                        arr_30 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                        arr_31 [i_2] = arr_18 [i_0] [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2];
                    }
                    arr_32 [i_0] [14ULL] [i_0] [14ULL] = var_13;
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((unsigned long long int) 4027084595160567872ULL);
                    arr_34 [i_6] [i_5] [i_2 - 2] [i_2 - 2] [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_2 + 1]) == (var_6)));
                }
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        var_28 = ((((/* implicit */_Bool) var_10)) ? (max((arr_6 [i_5 - 4] [i_0 - 1] [i_2 + 1]), ((+(14419659478548983765ULL))))) : ((~(min((var_4), (5082168622224638672ULL))))));
                        arr_40 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5] [i_5] = ((((unsigned long long int) ((unsigned long long int) var_7))) >> ((+(25ULL))));
                    }
                    arr_41 [i_2] [i_2] [i_5 - 4] [i_10] [i_10] |= 18446744073709551615ULL;
                    var_29 = var_11;
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    arr_45 [i_0] [i_12] [9ULL] [i_5] [i_5] [i_12] = var_0;
                    var_30 = (+(arr_35 [i_0] [i_0] [i_5 + 3] [i_0 + 1] [i_5 + 2]));
                }
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    var_31 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_2] [i_2] [i_2])) ? (var_16) : (var_12)))))));
                    arr_48 [i_0 + 1] [i_5] [i_0 - 1] [i_0 - 1] &= ((unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0 - 1]))));
                    var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_22 [i_2] [i_2 - 2] [i_2 + 2] [i_2 + 3] [i_2 + 2] [14ULL] [i_2 + 3]) : (min((var_3), (18260172979175548278ULL))))) == ((-(arr_35 [i_0] [i_2] [i_5 - 3] [i_13] [i_2])))));
                }
            }
            arr_49 [i_0] [i_0] = arr_29 [3ULL] [i_2];
        }
        arr_50 [i_0] = ((unsigned long long int) (~(arr_24 [i_0] [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 1])));
    }
    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        arr_53 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((var_9) == (((unsigned long long int) 58720256ULL))));
        var_33 = arr_29 [i_14] [i_14];
    }
    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
    {
        var_34 = ((4567836885896540862ULL) & (((arr_51 [i_15] [i_15]) * (5331768082808287811ULL))));
        var_35 += (+(5331768082808287811ULL));
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 3; i_16 < 16; i_16 += 1) 
        {
            arr_60 [i_15] = (~(((unsigned long long int) (~(arr_38 [i_15] [i_15] [11ULL])))));
            arr_61 [7ULL] = arr_20 [i_16] [i_15] [i_15] [i_15];
            var_36 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((arr_9 [i_15] [i_15]) == (arr_13 [i_15] [i_15]))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 1) 
            {
                var_37 = (-((-(((11602281147391650761ULL) ^ (arr_52 [i_17]))))));
                arr_65 [i_15] [i_15] |= min((((var_11) & (var_13))), (arr_18 [i_15] [i_16] [i_17 + 1] [i_16 + 2] [i_16 - 1] [i_16 - 2]));
                var_38 += ((unsigned long long int) arr_15 [i_15] [i_16 + 2] [i_17 - 1]);
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 4; i_18 < 17; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        {
                            var_39 = arr_22 [i_15] [i_16] [i_17 - 1] [i_18] [i_16] [i_19] [2ULL];
                            var_40 = ((unsigned long long int) arr_27 [i_19] [i_16 + 2] [i_17] [i_18] [i_19]);
                            var_41 ^= ((((var_2) ^ (arr_0 [i_17 - 1]))) & (((unsigned long long int) arr_0 [i_17 + 1])));
                            arr_72 [i_18] [i_18] [i_17 + 1] [i_15] = arr_37 [i_15] [i_16] [i_17 + 1] [i_17 - 1] [i_19];
                        }
                    } 
                } 
                arr_73 [0ULL] = (~((~(arr_12 [i_16 - 1] [i_17 - 1] [i_17 + 1] [i_17] [4ULL]))));
            }
            for (unsigned long long int i_20 = 2; i_20 < 17; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 2; i_21 < 16; i_21 += 3) 
                {
                    for (unsigned long long int i_22 = 1; i_22 < 17; i_22 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_20 - 2] [i_16] [i_21 + 1] [i_21 + 1] [i_20])))));
                            arr_80 [i_15] [i_16] [i_20] [i_21] [i_22] = ((/* implicit */unsigned long long int) ((((14419659478548983764ULL) & (11602281147391650761ULL))) == (var_7)));
                        }
                    } 
                } 
                var_43 += min((((unsigned long long int) ((arr_19 [i_15] [i_16] [i_20] [i_20] [17ULL]) + (16931773749700632407ULL)))), (((((/* implicit */_Bool) (-(2458387677536900384ULL)))) ? (arr_68 [i_16] [i_16 + 1]) : (max((var_19), (var_4))))));
            }
            for (unsigned long long int i_23 = 1; i_23 < 15; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 1) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        {
                            var_44 = ((((/* implicit */_Bool) (~(((unsigned long long int) arr_75 [i_16 - 2]))))) ? (((unsigned long long int) min((18446744073709551588ULL), (var_3)))) : (arr_69 [i_16] [i_16]));
                            var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_16 - 3] [i_16 - 3] [1ULL] [i_23 - 1] [i_24])) ? (arr_79 [i_16 - 3] [i_16 - 3] [i_23] [i_23 + 2] [i_23]) : (arr_79 [i_16 + 1] [i_16 - 2] [i_23] [i_23 + 2] [9ULL]))))));
                            arr_89 [i_15] [i_16 - 1] [i_25] [i_24] [i_25] |= ((unsigned long long int) 10998069860894495982ULL);
                            arr_90 [i_15] [i_25] [i_23] = (~(var_8));
                        }
                    } 
                } 
                arr_91 [i_15] [i_23] [i_16 + 2] [i_16 + 2] = ((/* implicit */unsigned long long int) ((arr_22 [i_15] [i_16 - 2] [i_23 + 1] [i_16] [i_23 + 1] [i_23 + 2] [i_15]) != (arr_64 [7ULL] [i_16 + 1] [i_23 - 1] [i_23])));
            }
            var_46 *= ((((/* implicit */_Bool) (~(arr_23 [i_16 + 2] [i_16 + 2] [i_16 + 2] [i_16 + 1])))) ? (((unsigned long long int) arr_5 [i_16 - 3] [i_16 - 3] [i_16])) : (((unsigned long long int) ((14419659478548983765ULL) >> (((11988309750903152024ULL) - (11988309750903152006ULL)))))));
        }
    }
}
