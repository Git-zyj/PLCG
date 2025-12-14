/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72066
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
    var_15 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (var_5)));
                        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1] [i_3]))) | (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_4] [(signed char)17])) ^ (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [(unsigned char)7]))))) || (((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0])) < (((/* implicit */int) arr_5 [i_0] [i_2])))))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_4] [i_4 - 1])) > (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 24; i_5 += 1) 
                    {
                        arr_14 [i_2] [i_0] = ((/* implicit */_Bool) arr_9 [i_5 - 1] [i_0] [i_0] [i_0]);
                        var_20 = ((/* implicit */unsigned char) var_8);
                        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)47)) | (((/* implicit */int) (signed char)-124))));
                        arr_16 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (!(var_14)));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_2] [i_1]);
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) arr_13 [i_0]);
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)-23)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_9))))))));
                            var_23 |= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] = arr_3 [i_0] [i_1] [i_0];
                            arr_26 [i_0] [i_0] [i_0] [(unsigned char)19] [i_0] = arr_3 [i_0] [i_1] [i_0];
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) max((arr_13 [i_1]), (((/* implicit */unsigned int) arr_11 [(signed char)2] [i_1] [i_1] [i_1])))))) + (((/* implicit */int) ((signed char) ((_Bool) var_6))))));
                            var_25 = ((/* implicit */unsigned short) arr_8 [(unsigned char)9] [(unsigned char)9] [i_2] [i_8]);
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) - ((~(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_9] = ((unsigned short) arr_13 [i_0]);
                            arr_30 [i_9] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        }
                        for (unsigned int i_10 = 3; i_10 < 23; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_14);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0]))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [(signed char)3] [(_Bool)1] [(signed char)3] [i_0])) | (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    var_30 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_10)), (((unsigned int) var_0)))), (((/* implicit */unsigned int) var_2))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_11))));
}
