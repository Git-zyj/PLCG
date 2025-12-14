/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94034
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_1))));
    var_16 |= ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_11 [(short)13] [(unsigned char)0] [i_2] [i_3] = arr_1 [i_1] [i_2];
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (((+(arr_1 [i_0] [i_1]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1 + 2] [6U]))))))) < (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) / (max((arr_10 [i_0] [i_1 + 1] [i_2] [i_3]), (((/* implicit */long long int) var_5))))))));
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                var_17 -= ((/* implicit */unsigned long long int) 1962090257437202190LL);
                                arr_16 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] [i_3] = arr_8 [i_0] [i_1] [i_1] [i_1 - 1];
                                var_18 = ((/* implicit */_Bool) 1962090257437202204LL);
                                var_19 |= ((/* implicit */_Bool) (+((+(((/* implicit */int) min((((/* implicit */unsigned short) (short)31744)), (arr_14 [(short)4] [i_1 - 1] [i_2] [i_4] [i_4] [(short)4] [i_0]))))))));
                            }
                            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                            {
                                var_20 ^= ((((((/* implicit */_Bool) 1962090257437202160LL)) ? (((((/* implicit */_Bool) -1962090257437202191LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)4))) : (1962090257437202200LL))) : (1962090257437202204LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [(unsigned short)17]))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22480))) == (max((arr_9 [i_0] [i_2] [i_5]), (((/* implicit */long long int) (short)618)))))))) < (arr_13 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_5] [i_5])));
                                arr_19 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) ((short) arr_2 [i_0]))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((-1962090257437202187LL) == (1152921504472629248LL)))), (arr_7 [i_1 + 2])))) ? (((/* implicit */int) arr_7 [i_5])) : ((+(((/* implicit */int) (_Bool)1))))));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_13)) + (arr_2 [i_1 + 1]))))));
                                arr_22 [i_0] [i_0] [i_2] [(short)7] [i_3] [i_6] = ((/* implicit */long long int) var_5);
                                var_24 = ((((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */long long int) 1536133992U)) : (-1152921504472629249LL))) == (((/* implicit */long long int) ((/* implicit */int) var_7))));
                                var_25 = arr_10 [i_1 - 1] [i_6 + 2] [i_6 + 2] [i_6 + 2];
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 19; i_7 += 1) 
                            {
                                arr_27 [i_3] = ((/* implicit */long long int) ((var_13) / (((/* implicit */int) (unsigned char)146))));
                                arr_28 [i_0] [i_2] [i_1] [14U] [i_7 + 1] &= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_0]);
                            }
                            var_26 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) arr_25 [i_0] [i_1]);
                var_28 = ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_0]))) / (6640828866113773337LL));
            }
        } 
    } 
    var_29 *= ((/* implicit */unsigned char) var_13);
}
