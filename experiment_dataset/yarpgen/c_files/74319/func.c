/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74319
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
    var_19 ^= ((/* implicit */signed char) (short)25980);
    var_20 |= ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */short) (unsigned short)56432);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) arr_2 [i_0] [i_3 - 3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0] [i_3 - 3])) : (((/* implicit */int) arr_2 [i_0] [i_3 - 4])))))));
                    }
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((min((((/* implicit */int) arr_2 [i_1] [i_1])), ((+(var_11))))), (((/* implicit */int) var_0)))))));
                        var_23 &= ((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)21072), (((/* implicit */unsigned short) (short)-25954)))))));
                    }
                    var_24 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_25 ^= ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61087))))), (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) arr_1 [i_5])) : ((~(((/* implicit */int) arr_0 [i_5]))))))));
        var_26 = ((/* implicit */short) ((_Bool) var_18));
        arr_15 [10LL] [i_5] &= ((/* implicit */unsigned short) arr_11 [i_5] [i_5] [i_5] [(signed char)1] [i_5]);
    }
    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                {
                    var_27 = ((/* implicit */_Bool) var_6);
                    /* LoopSeq 1 */
                    for (signed char i_9 = 2; i_9 < 24; i_9 += 4) 
                    {
                        arr_28 [i_9 - 2] [i_9 + 1] [i_7] [i_9 - 2] [i_7] = ((/* implicit */signed char) var_9);
                        var_28 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_21 [i_7 - 1])) & (((/* implicit */int) arr_21 [i_7 + 1]))))));
                        var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_23 [i_8 + 3] [i_8] [i_9 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_23 [i_8 + 3] [i_8 - 1] [i_9 - 1] [i_9 - 2])) : (((/* implicit */int) (short)2))))));
                        arr_29 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_7 + 2] [i_7 + 1]))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((unsigned short) (short)22194)))));
                    }
                    var_31 = ((/* implicit */_Bool) var_2);
                    var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_24 [i_6] [i_7 + 1] [i_8 + 1] [i_6])) <= (((/* implicit */int) arr_24 [i_6] [i_7 + 2] [i_8 + 1] [(unsigned short)5])))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            var_33 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_6] [i_10] [i_10])) && (((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_6])))))) - (((((/* implicit */_Bool) arr_25 [i_6] [i_10] [i_10])) ? (arr_25 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))))));
            arr_32 [i_6] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) var_16)))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_24 [(_Bool)1] [6] [i_10] [i_10]))) ? (((/* implicit */int) (unsigned short)448)) : ((((~(((/* implicit */int) (short)8)))) / (((/* implicit */int) var_0))))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 2; i_11 < 24; i_11 += 2) 
        {
            var_35 = ((/* implicit */_Bool) (signed char)-4);
            arr_35 [i_11] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) || (arr_34 [i_6] [i_11 - 1] [i_11 - 1])));
            var_36 = ((/* implicit */short) (+(-1762672098)));
        }
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_23 [i_6] [i_6] [i_13] [i_13])))), ((+(((/* implicit */int) (short)-1))))));
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */int) min((min(((unsigned short)61062), ((unsigned short)61062))), (max(((unsigned short)448), (((/* implicit */unsigned short) var_7))))))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_33 [21] [i_12] [i_13])))))))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (((((/* implicit */_Bool) (short)14968)) ? ((((_Bool)1) ? (916642964U) : (1077561863U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))))))));
}
