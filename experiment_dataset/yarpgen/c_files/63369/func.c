/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63369
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)62824)) ? (((/* implicit */int) ((short) (signed char)127))) : (((/* implicit */int) (signed char)7))));
    var_19 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [(short)20] [i_1] [(signed char)2]))));
                arr_6 [i_0] [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (short)18339))))) ? (((/* implicit */int) (signed char)8)) : (((((/* implicit */_Bool) var_12)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned short)4096))))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-104)) + (2147483647))) >> (((((/* implicit */int) var_0)) - (28513)))))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) var_0)))))) + (2147483647))) << (((((/* implicit */int) ((signed char) ((unsigned short) (signed char)32)))) - (32)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-30152)) ? (((((/* implicit */int) (short)2222)) ^ (((/* implicit */int) (short)-1492)))) : (((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_17 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [(unsigned short)6] [i_4] [i_4]))))) ? (((/* implicit */int) (unsigned short)2103)) : (((/* implicit */int) (_Bool)1))))));
                    arr_18 [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32018)) ^ (((/* implicit */int) (signed char)-33))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */signed char) (-((((-(((/* implicit */int) (short)11248)))) - (((/* implicit */int) var_6))))));
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_24 [(short)21] [(short)21] [i_1] [i_1 + 1] [i_6] = ((/* implicit */signed char) (_Bool)1);
                        arr_25 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_9);
                        var_23 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1 + 1]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            arr_29 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_1] [i_1] [i_1 + 1] [i_1])) >= (((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
                            var_24 = ((/* implicit */unsigned short) (signed char)-25);
                            var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-9563))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            arr_32 [(unsigned short)20] [i_1] [i_5] [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)20909))));
                            arr_33 [i_0] [i_1 + 3] [i_1] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                    }
                    var_26 = ((/* implicit */signed char) min((((((/* implicit */int) arr_21 [i_1 + 3] [(unsigned short)0] [i_1 + 3] [i_5])) / (((/* implicit */int) arr_21 [i_1 + 2] [i_5] [i_5] [i_1 + 1])))), ((((-(((/* implicit */int) (short)-5034)))) * (((/* implicit */int) (_Bool)0))))));
                    arr_34 [i_0] [i_1] [i_1 + 1] = ((/* implicit */short) ((max(((~(((/* implicit */int) (signed char)36)))), (((/* implicit */int) arr_19 [i_0] [i_0] [i_1 + 2] [i_5])))) != (((/* implicit */int) max((max(((unsigned short)38753), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) var_14)))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_1)) ? (503296541U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))))))));
}
