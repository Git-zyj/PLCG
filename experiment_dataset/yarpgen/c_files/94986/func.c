/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94986
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(short)4] [(unsigned short)15]))))))))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))))))))));
                                arr_15 [i_0] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (~(var_2))))))));
                                var_22 = ((/* implicit */signed char) (+((~((+(((/* implicit */int) (unsigned char)1))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_6] [15ULL] [i_2 - 1] [i_1 + 1] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) (short)15))))));
                                arr_22 [i_2 - 2] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_14 [i_0] [i_1] [i_2 - 2] [i_2] [i_5] [i_6])))))))));
                                arr_23 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (+(var_18))))))));
                                var_23 = ((/* implicit */short) (-((+((+(var_19)))))));
                                arr_24 [i_6] [(signed char)12] [i_0] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8377)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */signed char) (-((~((~(((/* implicit */int) (unsigned short)8377))))))));
    /* LoopNest 3 */
    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_33 [i_7 + 2] [i_8] [i_7 + 2] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_9]))))))))));
                    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)21)))))))));
                    var_26 = ((/* implicit */short) (+((~(19ULL)))));
                    var_27 = ((/* implicit */_Bool) (~((-((+(arr_13 [i_7 + 3] [i_7 + 3] [i_8] [i_9] [i_9])))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) (-((~(0)))));
                                arr_38 [i_7 + 2] [i_8] [i_9] [i_8] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)23)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_12 = 2; i_12 < 14; i_12 += 2) 
    {
        for (int i_13 = 1; i_13 < 14; i_13 += 2) 
        {
            {
                var_29 = ((/* implicit */short) (-((+((+(((/* implicit */int) (short)32762))))))));
                arr_44 [i_12] [i_12] = ((/* implicit */_Bool) (-((+((+(((/* implicit */int) var_0))))))));
            }
        } 
    } 
}
