/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93984
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)11805))) + (1537135541U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) 734374585)) == (1537135569U)));
                    var_20 *= ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [(unsigned short)8] |= ((/* implicit */unsigned int) ((((int) ((((/* implicit */int) (unsigned short)43687)) + (((/* implicit */int) (unsigned short)44239))))) == (((/* implicit */int) ((((/* implicit */int) ((signed char) 1537135529U))) <= (((/* implicit */int) (short)16957)))))));
                                var_21 = 8787503087616LL;
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0 + 1] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((signed char) 1537135554U)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            for (long long int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) == (var_7)));
                    arr_24 [i_5] [i_7] = ((/* implicit */unsigned long long int) (signed char)-16);
                }
            } 
        } 
    } 
}
