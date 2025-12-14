/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55291
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
    var_11 = var_4;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) : (max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_1))))))) | (((((unsigned long long int) arr_4 [i_1 + 2] [i_1 + 1] [i_1])) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 3] [i_2 + 1] [i_3])) : (((/* implicit */int) (signed char)(-127 - 1))))) - (157)))))))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)63055), (((/* implicit */unsigned short) (short)63)))))) + ((+(arr_7 [i_0] [i_0] [i_0] [i_3])))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_3]))));
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_11 [9] [9] [i_2] [(short)15]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((min((max((14584606223894967535ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((short) 16208019854799767027ULL))))) << (((((/* implicit */int) var_9)) - (5801)))));
                                var_16 *= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 615434034)) ? (((/* implicit */int) var_9)) : (arr_2 [i_4]))) + (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_6)))))), (((((/* implicit */int) ((short) var_5))) << (((var_8) - (10581352952409978117ULL)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2468))) : (2238724218909784600ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_18 = arr_16 [i_0] [i_1 + 1];
                                var_19 = ((/* implicit */signed char) (short)63);
                                var_20 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 - 1] [i_2 - 1] [(short)9] [i_7 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) == (16208019854799767044ULL))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (arr_1 [i_0])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_21 = arr_0 [i_2];
                        var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_8])) || (var_7)))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((-7520680577844722886LL) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) 7520680577844722905LL))) - (15577)))));
                        arr_24 [i_8] [(short)4] = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) var_6)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((16208019854799767027ULL) - (16208019854799767026ULL))))))));
                        var_25 = (short)-32753;
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) -7520680577844722889LL)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (short)-11662))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        arr_30 [i_2] [i_10] = ((/* implicit */unsigned long long int) ((signed char) arr_14 [i_10] [5U] [i_1 + 2] [i_1] [(unsigned short)19] [i_0]));
                        var_27 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned char) arr_19 [i_10] [i_2 - 1] [i_1 + 3] [i_0]))) ? (arr_6 [i_0] [i_2 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_1 + 1] [i_2] [14U] [(short)14])))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned int) -73474148)), (((/* implicit */unsigned int) (short)-32753))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-32759)) + (2147483647))) >> (((((/* implicit */int) arr_16 [i_1 - 1] [i_1 - 1])) + (12082)))))))))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_9)) - (5793)))))) : ((-(3804635471479233305ULL)))))) ? (((unsigned long long int) var_1)) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_30 = ((/* implicit */long long int) (_Bool)1);
    var_31 &= ((/* implicit */int) (((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))) != (((/* implicit */int) var_4))));
}
