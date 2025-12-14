/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89696
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
    var_15 |= var_0;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = 4294967278U;
        arr_3 [i_0] = ((/* implicit */unsigned char) (-((-(arr_1 [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) (-(var_5)));
            var_17 = ((/* implicit */unsigned char) (~(((var_7) + (var_13)))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) max((2938689605U), (((/* implicit */unsigned int) (-2147483647 - 1)))));
            var_19 = ((/* implicit */int) ((unsigned char) (unsigned char)255));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_3 - 1])) ? (arr_4 [i_0] [i_2 - 1] [16]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))));
                var_21 = ((/* implicit */long long int) ((_Bool) ((unsigned char) (unsigned char)242)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) arr_7 [i_0] [i_2 - 1] [i_2 - 1]);
                            var_23 = ((/* implicit */int) max((var_23), ((+(((/* implicit */int) (unsigned char)255))))));
                            arr_18 [i_0] [i_2] [3] [i_2] = ((/* implicit */int) arr_1 [i_4]);
                            arr_19 [i_2] [i_2] [i_2] [i_2] [(unsigned char)13] [i_2] = ((/* implicit */unsigned int) ((unsigned char) var_11));
                        }
                    } 
                } 
            }
            for (int i_6 = 1; i_6 < 18; i_6 += 2) /* same iter space */
            {
                var_24 += ((/* implicit */unsigned char) ((int) (unsigned char)1));
                var_25 *= ((/* implicit */_Bool) arr_17 [2] [(unsigned char)5] [(unsigned char)5] [i_0] [i_0]);
            }
            var_26 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) ((var_6) - (((/* implicit */int) (unsigned char)29))))), (2139221707U)))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_29 [i_7] = var_7;
                arr_30 [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) var_7);
                arr_31 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) var_7)) + (((unsigned int) (unsigned char)226))));
            }
            var_27 = ((/* implicit */_Bool) min(((~((-(var_13))))), (max((max((-1812391723), (-1812391727))), (1891990627)))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_9 = 3; i_9 < 18; i_9 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) 1737317138);
            var_29 = var_5;
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned char)14), (((unsigned char) var_4))))) / (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 2504488509U)) || (((/* implicit */_Bool) var_6))))), ((unsigned char)1))))));
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((1790478787U), (((/* implicit */unsigned int) min((((/* implicit */int) arr_26 [i_9 - 1] [i_9 - 1] [i_9 - 3])), (var_1)))))))));
        }
        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */int) arr_25 [i_0] [i_10]);
            var_33 = max((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_8 [i_10 + 1] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))));
            arr_37 [14] [i_0] [i_0] = max((((min((((/* implicit */int) var_4)), (arr_7 [i_0] [i_0] [i_0]))) | (((/* implicit */int) ((_Bool) 632760882U))))), ((~(max((((/* implicit */int) (_Bool)1)), (1812391700))))));
        }
        for (unsigned int i_11 = 3; i_11 < 18; i_11 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((1812391722), (arr_27 [i_11] [i_11 - 3] [i_0] [i_0])))) ? (((/* implicit */int) var_4)) : (arr_7 [i_0] [6U] [i_11])));
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                for (int i_13 = 2; i_13 < 15; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_12 [i_11] [i_11 - 2] [i_11 + 1] [i_11])) ? (((/* implicit */int) (unsigned char)48)) : (arr_12 [i_11] [i_11 - 1] [i_11 - 1] [i_11])))));
                            var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_2))))))) / (max((18U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) var_9)))))))));
                            var_37 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((var_0), (((/* implicit */int) (unsigned char)3))))), (-3002364834902361065LL)));
                            arr_48 [(unsigned char)18] [(unsigned char)7] [i_11] [i_12] [i_11] [i_13 + 2] [i_14] = ((/* implicit */_Bool) var_0);
                            arr_49 [i_11] = arr_14 [i_0] [1U] [i_11] [i_13 - 2] [1U];
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) /* same iter space */
    {
        arr_52 [i_15] = ((/* implicit */long long int) ((int) (!((_Bool)1))));
        /* LoopNest 2 */
        for (long long int i_16 = 1; i_16 < 17; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                {
                    arr_59 [i_17] [i_16] [i_17] [i_17] = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 15; i_18 += 4) 
                    {
                        for (int i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            {
                                var_38 ^= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) 1737317138)), (1717195356U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)128)) << (((4294967273U) - (4294967273U))))))));
                                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) (unsigned char)231))));
                                var_40 += ((/* implicit */unsigned int) min(((unsigned char)29), ((unsigned char)24)));
                                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)255)), ((-(((/* implicit */int) var_3)))))))));
                                arr_65 [7] [(_Bool)1] [i_17] [12U] [i_19] = ((/* implicit */unsigned int) ((_Bool) arr_35 [i_19]));
                            }
                        } 
                    } 
                    var_42 *= ((/* implicit */unsigned int) var_12);
                    var_43 *= ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
        arr_66 [i_15] = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (-1712382662)));
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 19; i_20 += 2) 
        {
            for (unsigned char i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                {
                    var_44 |= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 3414889448U)) ? (var_6) : (((/* implicit */int) (unsigned char)144)))));
                    var_45 = var_6;
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        arr_76 [i_15] [i_15] [i_20] [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)193)) || (((/* implicit */_Bool) (-2147483647 - 1)))));
                        arr_77 [i_21] [i_15] [i_21] = ((/* implicit */unsigned char) 1737317138);
                        var_46 *= ((/* implicit */unsigned char) ((472972853U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139)))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) (unsigned char)0))), (max((18U), (((/* implicit */unsigned int) (unsigned char)29)))))))));
                        var_48 ^= var_13;
                        var_49 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)214)), (min((var_0), (((/* implicit */int) var_9))))));
                    }
                }
            } 
        } 
    }
}
