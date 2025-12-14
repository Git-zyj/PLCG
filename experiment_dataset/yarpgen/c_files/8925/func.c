/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8925
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 210912913)) ? (var_8) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)31950))))) : (((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_2 - 2])) ? ((+(((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 2])))))))));
                    var_14 = ((/* implicit */short) arr_1 [i_2 - 1] [(unsigned char)4]);
                    var_15 = ((/* implicit */short) min((var_15), (min((((/* implicit */short) ((((/* implicit */_Bool) max((var_3), (arr_3 [i_0])))) || (((/* implicit */_Bool) arr_9 [i_0] [(signed char)1] [i_2] [i_2 + 1]))))), (arr_5 [i_0])))));
                    arr_10 [i_0] [i_1] [(unsigned short)3] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) (short)24799)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1])))) < (((((/* implicit */_Bool) 432127784)) ? (-432127781) : (((/* implicit */int) (short)-3026))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_11))));
                }
                for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((/* implicit */int) arr_9 [i_3] [i_3] [i_1] [i_0])))))));
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) (unsigned short)45286)))));
                    var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))));
                    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)45))) ? (((/* implicit */int) arr_8 [i_3])) : (max(((+(-210912913))), (((int) var_2))))));
                }
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_20 |= ((/* implicit */short) ((unsigned char) ((int) (unsigned char)230)));
                    arr_18 [i_4] [i_1] = ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) ((signed char) arr_15 [i_4] [i_1] [i_1]))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_5 = 4; i_5 < 20; i_5 += 4) 
                {
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */short) (((((+(((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) arr_16 [i_5] [i_5 + 3] [i_5 - 3])))) - (((/* implicit */int) (signed char)76))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        for (short i_7 = 4; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_27 [i_6] [i_1] [(short)13] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_0]);
                                arr_28 [i_0] [i_6] [(signed char)5] [i_0] [i_5 - 4] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_5 - 3] [i_5 - 4] [i_5 - 1])) ? (((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 - 3] [i_5 - 3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)32768)))) : (((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5 + 3] [i_5 - 1])) ? (((/* implicit */int) arr_26 [i_6 + 1] [i_6] [i_5 + 1] [i_6] [i_5 + 2])) : (((/* implicit */int) arr_26 [i_6 + 1] [i_6] [i_5 - 2] [i_6] [i_5 - 3]))))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) (signed char)126)) : (-466905025))) : (((((/* implicit */_Bool) arr_20 [2] [i_6 - 1] [i_5 + 1])) ? (((/* implicit */int) arr_20 [i_0] [i_6 + 1] [i_5])) : (((/* implicit */int) arr_20 [i_0] [i_6 + 4] [i_5])))));
                                var_22 = ((/* implicit */unsigned short) (+(((int) arr_24 [i_1] [i_5 - 2] [i_6]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (signed char i_9 = 4; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-38)), (arr_31 [i_0] [i_1] [i_8] [i_0])))) ? (((-951725098) | (((/* implicit */int) arr_4 [i_0] [i_1] [i_8])))) : (((((/* implicit */_Bool) arr_17 [(unsigned char)17] [(unsigned char)17] [i_5])) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_0)))))) ? (((/* implicit */int) min((((/* implicit */short) arr_9 [i_9 + 1] [i_1] [i_5 - 3] [i_8])), ((short)24788)))) : ((+(((/* implicit */int) arr_30 [i_9 - 1] [i_9 + 2] [(unsigned char)5] [i_9 + 1])))));
                                var_24 -= ((/* implicit */short) ((unsigned short) ((signed char) arr_19 [i_9] [i_9] [i_9 - 4] [i_5 + 3])));
                                arr_34 [i_0] [i_5 - 1] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_5 - 2] [i_9 + 1] [i_9 + 1] [i_9 - 1])) | (((/* implicit */int) (short)(-32767 - 1)))))) ? ((~(((/* implicit */int) arr_11 [i_1])))) : (arr_14 [i_9 - 2] [i_0]));
                                var_25 = ((/* implicit */short) (((~(((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned char)19)))))) | (((((/* implicit */_Bool) arr_2 [i_5 + 1])) ? (((/* implicit */int) arr_2 [i_5 - 4])) : (((/* implicit */int) arr_30 [i_0] [i_9 - 4] [i_5 - 2] [(unsigned short)1]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
