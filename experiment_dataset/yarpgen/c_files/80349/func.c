/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80349
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 100851947)) | (arr_4 [i_0] [i_2])))) ? (((/* implicit */unsigned int) 1073741823)) : (613014922U))))));
                                var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((((/* implicit */int) (unsigned char)99)) * (((/* implicit */int) (unsigned short)127))))))) | ((~(((/* implicit */int) (short)1023))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) ((unsigned int) arr_10 [i_2]));
                    var_17 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (_Bool)1)), (arr_2 [i_2]))), (((/* implicit */int) ((3977138270U) != (1654997612U))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */_Bool) ((short) 4294705152U));
                    var_18 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_0])), (1437975550U))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [(unsigned short)16] [i_1] [(unsigned short)16])), (arr_5 [i_0] [i_1] [i_2] [i_0]))))))) >> (((max((arr_8 [(unsigned short)10] [i_0] [i_1] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_0]))) + (3657610655159051167LL)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 15; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                arr_17 [i_6] = ((/* implicit */unsigned short) (unsigned char)244);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32640)) ? (((/* implicit */int) (unsigned short)32640)) : (((/* implicit */int) (unsigned short)12288))));
            }
        } 
    } 
}
