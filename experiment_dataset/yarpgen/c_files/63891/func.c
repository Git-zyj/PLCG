/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63891
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))));
            var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)4] [i_1]))));
            /* LoopNest 2 */
            for (signed char i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] = (signed char)-76;
                        var_19 &= var_10;
                        var_20 -= ((/* implicit */unsigned int) ((arr_8 [i_0 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            for (int i_5 = 3; i_5 < 17; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_1)), (arr_5 [i_0])))));
                    var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) arr_9 [i_5 - 2] [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_14 [i_0 + 2])))) / ((-(((((/* implicit */_Bool) 1150359871U)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) var_7))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((arr_19 [i_6 + 1]) / (arr_19 [i_6 - 1])));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        arr_33 [i_6] [i_6] [i_9] = ((/* implicit */unsigned int) arr_19 [i_6 - 1]);
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_23 [i_7] [i_9] [i_10])) >= (((/* implicit */int) var_5)))));
                            arr_37 [i_10] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6 - 3] [i_6 + 2] [i_6 - 3])))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) arr_27 [i_6 - 3] [i_6 + 3] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_27 [i_6] [i_6 + 1] [i_6 + 1] [i_6]))));
                    }
                    for (int i_11 = 3; i_11 < 21; i_11 += 3) 
                    {
                        var_26 = (+(127U));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 2; i_12 < 21; i_12 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) 127U)))));
                            var_28 = ((/* implicit */long long int) var_6);
                        }
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
                        {
                            arr_47 [i_6] [i_11] = arr_29 [i_11 - 3] [i_11 - 3];
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_6] [i_6 + 1] [i_6])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6 - 1] [i_6 + 3] [i_6])))));
                            arr_48 [i_6] [i_13] [i_11] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_11 - 1] [i_7])) ? (((/* implicit */unsigned int) arr_29 [i_6] [i_7])) : (((((/* implicit */_Bool) var_9)) ? (4294967168U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        }
                    }
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 3; i_15 < 20; i_15 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(4294967142U)))) ? ((-(7914290657850604852LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                            var_31 = ((/* implicit */signed char) 4294967164U);
                            var_32 ^= ((/* implicit */signed char) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_25 [(signed char)6]))));
                        }
                        arr_54 [i_6] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_14] [i_6 - 1] [i_6 + 1]))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        arr_57 [i_16] [i_8] [i_6] [(signed char)8] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_28 [i_6] [i_6] [i_7] [i_16])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_28 [i_6] [i_7] [i_8] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59)))))) : (1975133527972268357LL)));
                        arr_58 [i_6] [i_7] [i_8] [i_6] [i_6] = ((unsigned int) var_2);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        arr_63 [i_6] = (signed char)-38;
                        var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)5))));
                        var_34 = ((/* implicit */unsigned int) ((127U) < (arr_46 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6] [i_6])));
                    }
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
                    {
                        var_35 -= ((/* implicit */unsigned char) (+(var_14)));
                        var_36 = ((/* implicit */signed char) (+(4294967169U)));
                        var_37 *= ((/* implicit */signed char) ((arr_21 [i_6 + 3] [i_7]) + (((/* implicit */int) (signed char)-65))));
                    }
                    for (signed char i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */long long int) (~(arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
                        arr_69 [i_6] [i_6] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_62 [i_19] [i_8]))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 24; i_20 += 3) 
    {
        for (signed char i_21 = 2; i_21 < 22; i_21 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    for (long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        for (int i_24 = 0; i_24 < 24; i_24 += 2) 
                        {
                            {
                                arr_84 [i_20] [i_21] [i_20] [i_23] [i_24] [i_24] = ((((/* implicit */int) ((arr_72 [i_20] [i_20]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))) ^ (((((/* implicit */_Bool) arr_77 [i_20] [i_20] [i_21 - 2])) ? (((/* implicit */int) arr_83 [i_20] [i_20] [i_20] [i_21 + 2] [i_21] [i_21] [i_21 - 2])) : (((/* implicit */int) arr_83 [i_21] [(signed char)22] [i_20] [i_21] [i_20] [i_21] [i_21 + 2])))));
                                var_39 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_20] [i_20])) && (((/* implicit */_Bool) arr_76 [i_24]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106)))))));
                                var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
                                arr_85 [i_23] [i_23] [i_22] [(signed char)12] [i_23] [i_22] [i_20] = 1757987386U;
                                var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_78 [i_20]))) / (arr_82 [i_20] [i_21 + 1] [i_20])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_22]))))) : (((/* implicit */int) max(((signed char)-68), (var_5))))));
                            }
                        } 
                    } 
                } 
                arr_86 [i_20] [i_20] = ((((/* implicit */unsigned int) (-(var_12)))) + (min((((/* implicit */unsigned int) var_11)), (arr_74 [i_20] [i_20]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_25 = 1; i_25 < 12; i_25 += 3) 
    {
        for (signed char i_26 = 2; i_26 < 11; i_26 += 2) 
        {
            for (signed char i_27 = 0; i_27 < 13; i_27 += 3) 
            {
                {
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_26] [i_26 - 1] [i_26]))));
                    arr_94 [i_26] [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_44 [i_25 + 1] [i_26 + 1] [i_26] [i_26] [i_25 + 1] [i_26 + 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_28 = 0; i_28 < 13; i_28 += 2) 
    {
        for (unsigned int i_29 = 0; i_29 < 13; i_29 += 1) 
        {
            {
                arr_101 [i_28] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_17 [i_28] [i_29] [i_29]) < (((/* implicit */long long int) arr_29 [i_28] [i_29]))))), (arr_16 [i_28] [i_28] [i_28])));
                /* LoopNest 2 */
                for (signed char i_30 = 4; i_30 < 12; i_30 += 2) 
                {
                    for (unsigned int i_31 = 2; i_31 < 11; i_31 += 2) 
                    {
                        {
                            arr_106 [i_28] [i_29] = ((/* implicit */signed char) (+((~(arr_74 [i_29] [i_28])))));
                            var_43 = ((((/* implicit */_Bool) (-(arr_68 [i_28] [i_29] [i_30 - 4])))) ? (arr_79 [i_30] [i_30] [i_30 + 1] [i_31 - 2]) : (((int) 1073741823)));
                        }
                    } 
                } 
            }
        } 
    } 
}
