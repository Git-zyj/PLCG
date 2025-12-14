/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74209
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [6LL]))) >= (min((14795692957162155615ULL), (((/* implicit */unsigned long long int) (unsigned char)127))))))) << (((/* implicit */int) var_13))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_17 |= ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [(short)1] [(short)1])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0])))), (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))), (arr_5 [i_3])));
                            var_18 = ((/* implicit */short) arr_3 [i_0] [(short)3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    for (int i_5 = 4; i_5 < 7; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_1 [6LL]), (arr_1 [(unsigned char)6])))), (((((/* implicit */_Bool) arr_1 [6ULL])) ? (((/* implicit */int) arr_1 [(signed char)10])) : (((/* implicit */int) arr_1 [(short)2])))))))));
                            var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_5 [i_0])))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + (10971643442198452214ULL))) | (((/* implicit */unsigned long long int) arr_14 [(short)7] [i_0] [i_4 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) var_3)) << (((-8688833327514890571LL) + (8688833327514890585LL)))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1025633777816662954LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((-1025633777816662960LL) - (1025633777816662942LL)))))));
    var_22 &= min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) -1025633777816662954LL)) ? (1025633777816662959LL) : (-1025633777816662960LL))))), (1025633777816662960LL));
}
