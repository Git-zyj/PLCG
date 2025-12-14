/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8114
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
    var_20 = ((/* implicit */unsigned long long int) min((((-9223372036854775803LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32740)))))))), (((/* implicit */long long int) ((var_11) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15237)) ? (((/* implicit */int) (short)32740)) : (((/* implicit */int) (unsigned short)65515))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_18 [i_2] = ((/* implicit */unsigned short) arr_3 [i_3] [i_1 + 1]);
                                var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32741))) >= ((-9223372036854775807LL - 1LL))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)1001))))))))) == (((9223372036854775804LL) - (((/* implicit */long long int) ((/* implicit */int) (short)32743)))))));
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-32740)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32755))) : (-6615843218514740139LL))) + (9223372036854775807LL))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), (arr_6 [i_0] [i_2 - 2] [i_4])))) - (62716)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_2] [14U] [14U] [i_6] = (-(((arr_11 [i_2 - 1]) % (arr_11 [i_2 - 2]))));
                                arr_26 [i_6] [i_6] [i_2] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */short) max(((-(((((/* implicit */_Bool) var_4)) ? (arr_1 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) var_8))));
                                arr_27 [i_2] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [11U] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4762)))) && (((/* implicit */_Bool) var_19))))) - (((/* implicit */int) ((((/* implicit */int) min((arr_17 [i_1] [i_1]), (((/* implicit */signed char) var_8))))) > (((/* implicit */int) min((var_18), (((/* implicit */short) (signed char)-122))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_35 [i_7] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_7])) << (((((/* implicit */int) var_14)) - (69)))))) >= (var_16)));
                    var_24 = ((/* implicit */signed char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))));
                    arr_36 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_14)), ((-(var_19)))));
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_15)));
}
