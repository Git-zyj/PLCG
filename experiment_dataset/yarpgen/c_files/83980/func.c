/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83980
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
    var_14 = var_6;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((2809807255186199492LL), (((/* implicit */long long int) (signed char)1))));
                                arr_11 [i_3] [i_3] [i_0] [i_0] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-2963))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((short) (signed char)-92))) : (((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (signed char)68))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)-2))) ? (min((var_11), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_1)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_6))))))) : (((((/* implicit */_Bool) (signed char)-27)) ? (8448049494813541728LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1052925050)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11)));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8448049494813541724LL)) ? (((/* implicit */int) (short)-10972)) : (((/* implicit */int) (unsigned short)3477))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)))));
        var_21 = ((/* implicit */short) max(((+((~(var_11))))), (((/* implicit */unsigned long long int) ((long long int) var_8)))));
    }
}
