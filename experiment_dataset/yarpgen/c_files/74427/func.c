/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74427
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) == (arr_1 [i_0] [i_0]))))) + (arr_1 [i_0 - 2] [i_0])))));
        var_17 -= ((/* implicit */long long int) var_12);
    }
    for (long long int i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        var_18 += ((/* implicit */short) var_2);
        var_19 = ((/* implicit */int) var_8);
    }
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (arr_7 [i_2] [i_2]) : (var_8)))) : (arr_6 [i_2] [i_2])))))))));
        arr_8 [i_2] = ((/* implicit */long long int) arr_7 [i_2] [i_2]);
    }
    var_21 *= ((/* implicit */unsigned short) ((var_10) & (((/* implicit */long long int) var_2))));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_22 += (((+(var_2))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
        arr_12 [i_3] [i_3] &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_3] [(unsigned short)18])) ? (((/* implicit */long long int) arr_0 [i_3] [(unsigned short)18])) : (var_11)))));
    }
    for (unsigned short i_4 = 4; i_4 < 9; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) max((min((min((var_1), (((/* implicit */long long int) arr_13 [i_4])))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_9 [i_4])))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14505))) : (var_9))) == (((arr_3 [i_4] [i_4 - 2]) % (var_13))))))));
        var_23 ^= ((/* implicit */unsigned char) var_16);
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 10; i_5 += 1) 
        {
            arr_20 [i_4] [i_5 + 1] = ((/* implicit */int) (((!((_Bool)0))) ? (max((((/* implicit */long long int) ((unsigned int) var_12))), (((((/* implicit */_Bool) var_1)) ? (arr_19 [i_4] [i_4]) : (((/* implicit */long long int) 1443416070)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_11 [i_4]))) <= (((/* implicit */int) (signed char)40))))))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */int) (_Bool)1)), (1443416070)))))) : (((unsigned long long int) var_10)))))));
            var_25 = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_4])), (var_9)))) ? (min((max((arr_15 [i_5] [i_4]), (((/* implicit */long long int) var_5)))), (((((/* implicit */long long int) arr_7 [i_5] [i_4])) - (var_13))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) % (max((arr_9 [i_5]), (((/* implicit */unsigned int) var_16))))))));
            var_26 += (+(((/* implicit */int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_5]) == (var_13)))))))));
        }
        var_27 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)24)) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))) == ((~(arr_6 [i_4] [i_4]))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_16)), (arr_9 [i_6]))) & (((((/* implicit */unsigned int) arr_0 [i_7] [8ULL])) & (var_0)))))), (arr_24 [0U] [0U] [i_6]))))));
                var_29 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_5 [i_7])), ((short)32767))))));
            }
        } 
    } 
}
