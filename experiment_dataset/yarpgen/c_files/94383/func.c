/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94383
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_8 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((+(arr_2 [i_0] [i_0]))), (((/* implicit */long long int) (short)22051)))))));
                arr_9 [9U] [i_1] = ((/* implicit */unsigned long long int) (-(max((-929367758112924981LL), (((/* implicit */long long int) (short)-17020))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_13 [(unsigned char)4] [(unsigned char)4] [(signed char)2] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (unsigned short)0))))) : ((-(((/* implicit */int) (short)-22052))))));
                    var_18 = ((/* implicit */_Bool) var_4);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            {
                                arr_21 [i_0] [(signed char)1] [i_1] [i_4 - 1] [i_0] = ((max((((/* implicit */unsigned long long int) arr_16 [i_1 + 2] [i_1 + 2] [i_4 - 2] [5])), (15892603917666643917ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))));
                                arr_22 [i_0] [i_1 + 2] [i_3] [i_3] [i_1] = (-(max((var_2), (((/* implicit */long long int) arr_10 [i_1 + 1] [i_4 - 1])))));
                            }
                        } 
                    } 
                    arr_23 [i_1] [i_3] = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)-26776)), (var_6)))))));
                    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) var_15))) + (var_9))), (var_1)));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_27 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (((+(arr_2 [i_0] [i_0]))) ^ (((/* implicit */long long int) max((arr_15 [(unsigned char)11] [(short)3] [i_1] [i_6]), (((/* implicit */unsigned int) arr_26 [i_0] [3] [i_1] [3])))))));
                    arr_28 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 2] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_13)), (var_17)))) || (((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) arr_16 [i_6] [i_1] [i_6] [i_6]))))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                arr_35 [(short)5] [(signed char)1] [i_1] [(short)5] [(short)5] [(short)5] = ((/* implicit */unsigned long long int) var_10);
                                arr_36 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (short)-6676));
                                arr_37 [i_0] [i_1] [(short)13] [i_1] = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                    arr_38 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (unsigned char)49)))))));
                }
                arr_39 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */signed char) ((((unsigned long long int) (unsigned char)131)) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37063)))))))), (((signed char) ((var_4) % (var_3))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_12);
}
