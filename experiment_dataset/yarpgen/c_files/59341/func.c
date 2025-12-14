/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59341
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (((((+(arr_3 [i_1] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (-3204788832420140267LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_5 [i_1])))) : (((/* implicit */int) ((3204788832420140267LL) >= (((/* implicit */long long int) var_3))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_2] [i_3]) >> (((-3204788832420140267LL) + (3204788832420140310LL)))))) && ((!((!(((/* implicit */_Bool) var_2))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (max((arr_0 [i_4]), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (3204788832420140277LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((8658654068736ULL) | (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned long long int) (+(3204788832420140269LL)))) : (((((/* implicit */unsigned long long int) 3204788832420140259LL)) * (18446744073709551605ULL))));
    var_12 *= ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_13 = ((/* implicit */int) min((var_13), (((int) var_5))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_4))));
                }
                for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_4);
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0U))));
                                arr_33 [i_10] [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (16258864765190862791ULL)))));
                                var_17 |= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) -1181689235)), (34084860461056ULL))) * (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) arr_15 [i_5])) / (arr_31 [i_5] [i_8] [i_6] [14] [i_8] [i_5]))))))));
                            }
                        } 
                    } 
                    var_18 = ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16258864765190862788ULL))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8] [i_6] [i_6] [i_8]))) : (9007164895002624ULL))))) << (((((/* implicit */int) var_5)) + (5431))));
                    arr_34 [i_5] [i_6] = ((unsigned short) -1LL);
                    var_19 |= var_4;
                }
                for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    arr_37 [0] [i_11] [i_6] [0] &= ((/* implicit */int) (!(((/* implicit */_Bool) -3204788832420140267LL))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2903073579U)));
                }
                var_21 += ((/* implicit */signed char) arr_2 [i_5] [i_5]);
            }
        } 
    } 
}
