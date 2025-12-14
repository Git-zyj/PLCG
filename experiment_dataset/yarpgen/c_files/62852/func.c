/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62852
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_18)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [(signed char)4] |= ((/* implicit */int) arr_2 [i_1] [i_2]);
                    var_20 = ((/* implicit */short) (+(min((4119299420U), (((/* implicit */unsigned int) arr_6 [i_2 + 1] [i_2] [i_2] [i_2 - 3]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_12))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) var_17))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */long long int) max((arr_14 [i_3] [i_3]), (((/* implicit */short) var_18))))), (min((((((/* implicit */_Bool) (short)264)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-2214686430009503424LL))), (7749855893447129683LL))))))));
                    arr_15 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) var_0)), (2214686430009503426LL)))))), (((max((0ULL), (((/* implicit */unsigned long long int) var_11)))) << ((((+(((/* implicit */int) var_9)))) + (21334)))))));
                    arr_16 [i_3] [i_5] [i_3] [i_4] &= ((/* implicit */unsigned long long int) (-((((-(((/* implicit */int) arr_14 [i_3] [i_4])))) * (((/* implicit */int) max((((/* implicit */short) var_18)), (var_4))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max(((~(-2214686430009503424LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-270))) : (arr_10 [i_7] [i_8])))))))));
                    var_24 = 2214686430009503423LL;
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_32 [i_7] [i_8] [i_9] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_6])) - (var_6)));
                                var_25 |= ((/* implicit */unsigned short) max((max((arr_25 [i_6] [i_7] [i_7] [i_9 + 1]), (((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))))), (((/* implicit */unsigned int) ((short) arr_9 [i_7])))));
                                arr_33 [i_6] [i_7] [i_8] [i_6] [i_10] = ((/* implicit */int) arr_30 [i_10] [i_9] [i_8] [i_7] [i_6] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
