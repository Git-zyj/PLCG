/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81025
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
    var_15 = ((/* implicit */unsigned long long int) ((unsigned short) ((18446744073709551613ULL) ^ (((/* implicit */unsigned long long int) 472387925)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_4 [i_0])))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        var_17 += ((/* implicit */unsigned short) var_2);
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0] [i_2])) * (((/* implicit */int) ((((/* implicit */int) var_6)) < (var_0)))))) - ((((-(((/* implicit */int) (unsigned short)12871)))) ^ (((/* implicit */int) arr_5 [i_0] [i_2]))))));
                            var_19 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))), (var_9)));
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)115))));
                        }
                        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_14 [i_3] [i_3] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) min((-472387926), (((/* implicit */int) (short)8704))));
                            var_21 = ((/* implicit */short) ((((arr_9 [i_0] [(unsigned short)9] [i_2] [i_3 - 1]) / (-472387926))) > (((((/* implicit */int) (_Bool)1)) >> (((1882722459) - (1882722446)))))));
                            arr_15 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (-(((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
                            arr_16 [i_0] [i_1] = ((/* implicit */int) var_2);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_7), ((unsigned char)255)))) ? (((/* implicit */int) min((arr_0 [i_3 + 2]), (var_7)))) : ((+(((/* implicit */int) arr_0 [i_3 - 1]))))));
                            var_22 = ((/* implicit */unsigned char) arr_9 [(unsigned short)10] [i_3 + 2] [i_3] [i_3]);
                            arr_20 [i_0] [(unsigned char)18] [8] [i_3] [i_0] = ((/* implicit */_Bool) (+(((9771359219885935870ULL) + (((/* implicit */unsigned long long int) -1))))));
                        }
                        var_23 += ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_13 [i_0] [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_1])) % ((-2147483647 - 1))))));
                        var_24 = (!(((/* implicit */_Bool) ((arr_6 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]) | (arr_6 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2])))));
                        arr_21 [i_0] = ((/* implicit */int) (_Bool)1);
                    }
                    for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((-826825365), (((/* implicit */int) (unsigned short)0))))))))))));
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) : (min((arr_1 [i_0]), (arr_1 [i_0])))))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_7]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_2)))));
                    }
                    var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) var_7);
                                var_29 = ((/* implicit */unsigned short) (~(min((((((/* implicit */int) var_11)) / (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) -2)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [i_1])) : (((/* implicit */int) var_7))))))));
                                arr_32 [i_0] [(_Bool)1] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */_Bool) ((((int) arr_6 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1])) * (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) var_12)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-3156))))) ? (min((var_9), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_13)) : (var_9))))))));
}
