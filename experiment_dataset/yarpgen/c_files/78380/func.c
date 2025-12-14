/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78380
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (signed char)37))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [20ULL] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) var_10);
                                arr_16 [i_0] [(unsigned short)17] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (signed char)75));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 67107840)) ^ (((unsigned long long int) arr_5 [i_4] [i_2])))) >> (((max((var_2), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) 1671576155U)) : (var_9))))) - (7887617390727586488ULL))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 7143783563903324472ULL)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned short)0))));
                var_22 += ((/* implicit */signed char) -620291403);
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_3 [i_0] [10])))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [(unsigned short)18] [i_1] [(unsigned short)18] [2] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_9)))))) & (var_16)));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 20; i_7 += 3) 
                            {
                                arr_28 [i_5] [i_5] &= ((/* implicit */unsigned short) var_15);
                                var_24 *= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-72)))))));
                            }
                            for (signed char i_8 = 1; i_8 < 20; i_8 += 4) 
                            {
                                arr_31 [i_0 + 1] [i_5] [16] [i_6] [i_5] &= ((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned long long int) arr_26 [i_5] [2U] [i_8] [i_8 + 1] [i_8]))));
                                var_25 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_1)) ? (var_12) : (var_5))) & (((/* implicit */int) (signed char)-27))))));
                            }
                            arr_32 [i_0] [i_5] [i_1] [i_0] [i_0] = var_18;
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((int) ((long long int) (+(((/* implicit */int) var_11)))))))));
}
