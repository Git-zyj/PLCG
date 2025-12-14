/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80137
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
    var_20 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0])) : ((~(((/* implicit */int) var_7))))));
            var_21 *= (signed char)-22;
        }
        for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
            arr_10 [i_0] [i_0] [i_0] = arr_2 [i_0] [i_2];
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) var_18)))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        arr_18 [i_0] [(_Bool)1] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_3] [i_5])) * (((/* implicit */int) arr_4 [i_0] [i_3] [i_3]))));
                        arr_19 [i_3] |= ((unsigned short) (signed char)24);
                        arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_17 [i_0] [i_4 - 1] [i_4] [i_0] [i_5] [i_5]))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_25 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_4 - 1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_4 - 1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_4 - 1] [i_0]))));
                            var_23 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)143));
                            arr_26 [i_0] [i_3] [i_0] [i_6] [i_0] [i_0] = arr_12 [i_3] [i_0];
                        }
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_24 -= ((/* implicit */signed char) arr_28 [i_7] [i_5] [i_4 - 1] [i_4 - 1] [i_3] [i_3] [i_0]);
                            var_25 = ((/* implicit */unsigned char) ((unsigned short) var_5));
                            arr_31 [i_0] [i_3] [i_0] [i_5] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_16 [i_7] [i_3] [i_7] [i_5])) + (((/* implicit */int) var_6))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((arr_13 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_9 + 1] [i_3] [i_8] [i_3] [i_3] [i_0] [i_3])))))));
                        var_28 *= ((_Bool) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned char)31))));
                        arr_37 [i_3] [i_3] [i_8] [i_8] &= ((/* implicit */_Bool) ((signed char) arr_22 [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)18165)) ? (((/* implicit */int) arr_36 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_3])))))));
                    }
                } 
            } 
        }
        var_30 += ((/* implicit */unsigned short) var_0);
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_31 += ((/* implicit */_Bool) ((arr_29 [i_0] [(unsigned char)2] [i_0] [i_0] [i_10] [i_10]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_0] [8ULL] [i_0] [i_0] [8ULL] [i_0]))));
            arr_42 [i_0] [i_10] = ((/* implicit */unsigned char) (!(arr_39 [i_0])));
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((signed char) var_2)))));
                arr_46 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
                var_33 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_16))) <= (((/* implicit */int) var_3))));
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_34 *= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_35 [(_Bool)1] [i_10] [(unsigned short)2] [(signed char)6] [i_10])))));
                var_35 |= ((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (1131407780034846300ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                arr_49 [i_0] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_7))))));
            }
        }
    }
}
