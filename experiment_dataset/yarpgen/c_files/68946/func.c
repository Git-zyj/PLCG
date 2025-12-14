/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68946
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */int) arr_1 [i_1] [i_1])) | (((/* implicit */int) (unsigned char)26))))));
                            arr_10 [(short)3] [(unsigned char)8] [(unsigned char)3] [i_2] [(short)9] [(signed char)10] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)32))));
                            arr_11 [i_3] = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) arr_7 [(unsigned char)4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)17549))))))));
                            arr_12 [(unsigned char)1] [i_3] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */int) arr_2 [(unsigned char)0])) > (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)17), (((/* implicit */unsigned char) arr_1 [(unsigned char)0] [(short)4]))))) != (((((/* implicit */int) arr_1 [i_0] [i_1])) / (((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (short)17547)) : (((/* implicit */int) var_16)))))) == (((/* implicit */int) var_1))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (unsigned char)16)))), (((/* implicit */int) arr_3 [i_0] [(signed char)1] [i_0]))));
                                arr_24 [i_6] [i_5] [i_4] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_1 [i_4] [i_4])) / (((/* implicit */int) arr_3 [(signed char)0] [i_5] [i_0])))))) : (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned char)230))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((min(((-(((/* implicit */int) var_6)))), (((((/* implicit */int) var_6)) | (((/* implicit */int) var_12)))))), (((/* implicit */int) ((unsigned char) var_5)))));
    var_20 = var_12;
}
