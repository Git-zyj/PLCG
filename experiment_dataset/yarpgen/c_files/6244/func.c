/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6244
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
    var_14 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) ^ (((/* implicit */int) ((unsigned char) ((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_15 = ((unsigned short) min((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) arr_0 [i_3 - 1] [i_0]))));
                            arr_9 [i_0] [i_1] [i_1 - 2] [i_0] [(unsigned short)20] [i_3] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2]);
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (unsigned short)1074))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */int) arr_7 [i_1 - 2])) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) arr_4 [i_4 + 1]);
                arr_15 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((arr_4 [i_4 + 3]) ? (((/* implicit */int) arr_4 [i_4 + 2])) : (((/* implicit */int) arr_4 [i_4 + 1]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_4 - 1])), ((unsigned short)16383)))));
                arr_16 [i_4] [(short)3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)15759)) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_12 [i_5 - 1] [i_5 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) -7)))))));
                var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_12 [i_4] [i_4])), ((unsigned char)2)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (int i_10 = 2; i_10 < 24; i_10 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) arr_17 [i_6])))) + (((((/* implicit */int) (signed char)-83)) / (((/* implicit */int) (unsigned char)241)))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_18 [i_9] [i_8]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_22 [i_6] [i_7])) : (((/* implicit */int) (unsigned char)193))))))))));
                                var_21 |= ((/* implicit */unsigned int) ((unsigned short) min(((!(((/* implicit */_Bool) (unsigned char)215)))), (((((/* implicit */_Bool) (unsigned char)176)) || (((/* implicit */_Bool) arr_20 [i_7] [i_8])))))));
                                arr_29 [i_7] [i_7] = (i_7 % 2 == 0) ? (((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)16383)) ^ (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_20 [i_10 + 1] [i_10 - 2])), (((((arr_28 [i_6] [i_6] [i_6] [i_6] [i_7]) + (2147483647))) << (((((/* implicit */int) (signed char)40)) - (40)))))))))) : (((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)16383)) ^ (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_20 [i_10 + 1] [i_10 - 2])), (((((((arr_28 [i_6] [i_6] [i_6] [i_6] [i_7]) - (2147483647))) + (2147483647))) << (((((/* implicit */int) (signed char)40)) - (40))))))))));
                            }
                        } 
                    } 
                    var_22 = ((min((max((((/* implicit */int) (signed char)58)), (255))), (((/* implicit */int) ((_Bool) arr_21 [i_6]))))) % (((/* implicit */int) ((short) (signed char)-109))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                arr_34 [i_12] [i_11] [i_7] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */short) (_Bool)1);
                                var_23 = ((/* implicit */int) min((((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_17 [i_8])) == (((/* implicit */int) (_Bool)1)))))), (((unsigned short) arr_30 [0U] [(unsigned short)23] [i_7] [i_11] [i_12] [i_12]))));
                                arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_12] [i_6])) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((signed char) (unsigned short)65514))) : (((/* implicit */int) (!((_Bool)1)))))) < (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_6] [i_7] [i_7] [i_7] [i_12] [i_7])) && (((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_7] [i_11] [i_7]))))) : (((((/* implicit */_Bool) arr_25 [i_6] [i_7] [i_11] [i_12])) ? (((/* implicit */int) arr_19 [(unsigned short)12] [i_8] [(unsigned short)12])) : (((/* implicit */int) (unsigned char)125))))))));
                                arr_36 [i_6] |= ((unsigned char) max((((unsigned short) (unsigned char)168)), (((/* implicit */unsigned short) ((((/* implicit */int) (short)32744)) >= (arr_26 [i_11] [i_11] [i_11] [i_12]))))));
                                arr_37 [i_7] [i_6] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned int) arr_21 [i_7])), (4093556688U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
