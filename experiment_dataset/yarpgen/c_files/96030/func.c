/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96030
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))))));
        arr_4 [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (30) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (min((3176458756U), (((/* implicit */unsigned int) arr_0 [i_1 - 2])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))));
        arr_8 [i_1] = ((((/* implicit */_Bool) (-(arr_1 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2])))) : (((unsigned long long int) 3176458756U)));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (int i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (int i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)6] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_4] [i_3 + 1] [i_1 - 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_16 [i_5 + 1] [i_2] [i_2])))) : ((+(((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_1 [i_3 + 2]))));
                                arr_21 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) arr_9 [i_1] [i_2]);
                                var_19 = ((/* implicit */signed char) var_16);
                                var_20 = ((/* implicit */long long int) var_16);
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) -3785060387391899230LL)));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_21 *= ((/* implicit */short) (-((-(((/* implicit */int) arr_23 [i_6]))))));
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_23 [i_6])), (arr_25 [i_6])));
        var_23 = ((/* implicit */unsigned short) 0LL);
    }
    for (short i_7 = 3; i_7 < 7; i_7 += 3) 
    {
        arr_29 [i_7] = ((/* implicit */short) ((signed char) ((int) arr_12 [i_7 - 2] [i_7] [i_7] [i_7])));
        arr_30 [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) var_15)))));
        var_24 = ((/* implicit */int) ((unsigned char) arr_10 [i_7 - 3] [i_7] [i_7]));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_14 [i_7 + 2] [i_7 - 1] [i_7 - 2] [i_7 + 1]))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (min(((+(arr_5 [i_7 + 2] [i_7 - 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 - 1] [i_7 - 3]))) : (arr_1 [i_7 + 3]))))))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (signed char)-1))));
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) -7))));
    var_29 = ((/* implicit */_Bool) min((var_10), (var_10)));
}
