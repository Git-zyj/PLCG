/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91026
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_15 [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16752)) ? (((/* implicit */int) (short)-25472)) : (((/* implicit */int) (signed char)20))));
                            arr_16 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)52308)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)29)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                            arr_17 [i_1] [i_1] [i_1] [i_4] [i_4] [(short)2] = ((/* implicit */unsigned short) var_4);
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)58))))));
                        }
                        arr_19 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_1] [i_2 + 3] [(short)9]);
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1] [i_2] [(_Bool)1] [(_Bool)1] [i_2 - 1])) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1])) : (((/* implicit */int) (unsigned short)44410))));
                    }
                    arr_21 [(short)8] [(short)8] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_1 [i_1 - 1])))));
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
                }
                arr_23 [i_1] |= ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_5 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_25 [i_5] [i_5 - 2]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_25 [i_5] [i_5 - 1])) : (var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5])))))));
        arr_27 [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)10304);
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                arr_42 [i_5 - 2] [i_6] [i_9] [i_7] [i_7] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)0))))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (unsigned short)12411))))));
                                arr_43 [(_Bool)1] [i_6] [i_6] [i_6] [i_6] [i_5] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8])) == (((/* implicit */int) ((signed char) (unsigned short)65292)))));
                                arr_44 [i_5] [i_9] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] = ((/* implicit */signed char) arr_40 [i_5] [i_9]);
                                arr_45 [i_5] [(unsigned short)6] [i_5] [i_7] [i_7] [(unsigned short)3] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_38 [(_Bool)1] [i_7 - 1] [i_5 - 1] [i_7 - 1] [i_8 - 1])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) 0)))));
                            }
                        } 
                    } 
                    arr_46 [i_5 - 1] [(unsigned char)8] [(unsigned short)20] [(unsigned short)20] = ((/* implicit */short) (!(((((/* implicit */_Bool) (signed char)-57)) && (((/* implicit */_Bool) var_8))))));
                }
            } 
        } 
    }
    var_12 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_8)))))) & (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_7)) + (74))))) : (((((/* implicit */int) var_5)) & (((/* implicit */int) var_0))))))));
}
