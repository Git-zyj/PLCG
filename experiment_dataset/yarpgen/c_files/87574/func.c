/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87574
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
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_8)))))))) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32779)))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (var_4)));
    var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) min((((unsigned short) var_7)), (var_15))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)9] = ((/* implicit */unsigned char) ((unsigned short) max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)53371)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) arr_2 [i_0])))))));
                arr_6 [i_0] [i_1] &= ((/* implicit */signed char) arr_4 [i_0]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_0])) - (((/* implicit */int) var_15))))) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
                    var_23 = ((((/* implicit */int) arr_3 [i_0] [(unsigned short)0] [i_2])) == (((/* implicit */int) (unsigned char)235)));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (unsigned short)224))));
                }
                for (signed char i_3 = 4; i_3 < 23; i_3 += 4) 
                {
                    arr_13 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) (unsigned char)216);
                    arr_14 [i_0] [20] [i_3 - 1] [i_0] = (~(((/* implicit */int) min((arr_7 [i_0] [i_1] [i_3 + 1]), (arr_7 [i_0] [i_1] [i_1])))));
                    var_25 += ((/* implicit */unsigned short) max(((-(((arr_11 [(_Bool)1] [i_1] [i_3] [i_0]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)128)))))), (((/* implicit */int) arr_8 [i_0] [(unsigned short)2] [i_0]))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [(unsigned short)0]))));
                }
                for (unsigned short i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)12)) & (((/* implicit */int) arr_8 [i_0] [i_1] [(short)3]))))))) || (((/* implicit */_Bool) max((max((-352079468), (((/* implicit */int) arr_11 [i_4 - 1] [i_1] [i_1] [i_0])))), (((/* implicit */int) var_1))))))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)65365)) >> (((1706029082) - (1706029059))))), (((/* implicit */int) (unsigned char)170)))))));
                }
                arr_17 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (min((((/* implicit */unsigned short) (signed char)126)), ((unsigned short)112)))))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1] [(unsigned char)15])) >= (((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_29 &= ((/* implicit */_Bool) (unsigned char)33);
}
