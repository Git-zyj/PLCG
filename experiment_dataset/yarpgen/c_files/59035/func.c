/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59035
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (((+((-2147483647 - 1)))) - (((/* implicit */int) (unsigned char)0)))))));
        arr_3 [i_0 + 1] [11LL] = ((/* implicit */unsigned char) (!(((4294967295U) <= (((/* implicit */unsigned int) 2147483647))))));
        arr_4 [i_0 + 1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (5951944259634156096ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                var_14 = ((/* implicit */long long int) (+((-(2147483647)))));
                arr_10 [i_1 - 1] [i_1 - 1] [i_2] |= ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (short)-24453))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((-1463940416411232736LL) > (((/* implicit */long long int) 0U))));
                            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-123))));
                            var_17 = ((/* implicit */int) (-(5951944259634156096ULL)));
                            var_18 = ((/* implicit */unsigned char) ((int) 4294967295U));
                            var_19 *= ((int) 2147483647);
                        }
                    } 
                } 
                arr_15 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) 2147483647)))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4437326077398146069ULL))));
                arr_20 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_0 + 1] = ((/* implicit */int) (~(4294967280U)));
                arr_21 [i_0] [i_0] [i_5 - 1] = ((/* implicit */unsigned char) ((-7174497318062196339LL) > (((/* implicit */long long int) 4262287042U))));
                arr_22 [i_5] [i_0 + 1] = ((/* implicit */int) (unsigned short)35762);
            }
            for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                arr_25 [i_6] [i_1] [10] [i_6] = ((/* implicit */int) 2058891232658256825LL);
                var_21 = ((/* implicit */short) (unsigned char)199);
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) ((short) (short)-27913));
                    var_23 = ((/* implicit */_Bool) (-(-3896816928707680461LL)));
                    arr_29 [i_6] [(_Bool)1] [(_Bool)1] [i_6] [i_7] [i_7] = (!(((/* implicit */_Bool) (short)-28345)));
                }
                for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    var_24 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3149712341U)));
                    arr_34 [i_0] [i_6] = ((_Bool) 4437326077398146069ULL);
                    arr_35 [i_0 + 1] [i_1 - 1] [i_6] [i_6] = (!(((/* implicit */_Bool) -5572821831657129263LL)));
                    arr_36 [i_6] [i_1] [i_6] [i_6] = ((/* implicit */long long int) ((3149712341U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199)))));
                    arr_37 [i_6] = ((/* implicit */unsigned char) ((-5756263006459322906LL) - (((/* implicit */long long int) ((/* implicit */int) (short)2877)))));
                }
            }
        }
    }
    var_25 = ((/* implicit */unsigned int) min((1216972566051536436ULL), (((/* implicit */unsigned long long int) -5756263006459322906LL))));
    var_26 = var_0;
}
