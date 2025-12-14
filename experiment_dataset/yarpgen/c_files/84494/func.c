/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84494
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) (((~(((/* implicit */int) arr_3 [i_0 + 1] [i_1])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [23U] [i_1] [i_1])) && (((/* implicit */_Bool) var_9)))))))) : (((/* implicit */int) ((arr_2 [i_0 + 1]) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0])) / (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_0 + 1] [(signed char)10] [i_0] [i_0 + 1]))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_2] [i_0 - 1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        {
                            arr_18 [i_3] [i_4] [i_4 + 2] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) arr_3 [i_5] [i_4])) | (((/* implicit */int) arr_17 [i_3]))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_7 = 3; i_7 < 19; i_7 += 1) 
                            {
                                arr_23 [i_3] = arr_5 [i_5] [i_6 + 1] [i_6 + 1] [i_6];
                                var_20 = ((/* implicit */long long int) arr_4 [i_3] [(signed char)2] [i_7 - 2]);
                            }
                            /* vectorizable */
                            for (int i_8 = 4; i_8 < 17; i_8 += 2) 
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_5))));
                                var_22 ^= ((long long int) (-(var_7)));
                            }
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2721335895U)))) ? (((/* implicit */int) ((short) var_6))) : (((arr_11 [i_3] [i_5] [i_3]) << (((((/* implicit */int) arr_21 [i_3] [i_4] [i_5])) - (37)))))))) ? (arr_14 [i_3] [1LL] [i_5]) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_3])))))))));
                        }
                    } 
                } 
                var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))) : (var_7)))));
                arr_27 [i_3] = ((/* implicit */unsigned int) (~(max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_10);
    var_26 = ((/* implicit */unsigned char) var_2);
}
