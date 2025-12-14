/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95981
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((short) 15U)))) ? (max((((/* implicit */int) var_13)), (((603763456) | (var_6))))) : ((-2147483647 - 1))));
        var_16 = ((int) (~(((/* implicit */int) arr_0 [i_0 - 3]))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(0ULL))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 12; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (unsigned short)32142))));
                                var_19 = ((/* implicit */long long int) ((arr_9 [i_3]) < (((/* implicit */int) ((_Bool) var_3)))));
                            }
                        } 
                    } 
                    var_20 = (unsigned short)33393;
                    var_21 = ((/* implicit */int) (-(((unsigned long long int) (~(((/* implicit */int) (unsigned char)2)))))));
                    var_22 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_2 + 1] [(_Bool)1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1]))))), (arr_11 [14] [i_2 - 1] [i_1] [i_1])));
                }
            } 
        } 
        var_23 -= ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) var_11)))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        arr_19 [i_6] = (~(((/* implicit */int) (signed char)3)));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6 + 2])))))));
    }
    var_25 = ((/* implicit */short) (unsigned short)32142);
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 4; i_11 < 14; i_11 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((((_Bool)1) ? (arr_11 [i_11 - 4] [i_11 - 2] [i_11 - 2] [i_11 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_11 - 4] [i_11 - 1]))))) : (((/* implicit */long long int) var_9))));
                            var_27 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (unsigned short)41917)) ? (2594387720181808482LL) : (5199870629873004258LL))) >> ((((~(-1365691051))) - (1365691031)))))));
                            arr_35 [i_11 - 1] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_8 [i_7] [i_7] [i_9] [i_11]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 4; i_12 < 14; i_12 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23618)) ? (((/* implicit */int) (unsigned short)7)) : (1365691050))))));
                            arr_40 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) (~(arr_13 [i_12 + 1] [i_12 - 4] [i_12 + 1] [i_12 - 3] [i_12 - 4] [i_12 - 4] [i_12 - 1])));
                            arr_41 [i_7] [i_8] [i_8] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_12 - 3]))));
                        }
                        var_29 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_11 [0ULL] [0ULL] [0ULL] [0ULL])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)32142)))) : (((/* implicit */int) arr_4 [i_7])))));
                    }
                } 
            } 
            var_30 = ((/* implicit */short) -1656225485521121629LL);
            var_31 = (~((-(((/* implicit */int) (unsigned short)55902)))));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_6))));
        }
        var_33 = ((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7]);
        var_34 = (~(((/* implicit */int) var_5)));
        arr_42 [5LL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((var_12), (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) arr_5 [i_7] [i_7])) ? (((((/* implicit */int) var_8)) - (var_14))) : (((/* implicit */int) var_10)))) : ((~(((((/* implicit */int) var_1)) << (((/* implicit */int) (unsigned short)8))))))));
    }
    for (short i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
    {
        var_35 *= ((/* implicit */short) arr_10 [i_13] [i_13] [9ULL] [i_13] [i_13] [i_13]);
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                {
                    arr_50 [i_13] [i_14] [i_15] [i_15] = (unsigned short)49826;
                    var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1023))));
                }
            } 
        } 
    }
}
