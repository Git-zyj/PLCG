/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91617
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
    var_13 = ((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))));
                    var_15 ^= ((/* implicit */short) max((((/* implicit */int) (signed char)-114)), (-2147483647)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [14] [14] [i_0] [i_3] [i_3] [(signed char)6] [i_2] = ((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) (short)29034)) ? (((/* implicit */int) arr_10 [10ULL] [10ULL] [i_2] [10ULL])) : (2147483647))) >> (((((long long int) (short)12792)) - (12776LL))))));
                                var_16 &= ((/* implicit */long long int) max(((~(max((((/* implicit */unsigned long long int) var_12)), (7786583781863157527ULL))))), (((((/* implicit */_Bool) (short)-17701)) ? (11003003687688761656ULL) : (17592186044415ULL)))));
                            }
                        } 
                    } 
                    var_17 = (-(((/* implicit */int) var_4)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_4);
    var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-8647715141354991222LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((18381772949021543859ULL), (((/* implicit */unsigned long long int) (short)-12798)))))))));
}
