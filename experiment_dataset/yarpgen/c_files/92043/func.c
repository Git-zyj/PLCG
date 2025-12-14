/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92043
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_1)) / ((-2147483647 - 1)))) & (((/* implicit */int) var_10)))) ^ ((~(max((arr_1 [i_0]), (((/* implicit */int) var_12))))))));
                    var_15 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (((/* implicit */int) (unsigned char)98)))) * (max(((-2147483647 - 1)), (((/* implicit */int) var_11)))))) & ((+(((((/* implicit */int) (unsigned char)60)) >> (((2147483645) - (2147483619)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                        arr_12 [i_1] = ((/* implicit */int) ((unsigned char) (unsigned char)128));
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)158)) >= ((-(((/* implicit */int) (unsigned char)26))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_17 *= var_3;
                            var_18 = ((/* implicit */unsigned char) ((-1731838422) == (-1519213950)));
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = (~(((/* implicit */int) var_14)));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((unsigned char) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned char)81)) - (79)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            var_20 = ((/* implicit */int) (unsigned char)255);
                            arr_23 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)173)) | (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned char)225)))))));
                            var_21 = ((((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_1])) != (((/* implicit */int) var_8)))) ? ((+(((/* implicit */int) var_12)))) : ((+(((/* implicit */int) (unsigned char)13)))));
                        }
                        var_22 &= (~(((int) arr_15 [i_0] [i_0])));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 13; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) var_6)) % (var_9))) >= (((2079585953) + (((/* implicit */int) (unsigned char)72))))))) >= (((/* implicit */int) var_8))));
                        /* LoopSeq 3 */
                        for (int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) (unsigned char)32);
                            var_24 = arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_4 [i_0])), ((~(var_9)))));
                            arr_39 [i_0] = ((/* implicit */unsigned char) ((int) ((arr_6 [i_0]) % (arr_35 [i_0] [i_0] [i_8 + 1] [i_9] [i_11]))));
                            var_25 = var_5;
                        }
                        for (int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) var_10))))) ^ (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_8])) == (((((/* implicit */_Bool) ((int) 2147483647))) ? (((arr_28 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            var_28 = arr_5 [i_0] [i_0] [i_0];
                            var_29 = arr_45 [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_30 = ((/* implicit */int) ((unsigned char) (unsigned char)127));
                        }
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_1))))))));
    var_32 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_4))))) ^ (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))), (((((/* implicit */int) var_5)) | (2147483645)))))));
    var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) >= (-1162289085)));
}
