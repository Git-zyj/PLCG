/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9141
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
    var_18 = ((/* implicit */signed char) var_15);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))));
            var_19 = ((/* implicit */signed char) 15007409881870239181ULL);
            var_20 = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) (unsigned char)2))))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_7 [i_2] [i_1 + 1] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) arr_2 [i_2] [i_1] [i_0]);
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 1])) & ((~(((/* implicit */int) (unsigned char)254))))))) || (((/* implicit */_Bool) (short)-29095))));
            }
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_22 = arr_8 [i_0] [i_1 + 2] [i_3];
                var_23 = ((/* implicit */short) (unsigned char)16);
                arr_11 [i_0] [i_3] [i_0] = ((/* implicit */int) ((signed char) (unsigned char)254));
            }
        }
        /* vectorizable */
        for (signed char i_4 = 3; i_4 < 23; i_4 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (unsigned char)2))));
            var_25 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0]);
            var_26 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_4 - 1])) == (arr_5 [i_0 + 1])));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (unsigned char i_7 = 2; i_7 < 23; i_7 += 2) 
                    {
                        {
                            arr_23 [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)244)) - (((/* implicit */int) arr_0 [i_4 - 1] [i_4 - 1]))));
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7 - 1] [i_7 - 2]))));
                            var_28 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)21)) > (((/* implicit */int) (unsigned char)1))));
                        }
                    } 
                } 
            } 
            arr_24 [i_4] = ((/* implicit */signed char) (short)-480);
        }
        arr_25 [i_0] = ((/* implicit */int) (unsigned char)12);
    }
    /* vectorizable */
    for (short i_8 = 3; i_8 < 22; i_8 += 2) 
    {
        arr_28 [i_8 + 1] = ((/* implicit */unsigned char) ((signed char) arr_12 [(signed char)8] [i_8 + 1]));
        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_8 + 1]))));
    }
    for (short i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        var_30 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
        var_31 = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) ((arr_17 [i_9] [(signed char)14]) | (arr_17 [i_9] [18ULL]))))))), (arr_19 [(short)14] [i_9] [i_9] [8ULL] [i_9] [i_9])));
        var_32 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)25))))));
    }
}
