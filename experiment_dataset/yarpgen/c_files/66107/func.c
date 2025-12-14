/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66107
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
    var_17 = ((/* implicit */unsigned int) 4721896075556913606ULL);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-65))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) / (-9223372036854775806LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((13391311932513747101ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                                var_20 = ((/* implicit */signed char) arr_15 [i_1] [(_Bool)1]);
                                arr_16 [i_3] [i_3] [i_2 + 2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((signed char) (short)18032));
                            }
                        } 
                    } 
                } 
                var_21 += ((/* implicit */_Bool) 7438349476400146889LL);
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-3))))) ? (((/* implicit */int) min(((unsigned short)48795), (((/* implicit */unsigned short) arr_11 [i_1 - 4] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */int) arr_7 [i_1 + 1]))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)3)) / (15)))), (arr_8 [i_0] [i_1] [i_1 - 2] [i_0]))) : (((arr_13 [i_0] [6ULL] [14] [i_1 - 3] [14]) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 3])))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_3 [i_5] [i_5])) | (((/* implicit */int) ((((/* implicit */unsigned long long int) 1048448U)) == (arr_15 [i_5] [i_5])))))));
        var_24 *= ((/* implicit */unsigned char) 536870912);
        arr_19 [i_5] = ((/* implicit */short) (unsigned char)224);
    }
    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)8))));
        arr_23 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((unsigned short) arr_20 [i_6]))) ? (var_15) : (var_15))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_6] [i_6 - 1]))))), (max((((/* implicit */unsigned int) (unsigned char)255)), (4256274571U))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */int) ((short) ((unsigned char) max((((/* implicit */int) (signed char)15)), (arr_26 [i_10] [i_7 + 2] [i_7 + 2] [i_6 + 1])))));
                                var_26 = arr_28 [i_6 + 1] [i_6 - 1] [17U] [i_6 + 1];
                                var_27 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)5978)), (2147483647)));
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_28 [i_8] [i_7] [0] [i_6]), (((/* implicit */short) var_7))))) << (((((((/* implicit */_Bool) (short)127)) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30720))))) - (65520U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_1)), (-5090284146555562395LL)))))) : (((((/* implicit */_Bool) arr_28 [i_6] [i_6 - 1] [(_Bool)1] [i_6 - 1])) ? (-12LL) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)64)))))))));
                    arr_32 [i_6] [i_7 + 4] [i_8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_30 [i_6 - 1] [i_6 - 1] [i_6 - 1] [(unsigned short)0] [i_6] [i_6]), (((((/* implicit */int) (short)19624)) | (((/* implicit */int) var_7))))))) ? (max((arr_20 [i_6]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757)))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) (((+(((long long int) (short)-13196)))) <= (((/* implicit */long long int) ((((1800371477) & (((/* implicit */int) (unsigned char)186)))) % (((/* implicit */int) ((unsigned short) (short)30720))))))));
        arr_33 [i_6] = ((/* implicit */int) ((_Bool) ((unsigned int) -5090284146555562395LL)));
    }
    var_30 += ((/* implicit */signed char) max(((short)32757), (((/* implicit */short) var_16))));
}
