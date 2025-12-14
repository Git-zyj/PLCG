/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65038
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 24; i_3 += 3) 
    {
        for (short i_4 = 4; i_4 < 22; i_4 += 2) 
        {
            {
                arr_10 [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_3]);
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((((/* implicit */_Bool) -1920703324)) && (((/* implicit */_Bool) min((arr_13 [i_5] [i_4 - 4] [i_3]), (arr_13 [23LL] [23LL] [23LL])))))), ((_Bool)0))))));
                        var_18 = ((/* implicit */long long int) min((max((((/* implicit */int) (unsigned char)0)), ((-(((/* implicit */int) arr_16 [i_3] [i_4] [i_4] [(_Bool)1] [i_6] [i_6])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3]))))))))));
                    }
                    var_19 ^= ((/* implicit */int) var_13);
                }
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (long long int i_8 = 1; i_8 < 23; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (signed char)30);
                                var_21 = ((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3] [(_Bool)1] [i_3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
    {
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            {
                arr_30 [i_10] = (!(((_Bool) arr_20 [i_10] [i_11] [i_10])));
                arr_31 [i_10] = ((/* implicit */unsigned char) arr_24 [(short)22]);
                var_22 -= ((/* implicit */short) arr_12 [i_10]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_9))))));
}
