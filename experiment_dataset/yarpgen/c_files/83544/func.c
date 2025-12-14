/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83544
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
    var_20 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_13)))));
    var_21 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_0]);
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)14403)) ^ (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? ((~(((/* implicit */int) arr_3 [i_1] [i_0])))) : (max((((/* implicit */int) (unsigned char)223)), (8160)))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_1);
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)8084)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 209949665U))))) : (((/* implicit */int) ((signed char) arr_10 [i_4] [i_0] [i_3] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_3] [i_4]))) : (arr_13 [i_0] [i_2 - 1] [i_4])));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) -8140))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_23 [i_1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_2] [i_5] [i_6]))));
                                arr_24 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1504990634)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned short)57500))));
                            }
                        } 
                    } 
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) + (arr_13 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) var_10)) : (((243083840) - (8139))));
                }
                for (short i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        arr_31 [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) >= (arr_21 [i_7] [i_1] [i_7] [i_8] [i_8 + 1])));
                        var_25 += ((/* implicit */signed char) 9223372036854775807LL);
                    }
                    arr_32 [i_7] = (unsigned char)212;
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (arr_12 [i_0] [i_1] [i_7])))) >= (((/* implicit */int) arr_9 [i_0] [i_7] [i_7] [i_7]))));
                }
                for (short i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        var_27 -= ((/* implicit */_Bool) ((unsigned char) ((arr_21 [i_10] [i_1] [i_0] [i_0] [i_9]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24914))))));
                        var_28 = ((/* implicit */signed char) (unsigned short)24909);
                    }
                    var_29 = ((/* implicit */_Bool) ((((178932032) >= (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) (signed char)61)) : (8133)));
                    arr_39 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), ((~(var_3)))))));
                }
            }
        } 
    } 
}
