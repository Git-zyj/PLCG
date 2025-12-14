/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5772
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
    var_19 = ((/* implicit */unsigned char) ((long long int) ((2146039960) >> (((2281953594U) - (2281953591U))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */signed char) max((min((max((((/* implicit */long long int) var_16)), (-6680246308649756772LL))), (((/* implicit */long long int) 2146039959)))), (((/* implicit */long long int) (unsigned char)54))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((/* implicit */int) var_15)), ((+(((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned char)4] [i_0] [(unsigned short)22] [i_0]))))))))))));
                                arr_13 [i_0] [18LL] [i_2] [i_3] [18LL] = ((/* implicit */short) ((_Bool) min((arr_2 [i_0] [i_1 + 1]), (((/* implicit */long long int) (signed char)-4)))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)72)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [5] [i_0] [(unsigned short)8] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) 385785899)) - (arr_8 [i_0] [i_0])))) : (arr_2 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_22 = min((((((/* implicit */_Bool) min((var_14), (((/* implicit */signed char) var_3))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) var_11))));
    var_23 = ((/* implicit */int) (unsigned char)237);
    /* LoopSeq 4 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned short) (_Bool)1);
        var_24 -= ((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5] [20LL] [i_5] [i_5]);
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        var_25 = ((unsigned char) -86582837);
        var_26 = ((/* implicit */_Bool) (+((+(min((((/* implicit */long long int) (signed char)-1)), (arr_21 [i_6])))))));
        arr_22 [i_6] = ((/* implicit */long long int) 1385977126);
        arr_23 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (_Bool)0)) : (-1141592617)));
    }
    /* vectorizable */
    for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) (unsigned char)19);
        /* LoopSeq 3 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    {
                        arr_32 [i_7] [i_7] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((arr_26 [i_7]) >> (((4681155533081347931LL) - (4681155533081347919LL)))));
                        arr_33 [i_10] [13LL] [13LL] [13LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) arr_29 [i_7] [i_8] [i_9])) : (arr_2 [i_9] [i_10]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_7] [i_7] [(short)8] [i_7] [i_7] [i_7] [i_7])) ? (1941697830) : (((/* implicit */int) var_1)))))));
                        var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                        arr_34 [(unsigned char)1] [i_8] &= ((/* implicit */short) ((long long int) ((arr_2 [i_7] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */int) 3764449823U);
            arr_35 [i_7] [(unsigned char)1] [i_7] = ((/* implicit */signed char) arr_31 [i_7] [i_7] [(unsigned char)12] [5ULL]);
            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 - 1]))));
        }
        for (long long int i_11 = 3; i_11 < 12; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                arr_43 [i_12] = ((/* implicit */_Bool) arr_37 [i_7] [i_7 - 2]);
                arr_44 [i_7] [i_11] = ((/* implicit */short) ((long long int) ((arr_28 [i_7] [9ULL]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))));
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7 - 1]))) / (((((/* implicit */_Bool) arr_37 [i_12] [i_7])) ? (arr_21 [14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))))));
                var_32 &= ((/* implicit */unsigned short) ((((arr_19 [15]) >> (((arr_29 [i_7] [i_11] [i_12]) + (721512618))))) % (((/* implicit */long long int) ((arr_37 [i_7] [i_7]) / (((/* implicit */int) (unsigned char)127)))))));
                var_33 = ((/* implicit */unsigned int) arr_12 [i_11 + 2] [i_11] [13] [i_11] [i_11] [i_11] [i_11]);
            }
            for (int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-1618))));
                var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_11] [i_13]))) ? (arr_10 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_38 [i_11]))) >> (((var_7) + (176492311)))));
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) ^ (arr_26 [i_7]))))));
            }
            var_38 = ((/* implicit */unsigned char) arr_9 [i_11 + 2] [(_Bool)1] [(unsigned char)8] [i_7]);
            var_39 = ((/* implicit */unsigned int) min((var_39), (var_8)));
        }
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            arr_50 [i_7] [i_7] [i_7] |= arr_9 [i_7 + 2] [(signed char)18] [i_7 + 1] [(unsigned short)13];
            arr_51 [i_7] [i_7] [i_14] = ((/* implicit */_Bool) var_17);
            arr_52 [i_7 + 1] = ((/* implicit */unsigned short) ((((arr_49 [i_14] [(signed char)6]) - (arr_30 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_7]))) <= (((/* implicit */long long int) arr_47 [i_7 + 2] [i_7 + 1]))));
        }
        var_40 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_7 - 1]))));
    }
    for (unsigned short i_15 = 2; i_15 < 14; i_15 += 2) /* same iter space */
    {
        arr_55 [i_15] = ((/* implicit */int) var_1);
        /* LoopSeq 1 */
        for (int i_16 = 2; i_16 < 13; i_16 += 1) 
        {
            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) arr_4 [i_15]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    var_42 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_64 [3] [i_16 + 3]))));
                    var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)247)) >= (((/* implicit */int) (signed char)-59))));
                }
                for (unsigned short i_19 = 3; i_19 < 15; i_19 += 3) 
                {
                    arr_68 [i_15] [i_16] [(unsigned char)12] = ((/* implicit */long long int) arr_45 [i_15 + 1] [i_16 - 2] [i_19 - 3] [4]);
                    var_44 *= ((/* implicit */long long int) arr_6 [i_15]);
                }
                var_45 += ((/* implicit */long long int) ((((var_7) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_15 + 2])) - (33068)))));
            }
        }
    }
}
