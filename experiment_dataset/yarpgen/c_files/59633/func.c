/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59633
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_2 [i_0 + 1]))))));
                var_12 = ((/* implicit */int) ((unsigned long long int) (+(((((/* implicit */int) (unsigned short)23817)) >> (((/* implicit */int) (_Bool)0)))))));
                var_13 = ((/* implicit */unsigned char) arr_2 [i_0]);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)32767)))) || (((/* implicit */_Bool) ((max((((/* implicit */int) var_11)), (var_0))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1])))))))));
                var_15 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (var_1)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_8))));
                        arr_18 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) min((((/* implicit */short) arr_17 [i_2] [i_3] [i_3] [i_5])), (var_2)))) | (arr_8 [i_3] [i_3]))));
                        var_17 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) (_Bool)1))), (((((/* implicit */_Bool) var_11)) ? (arr_8 [i_4] [i_3]) : (((/* implicit */int) var_11))))));
                        var_18 += max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_5))))) + (((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_5])))));
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_4])) || (((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-5836))))), (min((((/* implicit */unsigned int) var_7)), (var_9)))))) : (var_4)));
                    }
                    arr_19 [(signed char)19] [i_3] [i_4] = ((/* implicit */unsigned int) (short)32512);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_16 [i_7 - 2] [i_7] [i_7 + 2] [i_7] [i_7 + 3]) <= (arr_16 [i_7 - 3] [i_7 - 3] [i_7 + 1] [i_7] [i_7 - 3])))) + (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_8))))));
                                var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (arr_16 [i_7 + 4] [i_7 + 3] [i_7] [i_7] [i_7]) : (arr_16 [i_7 - 1] [i_7 + 2] [i_7] [i_7] [i_7])))));
                                arr_26 [i_7 + 3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)249)) || (((/* implicit */_Bool) ((int) 12124331127665294505ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (((+(max((var_1), (((/* implicit */long long int) var_7)))))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_23 = ((/* implicit */short) max((((/* implicit */long long int) (+(((((/* implicit */int) var_7)) & (((/* implicit */int) (_Bool)0))))))), ((-(((var_1) & (((/* implicit */long long int) var_6))))))));
    var_24 = ((/* implicit */unsigned short) (+(max((((((/* implicit */int) var_11)) / (((/* implicit */int) var_10)))), ((+(var_0)))))));
}
