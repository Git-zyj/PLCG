/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92298
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) -647799959)), (4294967269U)));
            arr_7 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            var_13 = ((/* implicit */_Bool) min((((int) ((((/* implicit */_Bool) -1796591468)) || (((/* implicit */_Bool) 3970305894U))))), (((/* implicit */int) ((324661406U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))))))));
            var_14 -= ((((/* implicit */int) ((max((arr_0 [i_0] [i_0]), (arr_2 [2] [14U]))) == (324661384U)))) >> (((max((((572912840U) & (((/* implicit */unsigned int) 127)))), (((/* implicit */unsigned int) (signed char)98)))) - (77U))));
            var_15 = ((/* implicit */unsigned short) arr_3 [i_0]);
        }
        var_16 ^= ((/* implicit */unsigned int) -647799970);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((unsigned int) ((arr_2 [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_18 ^= arr_11 [i_2] [0U] [i_3];
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_19 += ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3] [i_3 + 1] [i_3])) << ((((-(29U))) - (4294967249U)))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (arr_1 [i_3 - 1])));
                    var_21 |= (-(((arr_14 [i_2] [i_3 - 1]) / (((/* implicit */int) (signed char)9)))));
                    arr_17 [i_2] [i_3] [i_3] [i_3] [i_5] = ((arr_8 [i_3 - 1]) >= (arr_8 [i_3 - 2]));
                }
                var_22 = ((/* implicit */int) max((var_22), (((int) arr_0 [i_3 - 3] [i_3 - 1]))));
                var_23 = ((/* implicit */unsigned short) 4294967295U);
                var_24 = ((signed char) ((int) (signed char)-13));
            }
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                var_25 &= ((((4294967295U) - (4294967295U))) * (arr_19 [(unsigned short)4] [i_3 - 2] [i_6]));
                arr_20 [i_2] [i_3] [i_6] = ((/* implicit */_Bool) ((signed char) (signed char)-1));
                var_26 *= ((/* implicit */signed char) ((162988198) + (((/* implicit */int) ((unsigned short) 572912820U)))));
                var_27 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_6]) < (arr_15 [i_2]))))) <= (((1966845172U) & (((/* implicit */unsigned int) 162988177))))));
            }
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (-(arr_14 [i_3 + 1] [i_3]))))));
                var_29 -= ((signed char) 1409222581U);
            }
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_30 += ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned short)19409))) % (((/* implicit */int) ((signed char) arr_25 [i_2] [i_2] [i_2])))));
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_9 [i_3]))));
                arr_26 [i_2] [i_2] [i_3] [i_8] = ((/* implicit */int) ((unsigned short) ((-1399026575) >= (arr_11 [i_8] [i_3] [i_2]))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((int) arr_5 [8U])))));
                    arr_30 [i_2] [i_3] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_2] [7] [(_Bool)1] [i_2])) ? (arr_0 [12U] [12U]) : (((((/* implicit */unsigned int) 162988176)) ^ (arr_23 [(signed char)10] [i_8] [(_Bool)1])))));
                    var_33 = ((arr_24 [i_3]) || (((((/* implicit */unsigned int) -163681173)) <= (arr_23 [i_2] [i_3] [i_2]))));
                    var_34 = ((/* implicit */unsigned int) arr_1 [i_2]);
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    arr_34 [i_2] |= ((/* implicit */unsigned int) ((unsigned short) (signed char)56));
                    var_35 ^= ((/* implicit */int) ((arr_2 [i_3 - 2] [i_2]) % (arr_2 [i_3 + 1] [i_2])));
                }
                var_36 = ((((/* implicit */int) ((((/* implicit */int) (signed char)-98)) >= (arr_14 [i_8] [i_2])))) | (((/* implicit */int) arr_31 [i_8] [i_3 + 1] [i_3 + 1] [i_3 - 1] [3U] [i_2])));
            }
        }
        for (unsigned short i_11 = 3; i_11 < 11; i_11 += 1) /* same iter space */
        {
            var_37 += ((/* implicit */_Bool) ((signed char) arr_25 [i_2] [i_2] [i_11 - 1]));
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                var_38 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46125)) < (arr_16 [i_12] [i_2] [i_2] [i_2])));
                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) arr_9 [i_11 - 2]))));
                var_40 = (-(-162988190));
                var_41 = ((/* implicit */_Bool) ((arr_24 [i_11]) ? (((/* implicit */int) arr_24 [i_11])) : (((/* implicit */int) arr_24 [i_11]))));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        arr_42 [i_13] = ((/* implicit */int) ((unsigned int) arr_40 [i_13] [i_13]));
        arr_43 [i_13] = ((/* implicit */unsigned int) ((int) 1409222558U));
        var_42 = ((/* implicit */signed char) ((arr_40 [i_13] [(_Bool)1]) & (arr_40 [i_13] [i_13])));
        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((/* implicit */_Bool) ((162988181) ^ (((/* implicit */int) (signed char)0))))) ? (2797669313U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)117)) > (((/* implicit */int) (signed char)-1)))))))))));
    }
    var_44 = ((((/* implicit */int) var_7)) + (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))));
}
