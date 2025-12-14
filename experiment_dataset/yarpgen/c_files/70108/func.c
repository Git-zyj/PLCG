/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70108
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) arr_3 [i_1] [i_0])), (min((arr_5 [i_1]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]))))))));
                var_14 = ((/* implicit */unsigned char) arr_2 [i_1] [i_0] [i_0]);
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned char)7])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 18; i_4 += 1) 
            {
                {
                    var_16 *= ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_17 = arr_9 [i_3] [i_3];
                        var_18 *= ((/* implicit */unsigned short) var_2);
                        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) arr_7 [i_3]);
                        var_19 = var_11;
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)19059)) % (((/* implicit */int) (signed char)-29)))), (((/* implicit */int) max(((unsigned short)46471), (((/* implicit */unsigned short) (signed char)-57)))))))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_3] [i_4 + 1] [i_3] [i_3] = ((/* implicit */unsigned char) var_6);
                        arr_21 [i_3] [i_4] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (~(min((min((var_6), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) max((var_12), (var_7))))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) max((arr_15 [i_4] [i_4 + 1] [i_4] [i_4 - 1]), (var_9)))))))));
                        arr_22 [i_3] [i_4] [i_3] [i_2] [i_3] = ((/* implicit */signed char) arr_11 [i_3] [i_3]);
                        var_22 -= ((/* implicit */signed char) min((((((/* implicit */int) var_2)) ^ (((/* implicit */int) max(((unsigned short)46469), ((unsigned short)46476)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1])) && (((/* implicit */_Bool) var_12)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_6))));
                        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)34))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 3])) + (((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 2]))));
                        arr_26 [i_2] [i_3] [6U] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_7])) || (((/* implicit */_Bool) arr_19 [i_2] [i_3]))))) / (((/* implicit */int) var_8))));
                    }
                    var_26 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_11)) || ((!(((/* implicit */_Bool) (signed char)-1))))))));
                    var_27 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_7)), ((~(var_6)))));
                }
            } 
        } 
    } 
}
