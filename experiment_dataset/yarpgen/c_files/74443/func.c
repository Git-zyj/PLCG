/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74443
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
    var_11 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_2))));
                        arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)-1);
                        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [6U])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8429))) : (var_6))) : ((+(var_7)))));
                        arr_12 [i_0 - 1] [(unsigned char)5] [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1]))));
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_14 -= max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)138)) ? (-3530962723197050347LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117)))))) * (((arr_4 [(unsigned char)0] [i_1] [(unsigned char)4] [i_1]) ? (arr_2 [6LL]) : (((/* implicit */unsigned long long int) var_4)))))));
                        var_15 = min((arr_14 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5]), (((/* implicit */unsigned short) ((unsigned char) arr_10 [i_4] [i_4] [i_1] [i_4]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        for (long long int i_6 = 3; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [(unsigned char)10] [i_0]);
                                var_17 = arr_18 [i_0] [i_0] [i_0] [i_5] [i_6];
                                var_18 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((short)-8429), (((/* implicit */short) (unsigned char)117)))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [(short)4] [i_1] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_8);
}
