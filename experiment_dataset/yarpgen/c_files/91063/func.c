/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91063
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
    var_16 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] &= ((/* implicit */_Bool) 5754265702529257945LL);
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2565104412U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)68)))))))) : (((((/* implicit */_Bool) (unsigned short)57287)) ? (((/* implicit */int) ((unsigned char) 2LL))) : (((/* implicit */int) ((signed char) (short)-9497)))))));
                                var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) (short)1023)) > (((/* implicit */int) (signed char)3)))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (10ULL) : (((((/* implicit */_Bool) var_8)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89)))))));
                            }
                        } 
                    } 
                    arr_22 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */int) var_6);
                }
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)3359))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-34))))) ? ((-(((/* implicit */int) (short)3355)))) : ((-(1379107572))))))));
                    var_22 &= ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) 4294967295U)), (-4191472863792394463LL))));
                }
                for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        arr_30 [i_10] [i_10] [i_0] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (((long long int) var_6))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (unsigned short)7))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (unsigned char)15))));
                        var_25 = ((/* implicit */_Bool) (~(var_1)));
                    }
                    var_26 *= ((/* implicit */short) var_15);
                }
            }
        } 
    } 
}
