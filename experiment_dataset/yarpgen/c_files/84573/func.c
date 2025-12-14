/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84573
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((arr_2 [i_0] [i_0] [(unsigned short)0]) / (((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (var_13)))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) - (((/* implicit */int) (short)-19639))))))))));
                var_21 = ((/* implicit */long long int) (unsigned short)51528);
                arr_4 [i_0] [(unsigned char)14] [i_1] = ((/* implicit */long long int) (short)-11737);
            }
        } 
    } 
    var_22 += ((/* implicit */signed char) var_15);
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] [10] &= ((/* implicit */unsigned int) max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) 2147483647U))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_10 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)6244)) < (((((/* implicit */int) (short)32417)) - (674793008))))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_17))))));
            arr_11 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_7)), ((short)32417)))), (min((var_17), (((/* implicit */unsigned long long int) var_16))))));
            var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_19)), (((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) -674793011)))) - (((/* implicit */long long int) ((/* implicit */int) (short)19638)))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3565782718712748829LL)) ? (((/* implicit */int) (short)-21294)) : (((/* implicit */int) arr_6 [i_4]))))))))));
                        arr_17 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */signed char) -5963035019264711365LL);
                    }
                } 
            } 
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_2] [i_6] [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(2156088313510945542LL)))))) ? (-5963035019264711365LL) : (((/* implicit */long long int) var_5))));
            arr_22 [i_6] [i_2] [i_2] = ((/* implicit */unsigned int) min((2047), (((/* implicit */int) (short)-5879))));
            arr_23 [i_2] [i_2] [i_2] = ((/* implicit */int) -1LL);
        }
    }
    var_25 = ((/* implicit */short) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_1))));
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) (short)2889))))))));
}
