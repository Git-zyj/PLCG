/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97323
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((var_6) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 3])) + (((/* implicit */int) arr_0 [i_0 - 1])))))));
        arr_2 [i_0] = ((/* implicit */long long int) (+(var_7)));
    }
    for (int i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) min((min((((/* implicit */int) min(((short)782), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_3 [i_1])))))), (((/* implicit */int) ((signed char) ((_Bool) (unsigned char)74))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_5 [i_1]);
                        var_19 = ((/* implicit */unsigned short) (signed char)-61);
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)12]))))), (((/* implicit */unsigned int) max(((signed char)-59), (var_13))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 12930616959476169908ULL))) ? ((~(3824018086U))) : (var_9)))) : (min((((/* implicit */unsigned long long int) (signed char)53)), (((7126650430171674391ULL) | (((/* implicit */unsigned long long int) arr_11 [i_1]))))))));
                        arr_15 [i_1] [i_1] [i_3] [(signed char)2] = ((/* implicit */int) min(((-(arr_8 [9] [(_Bool)1]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-20988)), (arr_5 [i_1]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_5 = 3; i_5 < 17; i_5 += 1) 
            {
                var_21 = ((/* implicit */int) max((var_21), (min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) var_2))))))));
                arr_19 [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(7126650430171674393ULL)))) ? ((+(((8083578792098552121LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65523)))))))))));
            }
            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (short)-20167)) : (((/* implicit */int) (unsigned short)65533))))))), (max(((+(var_9))), (((/* implicit */unsigned int) (+(-912597650))))))));
            arr_20 [i_1] = ((/* implicit */_Bool) arr_4 [i_1 - 1]);
        }
    }
    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_6])) > (max((((/* implicit */unsigned long long int) var_10)), (703329139878209393ULL)))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_6] [i_6]))))) ? (((int) var_6)) : (((int) (signed char)54))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)65523)))) / (((((/* implicit */_Bool) (unsigned short)59978)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-83))))))) ? (((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) != (11320093643537877224ULL)))))) : (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_6)))))))))));
    }
    var_25 = ((/* implicit */unsigned short) var_8);
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((((/* implicit */int) (signed char)-55)) + (2147483647))) >> (0LL))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-67)) && (((/* implicit */_Bool) (short)-20988)))))) >= (var_9)))))))));
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 1292740052)))))))) && (((/* implicit */_Bool) var_2))));
}
