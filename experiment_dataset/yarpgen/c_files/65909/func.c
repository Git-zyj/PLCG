/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65909
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned int) max(((+((-(((/* implicit */int) arr_0 [i_0])))))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || ((_Bool)1)))) << (((/* implicit */int) ((_Bool) 1092307737091159119LL)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) min((arr_0 [12LL]), ((signed char)16))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (max(((+(min((1221215127U), (((/* implicit */unsigned int) arr_0 [i_1])))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) >> (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((int) 3073752168U)));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (4294966784U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2])))))) && (((((/* implicit */_Bool) var_7)) || ((_Bool)1))))))));
        var_20 *= min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((arr_10 [i_2]) + (751114162)))))), (min((arr_7 [i_2]), (((/* implicit */unsigned int) max((700941123), (((/* implicit */int) arr_5 [i_2]))))))));
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_19 [i_2] [i_2] [i_5] [6] [3U] [i_6])) <= (((/* implicit */int) var_12)))) && (((((/* implicit */int) arr_13 [i_2] [i_2] [i_4])) < (((/* implicit */int) arr_12 [i_2] [i_3 + 3])))))))) | (max((((/* implicit */long long int) arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [8U] [i_3 + 1] [i_6])), (max((((/* implicit */long long int) arr_0 [1U])), (arr_8 [i_3])))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_15 [(signed char)6] [(_Bool)1] [(signed char)6] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_6]))))))))), (min((2122345644U), (4294966784U))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(arr_9 [i_3 + 3])))), (((unsigned int) (~(1048575U))))));
                    var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_4])) ? (((/* implicit */int) arr_20 [i_3 + 2] [11U] [11U] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_20 [i_3 + 2] [i_3 + 2] [i_4] [i_4] [i_2]))))));
                    var_25 = ((/* implicit */int) max((var_25), ((((~(((/* implicit */int) arr_21 [i_2] [i_3] [i_2] [i_3 + 3] [i_2])))) - (min((arr_10 [i_4]), (((/* implicit */int) arr_21 [i_2] [i_3] [i_4] [i_3 - 1] [i_2]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 3) 
    {
        var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) == (arr_22 [i_7 + 1]));
        /* LoopNest 3 */
        for (unsigned int i_8 = 2; i_8 < 9; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (unsigned char i_10 = 2; i_10 < 9; i_10 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_10]))));
                        var_28 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7] [(_Bool)1]))))));
                        var_29 = ((/* implicit */unsigned char) ((unsigned int) ((int) arr_30 [(_Bool)1] [(unsigned short)9] [(unsigned char)7] [i_9] [(_Bool)1] [(unsigned short)2])));
                    }
                } 
            } 
        } 
        var_30 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_7] [(signed char)2] [i_7 - 1] [i_7] [i_7 - 1] [(_Bool)1])) - (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_27 [i_7] [(_Bool)1] [i_7]))))) : (((arr_25 [8U] [i_7] [(unsigned char)6]) ? (var_9) : (4160749568U)))));
        arr_32 [i_7] = ((/* implicit */unsigned int) (!(arr_31 [i_7 + 1] [(unsigned char)2] [i_7 + 1] [i_7])));
        var_31 += ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)0))))));
    }
    var_32 = ((/* implicit */_Bool) ((max((max((var_10), (1221215128U))), ((+(var_10))))) - (max(((((_Bool)1) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) (unsigned char)239))))));
    var_33 = var_9;
    /* LoopNest 3 */
    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) arr_36 [i_13]);
                                arr_45 [i_11] [i_11] [i_11] [14U] [i_15] = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_35 [i_11])))) ^ ((+(arr_35 [i_11]))));
                                arr_46 [(unsigned char)16] [i_12] [i_14] [i_15] &= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_42 [i_11] [i_11] [i_13] [i_15] [i_15])), (1822622978)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [(unsigned char)3] [(signed char)11] [(signed char)11])))))))), (((((/* implicit */int) arr_34 [i_13])) / ((+(((/* implicit */int) var_13))))))));
                                arr_47 [i_14] = ((/* implicit */unsigned short) min(((+((-(((/* implicit */int) arr_44 [i_11] [i_11] [i_14] [i_14] [(_Bool)1] [i_15] [i_15])))))), ((~(((/* implicit */int) arr_36 [i_11]))))));
                                var_35 ^= ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_15]))) : (3793060190U))))), ((+((-(((/* implicit */int) (unsigned char)80))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_40 [i_11])) ? (arr_40 [i_13]) : (arr_40 [i_11]))), (((/* implicit */unsigned int) max((((((/* implicit */int) var_0)) < (((/* implicit */int) (_Bool)1)))), (arr_33 [i_11] [i_13]))))));
                    arr_48 [i_13] [1LL] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((((/* implicit */_Bool) 4293918734U)) || ((_Bool)1))))))));
                }
            } 
        } 
    } 
}
