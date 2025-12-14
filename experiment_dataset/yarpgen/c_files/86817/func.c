/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86817
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1891518332)))))))) || (((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            var_21 *= ((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1]);
        }
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_4))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) ^ (var_11)));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_2] = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)10)))) ^ ((~(((/* implicit */int) (signed char)127))))));
            arr_14 [i_2] [i_2] = ((((((/* implicit */_Bool) (unsigned short)44198)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) var_5)))) == (((/* implicit */int) (signed char)-126)));
            var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            arr_18 [i_2] [i_2] [10U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_12 [i_2]) : (((/* implicit */int) var_1))));
            arr_19 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_2] [i_2]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                arr_27 [i_2] [i_5] [i_5] [4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)62898)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)64))))));
                arr_28 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) ((var_13) <= (((/* implicit */int) (unsigned short)21337))))));
                arr_29 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                arr_30 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_5] [i_5] [i_5]))));
            }
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                var_25 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))));
                arr_33 [i_5] [16] &= ((/* implicit */unsigned short) ((var_4) >> ((((~(((/* implicit */int) (unsigned short)57344)))) + (57361)))));
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_26 -= ((/* implicit */unsigned int) var_7);
                    arr_37 [i_2] [(signed char)8] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_26 [i_2])) : (((/* implicit */int) arr_7 [i_5] [i_7]))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3231509138U)) ? (((/* implicit */int) (unsigned short)28061)) : (((/* implicit */int) (unsigned short)65523))));
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((/* implicit */int) min((var_28), (((arr_10 [i_2] [i_2] [i_2]) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_0))))));
                    var_29 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
                }
                for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    arr_42 [i_2] [i_2] = ((((((/* implicit */int) arr_10 [i_2] [i_2] [(unsigned short)16])) <= (((/* implicit */int) var_6)))) ? (((((/* implicit */int) (unsigned short)57366)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_26 [i_2])));
                    arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_5);
                    var_30 |= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (unsigned short)8207))));
                    arr_44 [i_2] [(signed char)1] [(signed char)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-127))))) ? (((((/* implicit */int) (unsigned short)21338)) + (((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) arr_40 [i_2] [i_5] [i_7] [i_7] [i_2] [i_10])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_6 [i_7] [i_10]))))));
                    var_31 = ((/* implicit */int) arr_0 [i_7] [i_5]);
                }
                var_32 *= ((/* implicit */signed char) (+(arr_40 [i_7] [i_7] [(_Bool)1] [i_7] [i_7] [i_7])));
            }
            arr_45 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_31 [i_2] [i_2] [i_2]))));
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_4))));
        }
        var_34 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_1))))));
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)40692)) ? (((/* implicit */int) arr_22 [i_2] [i_2])) : (arr_12 [(unsigned short)4]))))));
    }
    var_36 = var_18;
}
