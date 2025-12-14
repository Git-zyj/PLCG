/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66609
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(max((var_4), (((/* implicit */long long int) (unsigned char)108)))))))));
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    var_17 = ((((/* implicit */_Bool) ((signed char) ((var_7) ? (((/* implicit */int) (unsigned short)33920)) : (((/* implicit */int) (unsigned char)113)))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) ^ (var_14))) : ((+(var_1))));
    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_13)) ? (((((var_4) + (9223372036854775807LL))) >> (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20275)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))) : (13854192525998267602ULL))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(var_7)))), (((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) var_0)) : (4679920533700503845ULL)))))) ? ((-(((/* implicit */int) (unsigned char)156)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118)))))))))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) (signed char)-54)) ? (min((min((232912171506376749ULL), (((/* implicit */unsigned long long int) 409579491U)))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1 - 1])))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [1LL] [11ULL])) : (((/* implicit */int) var_7))))))));
        arr_7 [i_1] [(signed char)2] = ((/* implicit */int) ((((arr_5 [i_1 - 1]) == (var_1))) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (((var_7) ? (arr_4 [i_1]) : (arr_5 [i_1 - 1])))));
        var_22 = ((/* implicit */short) ((unsigned int) ((signed char) arr_4 [i_1])));
    }
    for (short i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_2 + 1]) : (((/* implicit */unsigned long long int) var_0))))) ? (4934737724647219013ULL) : (var_1)))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_23 = arr_5 [i_2];
                                var_24 = ((/* implicit */signed char) ((4346411179201237068ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49)))));
                                var_25 ^= ((/* implicit */short) min((((/* implicit */unsigned int) ((short) arr_10 [i_6] [i_5 - 2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3])) - (((/* implicit */int) arr_18 [i_3] [i_6] [i_4] [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_13 [i_6])) ? (arr_6 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                    var_26 = (+((-(((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 2] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_27 ^= ((/* implicit */long long int) var_6);
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_7 - 1] [i_7 + 1] [i_7] [i_3])), (var_14)))))));
                            }
                        } 
                    } 
                    arr_28 [i_2] [i_2] [i_2] [2LL] = ((/* implicit */short) ((min((var_0), (((/* implicit */long long int) (+(arr_19 [i_2] [i_2] [i_2] [i_4] [i_4])))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12))))));
                    var_29 ^= ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    }
}
