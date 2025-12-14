/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67665
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_1 [i_0]))))) << (((((/* implicit */int) var_11)) - (47050))))), ((+(var_13)))));
                var_16 += ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) var_9))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)30)) : (((((/* implicit */int) (unsigned short)41144)) * (((/* implicit */int) (unsigned char)250))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1])), (var_0))))));
                            arr_11 [i_3] [14] [i_0] [(unsigned short)0] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [(_Bool)1] [i_1] [i_3 - 2])) ? (min((((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (short)2048)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-2045)))) : (((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((((((/* implicit */int) (short)-2049)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */int) (unsigned char)135)) : (arr_2 [i_0] [(_Bool)1]))))))))));
                            var_18 += ((/* implicit */short) arr_3 [i_2] [i_2]);
                            var_19 = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned short)62662))))), (((((/* implicit */int) var_10)) | (((/* implicit */int) var_2))))))));
    var_21 = ((/* implicit */_Bool) ((min((var_12), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)57)))))) % (min((((/* implicit */int) (unsigned short)43674)), (152556157)))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (2112591669) : (97117396))) != (((((/* implicit */int) (unsigned char)150)) * (((/* implicit */int) (unsigned char)69))))))) << (min((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))))));
    var_23 = ((/* implicit */short) var_9);
}
