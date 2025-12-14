/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74942
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_16))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_15))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((67108863U), (((/* implicit */unsigned int) (unsigned short)65185)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65172))) * (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_20 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) != (((((/* implicit */_Bool) (signed char)-98)) ? (arr_0 [i_0] [i_0]) : (var_15))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((var_11) % (((/* implicit */unsigned long long int) var_4)))))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */short) (~(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_22 = ((/* implicit */int) (((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)351)) || (((/* implicit */_Bool) (unsigned short)61185))))))) <= (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_23 += ((/* implicit */unsigned long long int) var_2);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_2])) > (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))));
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_11))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))));
            arr_8 [i_2] [i_1] &= ((/* implicit */unsigned int) ((unsigned long long int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (12570262635484159964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2]))))) : (((/* implicit */int) arr_4 [i_2] [i_1]))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7542303765576744459ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (5876481438225391652ULL)))) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)330)))) : (((/* implicit */int) (unsigned short)2280))));
        }
        for (int i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) 
                {
                    {
                        var_28 += ((/* implicit */int) arr_5 [i_1] [i_1]);
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((-8004238811704281498LL) <= (((/* implicit */long long int) 345776897U)))))));
                    }
                } 
            } 
            arr_15 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (max((((((/* implicit */_Bool) arr_13 [i_3] [(unsigned short)11] [(unsigned short)4] [i_1] [(unsigned short)4])) ? (arr_6 [12U] [i_3]) : (((/* implicit */int) var_7)))), (max((((/* implicit */int) var_2)), (arr_10 [i_1] [i_3 + 2] [i_1]))))) : (arr_10 [i_1] [i_3 + 1] [i_3])));
            arr_16 [(_Bool)1] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) arr_12 [i_3 - 2] [i_3 + 2] [i_3 - 1] [i_3])) % (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (arr_12 [i_3 + 1] [i_3] [i_3 + 2] [i_3]))))));
            var_30 &= ((/* implicit */short) var_12);
            var_31 += ((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1]);
        }
        arr_17 [i_1] = ((/* implicit */unsigned int) max(((short)-8436), (((/* implicit */short) ((var_16) < (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))))));
    }
}
