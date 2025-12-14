/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89410
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((_Bool) arr_4 [i_0] [i_1] [i_1] [i_2]));
                    var_14 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_0])))), ((-(((arr_6 [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0]))))))));
                    var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_2])) | (((/* implicit */int) (short)-1024)))) & (((/* implicit */int) ((short) arr_5 [i_2])))));
                    var_16 = ((/* implicit */short) max((((((arr_3 [i_0] [(_Bool)1] [i_2]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_2)))) % (((/* implicit */int) (((_Bool)1) || ((_Bool)0)))))), (((/* implicit */int) max((arr_6 [i_0]), (((_Bool) var_1)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((_Bool) ((signed char) (-(((/* implicit */int) var_3))))));
        arr_9 [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */int) (short)-29768)) % (((/* implicit */int) max((((/* implicit */short) arr_3 [i_3] [(short)4] [(signed char)10])), ((short)-32423)))))) > (((/* implicit */int) arr_1 [i_3]))));
        var_18 = min((((signed char) arr_4 [i_3] [i_3] [i_3] [i_3])), (((/* implicit */signed char) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (signed char)15))))));
        var_19 |= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-1850)) : (((/* implicit */int) (short)-17053))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 4; i_5 < 7; i_5 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32422)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (short)32420)))), (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1]))))) ? (((/* implicit */int) arr_11 [i_3])) : (((((/* implicit */int) (signed char)76)) / (((/* implicit */int) (short)-32423))))));
                        arr_21 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)9)) > (((/* implicit */int) (_Bool)0))));
                        arr_22 [i_4] [i_3] [i_6] = arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1];
                    }
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 2; i_8 < 8; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32764)))))));
                            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((short) (signed char)6)), (((short) var_10)))))));
                        }
                        arr_30 [i_3] [(_Bool)1] = ((/* implicit */_Bool) arr_8 [i_3] [(short)5]);
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_35 [(signed char)9] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_33 [(_Bool)1] [i_4])) - (((/* implicit */int) (short)17115))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_10] [i_5 - 1] [i_4 - 1] [i_3])))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [(short)5] [i_3] [i_3] [i_3])) * (((/* implicit */int) arr_18 [i_3] [(short)4] [(short)1] [i_10]))))) ? (((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (short)32756)))) : (((/* implicit */int) arr_26 [i_10] [i_10] [i_5 + 1] [i_5 - 3] [i_4 - 1] [i_4] [i_4 - 1]))));
                            var_25 = arr_29 [i_3];
                        }
                        for (short i_11 = 2; i_11 < 8; i_11 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_19 [i_4 - 1] [i_5 - 3] [i_5 - 3] [i_11 - 2]))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4 - 1] [i_5 + 3] [i_5 - 2] [i_11 - 2])) && (((/* implicit */_Bool) arr_24 [i_4 - 1] [i_5 - 3] [i_5 - 3] [i_11 + 2]))));
                            var_28 = ((/* implicit */short) max((var_28), (((short) arr_19 [i_3] [i_4 - 1] [i_5] [i_9]))));
                            var_29 = arr_5 [i_3];
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_8))));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((((/* implicit */int) arr_20 [i_4] [i_4 - 1] [i_5 - 3] [i_5 - 4])) < (((/* implicit */int) var_12))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) arr_4 [i_4 - 1] [i_5] [i_9] [i_12]))))) || (((/* implicit */_Bool) ((short) (short)-32423)))));
                        }
                        arr_41 [i_3] [i_3] [i_5 + 1] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_3])) == (((/* implicit */int) arr_25 [i_3]))));
                        arr_42 [i_3] [i_3] [i_3] [(short)4] = ((/* implicit */signed char) arr_40 [(_Bool)1] [(_Bool)1] [i_9] [(short)1] [(short)1]);
                    }
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [i_13])) : (((/* implicit */int) ((_Bool) (signed char)-3))))));
                        arr_47 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max((arr_36 [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */short) arr_39 [i_3] [(short)7] [(short)7] [i_5] [i_13]))))) == (((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))) / (((/* implicit */int) ((signed char) var_12)))));
                    }
                    var_34 = ((/* implicit */signed char) ((short) var_1));
                    var_35 = arr_15 [(short)6] [(short)6];
                }
            } 
        } 
    }
}
