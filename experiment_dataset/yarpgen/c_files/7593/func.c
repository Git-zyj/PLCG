/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7593
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) var_1);
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(2)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */_Bool) var_9);
                            arr_12 [i_3] = ((/* implicit */unsigned char) (~(6146081418696350448LL)));
                            arr_13 [i_0] [(_Bool)1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) -6146081418696350448LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-6146081418696350458LL)))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) (-(((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (6146081418696350428LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [11] [i_0] [i_1] [i_1 - 2]))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_0))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 6146081418696350455LL)) ? (((/* implicit */int) (_Bool)1)) : (1387500503))))) ? (((/* implicit */int) (short)-18371)) : (((/* implicit */int) var_2))));
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (signed char i_7 = 2; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_23 [i_5 - 1] [i_5 - 1] [i_6] [i_7 + 1] [i_7] [i_7 + 1])) ? ((-(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) arr_22 [i_4] [i_6])))))), (((/* implicit */int) var_3))));
                        arr_24 [i_4] [i_7 + 2] [(short)11] [i_5] [(short)0] [i_4] = ((/* implicit */signed char) (short)18371);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_29 [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)205))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) -1077071564)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (((/* implicit */int) (short)18370)) : (((/* implicit */int) var_5))))))));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)55198)))) != (((/* implicit */int) var_5))));
        var_19 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (3941732894366969368LL)))) ? (((/* implicit */int) arr_25 [i_8 + 1])) : (((/* implicit */int) var_4)));
    }
    for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 1) 
    {
        var_20 |= ((/* implicit */unsigned char) (-(((arr_10 [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_9 + 2]) << (((((/* implicit */int) min((((/* implicit */short) (unsigned char)51)), (arr_25 [i_9])))) + (12757)))))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 4; i_10 < 10; i_10 += 2) 
        {
            arr_37 [i_9] [i_10] = ((/* implicit */short) (signed char)95);
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */_Bool) -6146081418696350430LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (16515072U)))) & (((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9 + 3])) ? (6146081418696350428LL) : (((/* implicit */long long int) 4278452223U)))))), (((/* implicit */long long int) (short)18390)))))));
        }
        arr_38 [(unsigned char)7] = ((((/* implicit */_Bool) (short)18108)) ? (((/* implicit */int) (short)-22969)) : (((/* implicit */int) (short)27207)));
    }
}
