/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64445
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
    var_10 -= ((/* implicit */short) max((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4))), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (var_8) : (var_5))))))));
    var_11 = ((/* implicit */short) (~(var_0)));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) 3407269687U)))));
        arr_5 [i_0] = ((/* implicit */short) max((((/* implicit */int) min(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */int) (unsigned char)131)) <= (47429285)))))), (((((/* implicit */int) (signed char)-121)) | (((/* implicit */int) (unsigned char)143))))));
        arr_6 [i_0 + 1] &= ((/* implicit */unsigned int) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-16)) ^ (483232596)))) && (((/* implicit */_Bool) max((((/* implicit */short) var_1)), (arr_1 [i_0 - 1]))))))))));
        var_12 = ((/* implicit */unsigned char) min(((~(((((/* implicit */int) (_Bool)0)) - (var_5))))), (((/* implicit */int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) var_1)))) > (338361171))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((short) (signed char)-73)))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_14 &= ((/* implicit */signed char) ((((/* implicit */int) (!(arr_8 [i_1] [i_1])))) <= (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (-444949466)))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) arr_9 [i_1] [(unsigned char)0]);
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) ((unsigned int) var_0))) : (((unsigned long long int) -395226261088096075LL))))));
        var_15 = ((/* implicit */unsigned int) arr_9 [i_2] [i_2]);
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */int) min((((/* implicit */long long int) arr_16 [i_4])), (((((/* implicit */_Bool) (unsigned char)48)) ? (7558277755168585994LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))))));
                var_17 |= ((/* implicit */short) arr_10 [i_4]);
                arr_22 [i_3] = ((/* implicit */unsigned short) 1109536286);
                var_18 = ((/* implicit */signed char) (((+(arr_12 [i_3]))) / (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)40))))));
                arr_23 [i_3] [i_3] = ((/* implicit */signed char) var_5);
            }
        } 
    } 
}
