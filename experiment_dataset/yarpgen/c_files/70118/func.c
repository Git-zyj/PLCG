/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70118
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
    var_18 = ((var_15) / (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        arr_13 [i_2] [i_3] [i_1] [i_2] = ((/* implicit */long long int) ((((arr_3 [i_1 + 2]) | (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */signed char) (_Bool)1)))))))) >= (arr_6 [i_0] [i_1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            var_20 *= ((/* implicit */short) arr_10 [i_0] [i_1] [i_0] [i_0] [i_0]);
                            var_21 += ((/* implicit */_Bool) ((arr_11 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_3]))) : ((+(arr_3 [(_Bool)1])))));
                            var_22 = ((/* implicit */unsigned short) min((6805068340833648241LL), (((/* implicit */long long int) min((var_17), (arr_9 [i_1] [i_4] [i_4 + 3]))))));
                        }
                    }
                    var_23 = ((/* implicit */unsigned short) (-(min((arr_6 [i_0] [i_1]), (((/* implicit */long long int) arr_11 [i_1 + 2] [i_1 + 2]))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            arr_20 [i_0] [i_0] = ((/* implicit */int) ((((max(((_Bool)1), (arr_11 [i_0] [i_0]))) ? (((((/* implicit */_Bool) (short)-6972)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_5] [i_5]))) : (8706797092137867041LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) - (((/* implicit */long long int) ((((/* implicit */int) ((arr_15 [(unsigned short)13] [i_5] [i_0] [i_5] [16LL] [(signed char)0] [i_5]) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))) & (((/* implicit */int) arr_10 [i_0] [i_5] [i_0] [i_0] [i_0])))))));
            arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((var_5), (var_5)))) << (((/* implicit */int) arr_15 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_5])) ? (arr_0 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            arr_22 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_17))))) ? (((/* implicit */int) min(((short)23626), (((/* implicit */short) var_5))))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_5]))))) == (((unsigned int) var_7))));
            var_24 = ((/* implicit */long long int) ((unsigned char) min((arr_17 [i_0] [i_5] [i_0]), (((/* implicit */unsigned short) var_8)))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) (~(var_2)));
                var_26 = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0] [(unsigned short)12] [i_7] [i_6 + 3] [i_6 + 3]))));
            }
            for (long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
            {
                arr_31 [i_6] [i_6] = ((/* implicit */long long int) (~(760485397)));
                arr_32 [i_0] [i_0] [i_8] [i_6 - 2] = ((/* implicit */unsigned int) ((arr_15 [i_8] [i_6] [i_6] [7U] [i_6] [i_6] [i_6 - 1]) ? (((/* implicit */int) arr_15 [i_8] [i_6] [i_8] [(unsigned short)17] [(unsigned short)17] [i_0] [i_6 - 1])) : (((/* implicit */int) arr_15 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 3]))));
                var_27 = ((/* implicit */long long int) ((int) (_Bool)1));
                var_28 = ((/* implicit */int) arr_26 [i_6 - 1]);
            }
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_42 [i_6 - 2] [i_11] = ((/* implicit */short) ((unsigned short) arr_9 [i_11] [i_6 + 3] [i_9 + 3]));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) arr_18 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0])));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_9 + 2] [i_9 + 2])) ? (((/* implicit */int) arr_40 [i_9 + 3] [i_9 + 3])) : (((/* implicit */int) arr_40 [i_9 + 4] [i_12]))));
                            var_31 = ((/* implicit */long long int) arr_33 [(unsigned char)19] [i_9 + 3] [19] [i_6 - 2]);
                        }
                        var_32 = (+(((/* implicit */int) arr_8 [i_6 + 1] [i_6 + 2] [i_9 + 4] [i_9])));
                        var_33 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)114))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) 
        {
            var_34 = ((/* implicit */unsigned short) var_14);
            var_35 = ((/* implicit */int) (unsigned char)76);
            arr_48 [(_Bool)0] [i_13] [i_13] = var_12;
        }
        var_36 = var_9;
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        var_37 = ((/* implicit */short) arr_30 [i_14] [i_14] [i_14]);
        var_38 = ((/* implicit */signed char) arr_36 [(_Bool)1]);
        arr_52 [i_14] = ((/* implicit */long long int) (~(arr_45 [i_14] [i_14])));
    }
    for (long long int i_15 = 3; i_15 < 18; i_15 += 2) 
    {
        var_39 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((short)-31432), ((short)-25697))))));
        arr_55 [i_15] = ((/* implicit */short) min((((((/* implicit */int) arr_54 [i_15 - 2])) / (((/* implicit */int) arr_54 [i_15 + 1])))), (((/* implicit */int) max((arr_54 [i_15 - 1]), (arr_54 [i_15 - 1]))))));
    }
    var_40 -= ((/* implicit */long long int) (short)-23628);
}
