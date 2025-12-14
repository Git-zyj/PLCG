/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99747
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min(((short)-4241), (max((((/* implicit */short) var_11)), ((short)4240)))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (short)-4241))));
                var_17 = max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29362))) >= (min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1536))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((var_14), (((/* implicit */unsigned short) var_12))));
    var_19 = 18446744073709551615ULL;
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_6 [i_2] = ((/* implicit */unsigned long long int) var_5);
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_16 [(unsigned short)8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) ((unsigned short) var_2))))));
                        var_21 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)315))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) var_6);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_7 [(short)13] [i_3 - 3]))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_21 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [(unsigned short)11] [i_3] [i_4] [i_3])) : (((/* implicit */int) var_6))))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */int) ((unsigned short) var_4))), ((-(((/* implicit */int) (unsigned short)32767)))))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)50313), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [(_Bool)1] [(unsigned short)17] [i_2]))) == (var_9)))))))) / (4954056147750285648ULL)))));
                        arr_22 [i_7] [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned short)255);
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_6))) && (((/* implicit */_Bool) ((unsigned short) (short)-4241)))))))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)11167), ((unsigned short)65281)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_3])))), ((~(((/* implicit */int) (_Bool)0))))))));
                            arr_28 [i_2] [i_3] [i_8] [i_8] [i_8] [i_2] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            arr_29 [(_Bool)1] [i_3] [i_3] [i_3] [i_8] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_12)) + (((/* implicit */int) arr_7 [i_3 - 2] [i_8 - 1])))), (((((/* implicit */_Bool) (short)-5790)) ? (((/* implicit */int) (unsigned short)38376)) : (((/* implicit */int) (short)11630))))));
                        }
                        arr_30 [i_2] [i_8] [i_4] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)11630)) ? (5396122755924960441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28032)))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-18325))))) / (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1]))));
                    }
                }
            } 
        } 
    }
}
