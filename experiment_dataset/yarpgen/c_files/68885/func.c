/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68885
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
    var_15 = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_14))))))));
    var_16 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */int) var_10)) * (((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) var_3);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) == (((/* implicit */int) arr_2 [i_0]))));
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
            var_20 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)37711)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))));
            var_21 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))));
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        arr_18 [i_2] = ((/* implicit */short) ((arr_6 [i_2] [i_2]) % (((((/* implicit */_Bool) var_8)) ? (var_7) : (arr_7 [i_4])))));
                        var_22 += ((/* implicit */short) ((((arr_10 [i_2 + 4]) + (2147483647))) >> (((((/* implicit */int) var_10)) - (11763)))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27825)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) : (((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37714)))))));
                        var_24 = ((/* implicit */unsigned int) (-(arr_16 [i_2 + 4] [i_3] [i_2] [i_2 + 4] [i_2])));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_25 &= ((/* implicit */unsigned short) arr_6 [i_2 - 2] [i_8]);
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)))) ? ((((_Bool)0) ? (-9175936841594812583LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 2])))));
                            var_27 = ((/* implicit */signed char) var_5);
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_2 - 2]))));
                        }
                        arr_29 [i_2] [i_6] [i_7] [(unsigned char)6] [i_2] = ((/* implicit */unsigned short) arr_8 [i_2 - 1]);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) var_6);
    }
    var_30 *= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_11)), (max((var_9), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (2582952103U))))))));
}
