/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6008
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18064396488760164979ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)174)))))))) ? (arr_7 [(signed char)8] [i_1] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                            var_21 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_9 [i_3 + 1] [i_2 - 1] [i_0]) : (((/* implicit */unsigned long long int) arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_2 - 1])))));
                            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(min((arr_7 [i_3] [i_1] [(_Bool)1]), (((/* implicit */long long int) arr_3 [i_2]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)157)), (var_1)))) ? (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) <= (((/* implicit */int) var_10)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))));
                            arr_13 [i_0] [i_0] [17ULL] [i_0] [i_3] [i_1] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 + 3] [i_3 + 1])) ? ((~(9255555969349309118ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned char) max((var_2), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) | (((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0]))))) / (max((((/* implicit */long long int) arr_10 [(unsigned char)19] [i_1] [i_1] [i_1])), (var_12)))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_5] [i_4] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))) : (var_5))));
                                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned short) var_15)), (var_2))), (var_2))))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [(unsigned char)12] [i_1])) && (((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [(unsigned char)2])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_1] [2ULL] [i_0]))))));
                var_26 = ((/* implicit */short) min((13LL), (((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) != (var_5)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (unsigned char)68);
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? (((var_8) ? (var_4) : (((/* implicit */unsigned long long int) 2035930773U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_27 [i_8] [i_9]))))))) ? (min((((/* implicit */unsigned int) min((arr_23 [i_7]), ((short)-9547)))), (((unsigned int) (unsigned char)187)))) : (arr_29 [i_8 - 1] [i_8 - 1])));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-1)) && (arr_36 [i_7] [i_7] [i_8] [i_9] [i_10]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_36 [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) (short)14678))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) ((short) var_1))))) : (((/* implicit */int) (unsigned short)65535))));
                        arr_38 [i_7] = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) arr_36 [i_8 - 2] [i_8 + 1] [i_8] [i_8] [(short)19])), (var_19)))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) arr_24 [i_7] [i_8]);
                        arr_41 [i_7] [i_8 - 2] [i_9] |= ((/* implicit */unsigned short) arr_34 [i_7]);
                        arr_42 [(unsigned char)6] = ((/* implicit */unsigned long long int) arr_29 [i_8 - 2] [i_11]);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_45 [i_12] [i_7] [i_8] [i_8] [i_7] [i_7]))));
                        arr_47 [i_12] [i_9] [i_8] [i_8] [i_8 - 2] [i_7] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [(short)22] [(short)22] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_7]))) : (var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) : (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */long long int) arr_37 [i_7] [(unsigned char)5] [i_7] [i_12] [i_9] [i_8])))))));
                        arr_48 [i_7] [i_12] = ((/* implicit */unsigned char) max((max(((-(var_1))), (var_3))), (((/* implicit */unsigned long long int) arr_31 [(unsigned short)5] [(unsigned short)5]))));
                    }
                }
            } 
        } 
    } 
    var_33 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (max((((var_16) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_11))))));
}
