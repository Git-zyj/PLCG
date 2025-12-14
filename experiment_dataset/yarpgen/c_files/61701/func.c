/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61701
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((_Bool) min((((((/* implicit */_Bool) 6438318300623746634ULL)) ? (1241010200U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))))), (((((/* implicit */_Bool) 255U)) ? (4294967040U) : (4294967040U))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((255U), (255U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)16693))))))) * (max((((/* implicit */unsigned int) (signed char)-100)), (4294967040U)))));
                                var_15 = max((((min((4294967057U), (255U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_4 + 1] [i_2] [(unsigned short)1]))))), (((/* implicit */unsigned int) ((arr_4 [i_4 - 3]) > (((((/* implicit */_Bool) 276U)) ? (((/* implicit */int) (short)-2184)) : (((/* implicit */int) (unsigned short)2047))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [(short)0] [i_1] [i_2] [i_5 - 1] [12] = ((/* implicit */unsigned short) ((short) 1203041485U));
                                arr_24 [(unsigned short)10] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (+(((unsigned long long int) (signed char)-125))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) min((var_16), (4294967040U)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (-(((unsigned int) ((((/* implicit */_Bool) var_11)) ? (4294967028U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) 
    {
        for (int i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)60614)) | (((/* implicit */int) ((max((((/* implicit */long long int) (_Bool)1)), (7023821890142115280LL))) != (((/* implicit */long long int) (~(255U)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    for (int i_10 = 4; i_10 < 13; i_10 += 3) 
                    {
                        for (int i_11 = 4; i_11 < 12; i_11 += 3) 
                        {
                            {
                                arr_38 [i_7] [i_7] [(unsigned short)10] [i_7] [i_7 + 2] = ((/* implicit */short) (+(((/* implicit */int) arr_33 [i_7 + 2] [i_8 + 3] [i_8 + 3] [i_10] [i_11]))));
                                arr_39 [i_7] [i_7] [i_7 - 2] [i_8] [i_9] [i_7] [i_11 + 1] = ((((/* implicit */int) (short)5437)) << (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */short) ((unsigned int) (!(((((/* implicit */_Bool) (short)-27576)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967019U)))) > (6442450944ULL)));
}
