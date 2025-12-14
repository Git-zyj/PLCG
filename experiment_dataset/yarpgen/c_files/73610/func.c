/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73610
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
    for (signed char i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 2])) + (((/* implicit */int) (signed char)60))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)81))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    {
                        arr_11 [(signed char)2] [i_3] &= ((/* implicit */signed char) (~(max((((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_0] [(signed char)0]))), (((((/* implicit */int) arr_8 [(signed char)0] [i_2])) | (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_2] [(signed char)2] [i_3]))))))));
                        var_13 = arr_9 [i_1];
                        var_14 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_0] [i_0 + 2] [i_0]), (arr_3 [i_0] [i_0 - 2] [i_0 + 1])))) / (((/* implicit */int) min((arr_3 [i_0] [i_0 - 4] [i_0 - 4]), (arr_3 [i_0] [i_0 - 3] [i_0 + 2]))))));
                        var_15 = arr_6 [i_1] [i_1] [(signed char)8] [i_0];
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_4 = 3; i_4 < 6; i_4 += 2) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_0 - 1]), (arr_4 [i_0 - 1])))) ? (((((/* implicit */int) arr_4 [i_0 - 1])) & (((/* implicit */int) (signed char)-10)))) : (((/* implicit */int) var_9))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_16 [i_0] [i_4] [i_4] [i_4 - 3]), (arr_16 [i_0] [i_4] [i_4 + 1] [i_4 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_17 [i_0] [i_4 + 1] [i_5] [i_6]))))) ? (((/* implicit */int) max((arr_21 [i_7] [i_6] [i_4]), (var_6)))) : (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_5]), (arr_13 [i_0] [i_0]))))))));
                            var_18 = (signed char)9;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_19 = arr_17 [i_9] [(signed char)3] [i_0] [i_0];
                            var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(signed char)0] [i_4 + 3])) / (((/* implicit */int) ((signed char) arr_1 [(signed char)0])))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_19 [i_0] [i_4 + 3] [i_5] [i_8] [i_9])) * (((/* implicit */int) arr_24 [(signed char)4] [i_5] [i_8] [(signed char)0])))))) : (max(((~(((/* implicit */int) arr_24 [(signed char)8] [i_4] [i_4] [i_4 - 1])))), (((/* implicit */int) ((((/* implicit */int) arr_22 [i_0 - 4] [i_4] [i_5] [i_5] [i_8] [i_9])) != (((/* implicit */int) (signed char)121)))))))));
                            var_21 += ((signed char) (signed char)106);
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [(signed char)7] [i_4] [i_4 - 2] [i_4])) ? (min((((/* implicit */int) arr_16 [(signed char)4] [i_4] [(signed char)4] [i_4])), (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) arr_18 [(signed char)8] [i_0] [(signed char)8] [i_5])) - (28))))))) : (((/* implicit */int) var_9)))))));
            }
            for (signed char i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    var_23 &= var_8;
                    var_24 &= ((signed char) arr_32 [i_0] [i_0] [i_0] [i_0]);
                }
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    var_25 = ((/* implicit */signed char) (~(min((((((/* implicit */int) var_10)) | (((/* implicit */int) arr_36 [i_0 - 1] [i_0 - 1] [i_10] [i_0])))), (((/* implicit */int) arr_0 [i_4 - 3]))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) min((arr_16 [(signed char)2] [i_10] [(signed char)2] [(signed char)2]), ((signed char)88)))))) : (((((/* implicit */_Bool) max((var_10), (arr_27 [i_0 + 2] [i_0] [i_0])))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_22 [i_0] [(signed char)6] [i_10] [i_12] [i_4] [i_12])))) : (((/* implicit */int) (signed char)15)))))))));
                }
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) > (((/* implicit */int) (signed char)-56)))) ? (((/* implicit */int) arr_15 [(signed char)2])) : (((/* implicit */int) (signed char)64))))) ? ((~(((/* implicit */int) arr_3 [(signed char)6] [i_4 + 1] [i_10])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)111)) > (((((/* implicit */int) arr_9 [(signed char)8])) - (((/* implicit */int) var_2))))))))))));
            }
            for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                var_28 -= var_7;
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)33)))))));
                var_30 = max(((signed char)44), (min(((signed char)124), ((signed char)-36))));
            }
        }
        for (signed char i_14 = 2; i_14 < 8; i_14 += 1) 
        {
            var_31 = min((((signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_13 [i_0] [i_14]))))), (arr_14 [i_0] [i_14]));
            var_32 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0 - 3] [i_0] [i_0 - 3])) >= (((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (signed char)-111))))));
        }
    }
    var_33 &= ((/* implicit */signed char) max(((~(((/* implicit */int) var_9)))), (min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)105)) && (((/* implicit */_Bool) (signed char)92))))), (((((/* implicit */int) var_4)) / (((/* implicit */int) var_5))))))));
}
