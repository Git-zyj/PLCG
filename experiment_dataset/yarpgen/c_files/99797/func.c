/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99797
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
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_4)))) ? (((/* implicit */unsigned long long int) (-(1003993936U)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (var_11))))))));
    var_13 = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_2 - 3] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (short)-17888)) / (((/* implicit */int) var_6))))))) ? (((((/* implicit */unsigned long long int) (+(var_10)))) % (arr_5 [i_1 + 2] [i_0 - 1]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17858))) == (15297890886791251600ULL)))), ((+(var_11)))))));
                                arr_18 [i_0] [i_3] [i_3] [i_1 + 2] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_1))))) ? (((((/* implicit */_Bool) ((var_2) ? (arr_15 [i_3 + 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_3] [i_2] [i_1] [i_0 - 4] [i_0 - 3])))))) ? (((((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_4] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34279))) : (-5753680259507515427LL))) : (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((arr_13 [i_0 + 1] [i_1]), (((/* implicit */signed char) arr_10 [(unsigned char)1] [i_1 + 2] [i_3 - 1] [i_2 + 1] [i_3] [i_2 + 1]))))))))));
                                arr_19 [i_0] [i_1 - 1] [i_1] [i_4] [i_4] = ((/* implicit */int) max((((max((var_0), (((/* implicit */unsigned int) (unsigned char)36)))) + (((/* implicit */unsigned int) ((arr_6 [i_3 + 2] [i_4] [i_4]) ? (((/* implicit */int) (short)21395)) : (((/* implicit */int) (unsigned char)97))))))), (((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)251)), (-1225073519)))) : (((((/* implicit */_Bool) arr_13 [(unsigned char)23] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4)))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0 - 4] [16U] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_6)), (1397433647927373723ULL))) > (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (unsigned short)55759))))))))));
            }
        } 
    } 
}
