/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79179
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
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) var_2))))) : (((((/* implicit */_Bool) var_10)) ? (10755672236289022225ULL) : (((/* implicit */unsigned long long int) 4294967290U)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-21493))))))));
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5442969230588880473LL)) ? (((/* implicit */unsigned long long int) 2691646673U)) : (14844409698355191164ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4294967290U))) : (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (13U))))))));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_11)), (max((var_7), (((/* implicit */unsigned int) var_1))))));
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((2691646673U) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] [i_4] [i_0] = (+(((((/* implicit */_Bool) 482879784)) ? (2717434289810763055ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))))));
                                arr_15 [i_0] [i_1] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 482879784)) * (1603320626U)));
                                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28274)) && ((!(((/* implicit */_Bool) 5U))))))), (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) var_9))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 1603320623U))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */unsigned long long int) 1943371314U);
                    var_22 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) 990158587U)), (((((/* implicit */_Bool) min((3304808694U), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */long long int) max((arr_1 [i_0 - 1]), (((/* implicit */int) var_5))))) : (min((((/* implicit */long long int) var_13)), (1982767036090714106LL)))))));
                    arr_16 [i_1] = ((((/* implicit */_Bool) min((arr_5 [i_0 + 1] [i_1] [i_2]), (arr_5 [i_0 + 1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) 2691646673U)) ? (((/* implicit */long long int) arr_11 [i_2] [i_0 + 1] [i_0] [i_2])) : (arr_9 [i_0] [i_2]))) : (min((-4639616266528426819LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)112)) * (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))))));
                    var_23 -= ((/* implicit */unsigned char) ((max((-1982767036090714107LL), (((/* implicit */long long int) 990158583U)))) != (((/* implicit */long long int) max((arr_1 [i_0 + 1]), (((((/* implicit */int) var_6)) ^ (-1921398794))))))));
                }
            } 
        } 
    } 
}
