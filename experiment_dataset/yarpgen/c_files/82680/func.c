/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82680
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */signed char) ((arr_0 [i_1 - 3]) / (arr_0 [i_0])));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                    arr_7 [(short)0] [i_1] [i_1] = ((/* implicit */_Bool) ((10747135590187391201ULL) ^ (var_19)));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)142)) ? (10747135590187391201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))))) : (((/* implicit */unsigned long long int) 9223372036854775803LL))));
                    var_22 = ((/* implicit */_Bool) var_19);
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) 10747135590187391201ULL);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(min((arr_8 [i_1 + 3] [i_1 + 1] [i_5 + 1]), (((((/* implicit */_Bool) 1203397505)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)11] [i_0] [i_5])) : (-608642673)))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_1 + 3])))) % (arr_3 [i_1 + 1] [i_1 + 2] [i_1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_7);
    var_25 = ((/* implicit */_Bool) ((unsigned int) var_4));
    /* LoopNest 2 */
    for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            {
                var_26 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_17 [i_6 + 2] [i_6 + 3])), (var_5))), (((/* implicit */unsigned long long int) var_17))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(9223372036854775789LL))))));
                            arr_26 [i_8] [i_8] [8U] [(_Bool)1] = ((/* implicit */int) arr_1 [i_6] [i_9]);
                            var_28 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(18446744073709551600ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) : (arr_10 [i_6 + 1] [i_6 + 1] [i_6]))) : (((/* implicit */unsigned int) (+(var_1)))))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned short)24375)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_10 = 1; i_10 < 20; i_10 += 2) 
    {
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))) + (10747135590187391201ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10747135590187391204ULL)) && (((/* implicit */_Bool) 2593414220U)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))) : ((+(min((arr_27 [i_10 - 1]), (arr_27 [i_10]))))))))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_13 = 2; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((unsigned short) arr_37 [i_10] [i_10] [(short)10] [i_10] [i_10 - 1] [i_10] [i_10 - 1])))));
                                var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((-9223372036854775804LL), (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10]))) : (((unsigned int) var_10))))));
                                arr_40 [i_10] = ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                    arr_41 [i_10] [i_10] [i_10] [i_12] = var_16;
                }
            } 
        } 
    }
}
