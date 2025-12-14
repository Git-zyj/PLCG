/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81320
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
    var_11 = var_0;
    var_12 = ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) (signed char)-127))));
    var_14 -= ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), (((((-1541767916) + (2147483647))) >> (((((/* implicit */int) (short)32767)) - (32746)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) (_Bool)0))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
    }
    for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (287667426198290432LL))))), (((/* implicit */long long int) (short)10483))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */short) arr_3 [i_1 - 3])), (var_1)))) + (2147483647))) >> (((((((/* implicit */int) arr_4 [i_1] [i_1])) - (((((/* implicit */_Bool) var_0)) ? (1541767915) : (((/* implicit */int) (short)29525)))))) + (1541767828)))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
        {
            arr_10 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((int) var_8))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))))))));
            var_18 ^= ((/* implicit */long long int) 41904945U);
            arr_11 [i_2] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))))) << (((max((0U), (((/* implicit */unsigned int) ((int) 31))))) - (7U)))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
        {
            arr_16 [i_3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (arr_5 [i_3])))) > (arr_15 [i_1 - 3])));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) var_1)) : (1541767915)))) ? (((((arr_15 [i_3]) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-29536)) + (29595))) - (59))))) : (255LL)));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (short i_5 = 1; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_23 [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 2])) ? (arr_12 [i_1 + 1] [i_1 + 1]) : (((/* implicit */int) (unsigned short)65535))));
                        arr_24 [i_5] [i_5] = (~(((arr_9 [i_5] [i_3] [i_4]) / (((/* implicit */unsigned long long int) 1541767915)))));
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_27 [i_1] = ((/* implicit */unsigned int) var_7);
            arr_28 [i_1] [i_6] [i_6] = ((((/* implicit */int) ((unsigned char) ((var_10) + (((/* implicit */int) (short)14337)))))) % (arr_5 [i_1]));
            arr_29 [i_1] [i_6] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_12 [i_1] [i_1 + 2])) & (var_0))))));
        }
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        var_20 ^= ((/* implicit */_Bool) ((unsigned int) var_1));
        var_21 = ((/* implicit */unsigned char) arr_30 [i_7]);
    }
}
