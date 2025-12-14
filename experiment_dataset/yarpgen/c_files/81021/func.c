/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81021
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */short) max((((/* implicit */unsigned char) (signed char)70)), (var_3)))), ((short)-1))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])) != (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                var_11 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)28)) < ((+(((/* implicit */int) arr_5 [i_0]))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16765)) + (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3451162093U))));
                arr_14 [i_0] [i_0] [i_3] [i_0] = (+(((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) (signed char)-117)), (var_4)))), (max((((/* implicit */unsigned short) arr_6 [i_0] [i_3])), (var_5)))))));
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_2))));
            }
            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1933066748))));
            var_14 ^= ((/* implicit */long long int) arr_8 [i_0] [i_1 + 1] [i_0]);
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
            var_15 = ((/* implicit */long long int) ((short) (-(arr_12 [i_0] [i_0] [i_0] [i_0]))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)70)) ? (arr_1 [i_4] [i_4]) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_5])))))));
            }
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 843805202U)) ? (((/* implicit */int) (unsigned short)3372)) : (((/* implicit */int) (signed char)-105))));
        }
        arr_21 [i_0] = ((/* implicit */_Bool) var_1);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_6] [i_6]))))) ? (((long long int) ((3451162093U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_6 [i_6] [i_6])) == (((/* implicit */int) var_8))))))))));
        arr_25 [i_6] = ((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_6]);
        var_18 ^= ((/* implicit */signed char) max((((arr_16 [i_6] [i_6]) & (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((unsigned short) arr_23 [i_6])))));
        arr_26 [i_6] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) (signed char)95)))) < (((/* implicit */int) (unsigned char)249))))) <= ((+((-2147483647 - 1))))));
    }
    var_19 = ((/* implicit */long long int) ((min((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_5)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))) >= (((/* implicit */int) ((((/* implicit */int) max((var_4), (((/* implicit */short) var_9))))) < (((/* implicit */int) ((unsigned char) (unsigned char)0))))))));
}
