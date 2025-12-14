/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70774
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
    var_17 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) arr_1 [(short)4] [i_0]);
        var_19 = ((var_5) | (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_20 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    /* LoopSeq 2 */
    for (short i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 3])) << (((((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2])) - (50)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 2])))))));
            arr_9 [i_1] [i_1] = ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) % (((/* implicit */int) arr_3 [i_1 - 1] [i_1]))))) | (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_5)))) ? (((/* implicit */long long int) var_1)) : (var_6))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 3]))))))));
        }
        var_23 *= var_16;
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 2])) && (((/* implicit */_Bool) arr_0 [i_1])))))));
    }
    for (int i_3 = 2; i_3 < 18; i_3 += 1) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_12))));
        var_26 += ((/* implicit */unsigned char) arr_10 [i_3]);
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4 + 1]))))) : ((-(((/* implicit */int) arr_5 [i_4] [i_4] [i_4 + 3])))))))));
        var_28 = ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_4] [i_4]) : (arr_13 [i_4]));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            arr_16 [i_4] [(unsigned short)6] [i_4 - 2] &= ((((/* implicit */_Bool) arr_1 [i_5] [i_4 - 1])) ? (((/* implicit */int) arr_1 [i_4 - 1] [i_5])) : (((/* implicit */int) arr_1 [i_4 + 2] [i_4 - 2])));
            var_29 += ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4 + 3] [i_4 + 2] [i_4 - 1])) ? (arr_11 [i_4 - 3] [i_4 - 2]) : (arr_11 [i_4 - 2] [i_4 - 1])));
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_7 [i_5]))));
            var_31 = ((/* implicit */long long int) arr_14 [i_4 + 1]);
        }
        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            var_32 *= ((/* implicit */unsigned char) arr_19 [i_4 + 2]);
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_33 = ((/* implicit */short) arr_20 [i_4] [i_4 + 2] [i_4]);
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_3 [i_4] [6U]))));
                    }
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            var_35 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_4 + 1] [i_4 - 2])) <= (((/* implicit */int) arr_6 [i_4 + 1] [i_4 - 1])))))));
            var_36 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_12)) << (((arr_4 [i_4] [i_4 - 3]) - (8177685211503063437LL))))) <= (((/* implicit */int) arr_19 [i_9])))))) >= (arr_7 [i_4 - 1])));
            var_37 &= ((/* implicit */long long int) arr_22 [i_4] [i_4 + 3] [8LL] [i_4 - 2]);
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 9; i_10 += 1) 
            {
                for (int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    {
                        var_38 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_10 + 2] [i_11 - 1] [i_4 - 3])) != (((/* implicit */int) arr_5 [i_10 - 1] [i_11 - 1] [i_4 + 1])))))));
                        var_39 = ((/* implicit */long long int) var_10);
                        var_40 = ((/* implicit */unsigned int) arr_31 [i_4] [i_4] [i_10 + 2] [i_11] [i_9]);
                        var_41 -= ((/* implicit */long long int) var_13);
                        arr_32 [i_4] [i_4 - 3] [i_4] [i_4 - 2] [i_4] [i_4] = ((/* implicit */signed char) arr_14 [i_4 - 2]);
                    }
                } 
            } 
        }
    }
    for (signed char i_12 = 2; i_12 < 16; i_12 += 3) 
    {
        arr_36 [(short)8] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_2))))));
        arr_37 [(_Bool)1] &= ((arr_33 [i_12 - 1] [i_12 - 1]) ? (((arr_33 [i_12 - 1] [i_12 + 1]) ? (((/* implicit */int) arr_33 [i_12 - 2] [i_12 + 1])) : (((/* implicit */int) arr_33 [i_12 - 1] [i_12 + 1])))) : (((/* implicit */int) arr_33 [i_12 + 1] [i_12 - 2])));
    }
    var_42 *= ((/* implicit */unsigned int) var_14);
}
