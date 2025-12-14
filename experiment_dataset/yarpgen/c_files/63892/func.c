/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63892
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
    for (long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((712138724850247575LL), (((/* implicit */long long int) arr_3 [i_0] [14ULL])))), (((((/* implicit */_Bool) 16384U)) ? (var_5) : (var_5)))))) ? ((~(min((arr_4 [i_0] [i_0] [(short)18]), (((/* implicit */int) (signed char)14)))))) : (((/* implicit */int) var_11))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((arr_3 [i_0] [i_1]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_3 [i_0] [i_1])))) + (arr_1 [i_0])));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_0 [(short)21])) / (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((short) 0LL))) : (((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) 8796092760064LL)) ? (((/* implicit */int) (short)-10372)) : (arr_4 [8U] [i_2] [i_2])))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)45)), (max((arr_7 [i_3 + 4] [i_3 - 1] [i_2] [i_3 + 4]), (arr_7 [i_3 + 4] [i_3 + 3] [i_2] [i_3 + 2]))))))));
                        var_22 = ((/* implicit */_Bool) (-(arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 - 1])));
                        var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_3 + 1] [24U] [i_2] [i_0 + 1])))));
                    }
                    var_24 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_0 + 1])) ? (((/* implicit */long long int) arr_1 [i_0])) : (2836669749692355561LL))));
                }
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [4] [14LL]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (short)-15296)) : (((((/* implicit */_Bool) 8442126247944404270LL)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (var_17)))))));
                    arr_12 [i_0] [i_1] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_4 + 3]))))));
                    arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_1] = ((/* implicit */int) min((max((6214244484099414669LL), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) 268427264)), (arr_6 [i_1] [i_1]))))));
                }
                var_26 = ((/* implicit */unsigned int) arr_2 [i_0]);
            }
        } 
    } 
    var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (((~(-1679688325))) ^ (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_16))))))) : (var_14)));
    var_28 = ((/* implicit */int) max(((~(((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) (_Bool)1))));
}
