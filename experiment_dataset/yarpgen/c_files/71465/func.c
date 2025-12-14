/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71465
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
    var_19 &= (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)58)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_21 &= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((var_13) + (2147483647))) << (((((/* implicit */int) var_8)) - (175))))))) << (((((-1391390931) + (1391390959))) - (24)))));
                            var_22 -= ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_2 [i_3] [i_3 + 1] [i_3 - 2]))))));
                            var_23 = ((/* implicit */int) max((var_23), (((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3)))) & ((~(((/* implicit */int) (_Bool)1)))))) ^ (min((max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (signed char)-58)))), (((/* implicit */int) min((arr_6 [(unsigned char)12] [(short)8]), (((/* implicit */short) var_8)))))))))));
                            var_24 ^= ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((short) var_6))));
    /* LoopNest 3 */
    for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1391390948)) - (13935320848813679577ULL))))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) max((var_8), (arr_13 [i_4 + 4] [i_4 + 3])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned long long int) (signed char)55);
                                arr_23 [(_Bool)1] [(signed char)2] [8U] [i_7] [i_7] [i_7] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)217)))), (((int) ((((/* implicit */int) arr_11 [i_8])) + (((/* implicit */int) arr_14 [i_4] [i_7] [(signed char)15])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (max((((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_10))))));
}
