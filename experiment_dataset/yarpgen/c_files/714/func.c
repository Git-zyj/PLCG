/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/714
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551605ULL)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) max((var_5), (((/* implicit */unsigned long long int) var_6))));
                            var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                            var_21 = ((/* implicit */short) var_12);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_7))))), (arr_9 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (short)32711)))))) : (((((/* implicit */long long int) var_11)) ^ (var_14)))))) : (((((/* implicit */_Bool) var_13)) ? (17106885276752221812ULL) : (max((var_12), (((/* implicit */unsigned long long int) var_6))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) min((var_23), ((-(var_4)))));
                arr_10 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 329531748U)) * (max((10ULL), (11ULL)))))) ? ((-(18446744073709551604ULL))) : ((-(20ULL)))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 4; i_4 < 12; i_4 += 4) 
                {
                    var_24 = max((max((((18446744073709551612ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (arr_13 [i_4 + 1] [9ULL] [i_4 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_15) << (((arr_12 [i_0 - 1] [(unsigned short)3] [(unsigned char)5]) + (6932837006677067624LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_16))))) : (max((((/* implicit */long long int) var_11)), (8029973809135972427LL)))))));
                    var_25 &= ((/* implicit */unsigned short) var_0);
                }
                for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_13))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_1))))) | (((arr_13 [i_1 - 1] [i_1] [i_0 - 1]) & (((/* implicit */unsigned long long int) var_11))))));
                    arr_16 [i_5] [i_5] = (((!(((/* implicit */_Bool) var_14)))) ? (max((17068486999643518854ULL), (((/* implicit */unsigned long long int) var_14)))) : ((+(var_2))));
                    var_28 = ((/* implicit */unsigned long long int) var_14);
                }
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) min((var_29), (max((8029973809135972427LL), (((/* implicit */long long int) var_17))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
        {
            {
                arr_22 [i_7] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) (unsigned char)12)), (3ULL))));
                var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (max((((/* implicit */unsigned long long int) ((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (max((((/* implicit */unsigned long long int) var_1)), (var_12))))) : ((-(max((((/* implicit */unsigned long long int) (unsigned char)0)), (var_4)))))));
                var_31 *= ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) * (var_12))))))), ((-(arr_12 [i_7 - 1] [i_7 - 1] [i_7])))));
            }
        } 
    } 
}
