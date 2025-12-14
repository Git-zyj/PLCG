/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7621
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)57344)))))))) >= (((/* implicit */int) var_4))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_3 + 1] [14ULL] [i_0] [i_0 + 1] [14ULL])) / (arr_9 [i_3 + 2] [i_3] [i_3 + 1] [i_0 - 1] [(unsigned char)10]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 3])))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((arr_4 [i_3] [i_2] [i_0]) >= (((/* implicit */int) ((signed char) var_3))))) ? (((/* implicit */int) var_6)) : (arr_4 [i_4] [i_0] [i_0])));
                            var_21 += ((/* implicit */unsigned long long int) var_7);
                        }
                    }
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) max(((+(var_3))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) var_1)) : (8117038846350425476ULL)))));
                }
            } 
        } 
    } 
    var_22 = (~(((/* implicit */int) ((10329705227359126165ULL) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)121)))))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 1) 
    {
        for (unsigned char i_6 = 4; i_6 < 15; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_6 + 1]))))) ? (((/* implicit */int) min((var_2), (arr_26 [i_5 - 3] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_6 - 4])))) : (((/* implicit */int) arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 3] [i_6 - 1]))));
                                var_24 = (~(((((/* implicit */_Bool) var_16)) ? (var_14) : (min((var_9), (((/* implicit */unsigned long long int) arr_6 [i_7] [i_7])))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) >= ((-(((((/* implicit */_Bool) arr_24 [i_7] [i_6 - 1] [i_6] [i_5])) ? (((/* implicit */int) arr_18 [i_6] [i_5])) : (arr_15 [i_7] [i_5])))))));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */unsigned long long int) var_8);
}
