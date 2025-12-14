/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59343
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
    var_19 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 4] [i_2 - 1])) > (arr_9 [i_1 + 2] [i_1] [i_2 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */int) arr_2 [(unsigned short)19]);
                                var_22 &= ((/* implicit */int) (short)19468);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0 + 1] [i_0] [i_0] = ((((/* implicit */_Bool) ((short) arr_2 [i_0 - 1]))) ? (((unsigned long long int) (short)-19452)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (-641831324) : (((/* implicit */int) (short)-1510))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */short) ((((/* implicit */int) ((short) ((_Bool) arr_13 [i_6] [i_5] [i_5] [i_5] [i_5])))) << (((((long long int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_6])) + (68LL)))));
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_8] [i_7 + 1] [i_7] [i_6] [i_5])) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (short)-19454))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-19468)), (176048082U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [i_5] [i_7] [i_7]), (((/* implicit */unsigned short) (short)-19452)))))) : (((unsigned int) (unsigned short)58944))))));
                            arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (+(((unsigned int) ((unsigned short) 5370398451178343048ULL)))));
                            arr_27 [i_5] [i_6] [i_7] [i_8] = arr_1 [i_8];
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) ((66563818U) * (((/* implicit */unsigned int) 641831320))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((int) ((short) var_8)));
}
