/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70518
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) (_Bool)1)), (1086298155))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (1302640449)))) ? (((/* implicit */int) var_13)) : (((int) (unsigned short)54568)))) : (((((/* implicit */int) (_Bool)1)) >> (((8588708488654394177ULL) - (8588708488654394163ULL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) min((min((((((/* implicit */_Bool) (unsigned char)38)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))), (var_8))), (((/* implicit */int) ((((/* implicit */_Bool) 3473875019U)) || (((/* implicit */_Bool) (short)-9414)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) : (26856375U)))))) || (((/* implicit */_Bool) ((var_8) / (max((((/* implicit */int) (short)-11311)), (var_8))))))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2]))))))) + (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (8588708488654394187ULL)))))) ? (((((/* implicit */_Bool) (unsigned short)65534)) ? (8588708488654394177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))));
                                arr_14 [i_0] [i_1] [i_0] [(unsigned short)13] [i_0] = (((((+(2U))) + (((/* implicit */unsigned int) (~(var_8)))))) & (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [7U] [(_Bool)1] [i_5] = (-(((long long int) var_6)));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) (_Bool)1))))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_15 [i_0] [4ULL] [i_2] [i_2] [i_2] [i_5])), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967288U)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */int) var_11))))), (var_12))))))));
                        var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (short)9115)) ? (((((/* implicit */_Bool) 9858035585055157438ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) 8388608U))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_5);
}
