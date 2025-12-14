/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60438
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
    var_12 = ((/* implicit */unsigned char) var_10);
    var_13 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) | ((~(var_0))))) << (((((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) var_10)))) - (87LL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_0]);
                    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2])))))) ? (((/* implicit */int) arr_1 [i_0])) : (((int) arr_4 [i_0]))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_4 [i_2]))))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_4 [6LL])) > (((/* implicit */int) arr_1 [i_1]))))) >> (((arr_2 [i_2] [i_2]) - (4814529352009285019LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 10199083288323094429ULL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned short) 2147483647);
                                arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) << (((((/* implicit */int) arr_21 [i_5])) - (65)))));
                                arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_4 [i_5]);
                                var_16 += ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_11)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) arr_23 [i_3] [i_5] [i_5] [i_7])) ? (((/* implicit */int) arr_3 [i_6] [i_3])) : (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    arr_27 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_11 [i_3])))), (((arr_11 [i_3]) <= (arr_11 [i_5])))));
                    arr_28 [i_3] [i_4] = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    var_17 = var_4;
}
