/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96306
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) (+(min((var_12), (((/* implicit */unsigned int) (unsigned short)4574))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) min((((int) (short)24744)), (((/* implicit */int) arr_6 [i_2] [i_0] [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)5] [i_0] = ((/* implicit */long long int) arr_14 [i_0]);
                                arr_18 [i_0] [i_3 + 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_3] [i_4]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_2))));
                                arr_25 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) arr_6 [i_2 - 3] [i_2] [i_2] [i_2 + 1])), (min((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2 + 1] [i_5])), (arr_7 [i_0] [i_0] [i_0]))))));
                                arr_26 [i_5] [i_5] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)153);
                                var_17 = ((/* implicit */unsigned short) var_12);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        arr_30 [i_7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (short)-24714))));
                        arr_31 [i_0] = var_5;
                    }
                }
                for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_18 = ((/* implicit */short) ((unsigned int) arr_0 [i_0] [i_8]));
                    arr_35 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */_Bool) ((short) var_7));
                }
                arr_36 [i_0] [i_0] [i_0] = ((unsigned long long int) (unsigned char)153);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (+(var_1)));
    var_20 = ((signed char) (short)-24745);
    var_21 = ((/* implicit */int) var_2);
}
