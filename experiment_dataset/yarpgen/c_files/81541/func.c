/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81541
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
    var_13 = var_7;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) var_7);
                    var_15 *= ((/* implicit */int) ((arr_6 [i_0] [i_2 - 2] [(_Bool)1] [i_1 + 2]) > (((/* implicit */int) (unsigned char)0))));
                    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)7))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) (unsigned char)0))))));
        arr_9 [(unsigned char)11] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)231))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */unsigned int) -1232973477)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_2 [i_3 - 1] [8])))));
            var_18 = ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((-2147483647 - 1)));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_3] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) << (((((/* implicit */int) (signed char)126)) - (126)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3 - 1] [i_5]))))) ? (((/* implicit */int) arr_17 [(unsigned char)4])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned char) arr_11 [i_3] [i_3 - 1])))));
            var_19 = ((/* implicit */int) (_Bool)1);
            var_20 = ((/* implicit */signed char) max((((unsigned int) ((((/* implicit */int) var_6)) > (var_8)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 32736U)) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) arr_5 [i_3] [(signed char)6] [7ULL] [i_5])) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (unsigned char)251)))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_3 - 1] [i_3] [i_6] = ((((/* implicit */int) var_12)) < (((max((arr_22 [(unsigned char)3] [9ULL]), (arr_11 [i_3] [1]))) ? ((~(((/* implicit */int) arr_10 [(signed char)6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -345148262))))))));
            var_21 = min((var_9), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3]))) * (arr_21 [i_6]))))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            arr_28 [i_3 - 1] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_3 - 1] [i_3 - 1])) * (var_5)));
            arr_29 [i_7] [(unsigned char)4] [(unsigned char)5] = ((/* implicit */unsigned long long int) ((arr_23 [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_23 [i_7] [i_3 - 1]))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-82)))))));
            /* LoopSeq 3 */
            for (signed char i_8 = 3; i_8 < 10; i_8 += 2) 
            {
                arr_33 [(unsigned char)7] [i_7] = ((/* implicit */unsigned char) ((int) 3U));
                var_23 *= ((/* implicit */_Bool) ((int) (unsigned char)63));
                var_24 *= ((/* implicit */_Bool) ((unsigned char) 783625714));
                arr_34 [(unsigned char)3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_7])) != (((/* implicit */int) arr_14 [i_3] [9ULL]))))) + (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_9 = 4; i_9 < 9; i_9 += 4) 
            {
                arr_37 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (_Bool)1))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 32736U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)54)) && (((/* implicit */_Bool) arr_5 [i_3] [i_3] [(_Bool)1] [i_3]))))) : (arr_35 [i_9])));
            }
            for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                var_26 = ((/* implicit */signed char) (+(((/* implicit */int) ((var_3) <= (((/* implicit */int) var_2)))))));
                arr_42 [(unsigned char)8] [i_3 - 1] [0ULL] [(_Bool)1] = (+(arr_41 [i_3] [i_10] [i_10]));
                var_27 = ((/* implicit */int) var_9);
                arr_43 [i_3] [i_7] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                var_28 -= ((unsigned long long int) ((signed char) arr_23 [(_Bool)1] [(unsigned char)11]));
            }
            var_29 ^= ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_3 - 1])) : (((/* implicit */int) var_10)));
        }
        var_30 = (_Bool)0;
    }
    for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 2) 
    {
        arr_47 [i_11 + 2] [i_11 + 2] = ((/* implicit */unsigned char) (+(min((arr_45 [i_11 - 1]), (arr_45 [i_11 + 2])))));
        var_31 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 2139239998)) ? (((/* implicit */int) (_Bool)1)) : (7))));
    }
}
