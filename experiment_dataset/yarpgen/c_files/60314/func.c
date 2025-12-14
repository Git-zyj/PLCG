/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60314
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (-4395436930206299461LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_0] |= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))))) | (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-59)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 4; i_2 < 12; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_2] = (~(((((/* implicit */_Bool) (short)8160)) ? (((/* implicit */unsigned long long int) 525012271430959691LL)) : (918331291936254112ULL))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [(unsigned char)6] [i_0] [i_3] [i_1] = ((1724705032) % (2147483647));
                                var_14 -= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-6)) / (((/* implicit */int) (signed char)-8))));
                                arr_19 [i_0] [i_0] [i_3] [i_4] |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                                var_15 = ((/* implicit */short) ((signed char) arr_4 [i_0] [i_0] [i_2 - 2]));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)59))));
                }
                for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned long long int) ((int) ((((/* implicit */_Bool) arr_20 [i_0] [8] [i_5] [i_5])) ? (((/* implicit */long long int) var_3)) : (arr_4 [i_0] [i_0] [i_0]))))))));
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)));
                }
                var_18 += ((/* implicit */int) (signed char)0);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */long long int) var_5)) + (((var_11) ^ (((/* implicit */long long int) 80415596))))));
                            var_20 = ((/* implicit */int) max((var_20), (((1269153776) % (1071781353)))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) -3)) / (-4395436930206299461LL))))));
                            arr_30 [i_0] [i_0] [i_6] [i_6] [i_7] [i_0] |= ((/* implicit */signed char) ((_Bool) (-(((((((/* implicit */int) (signed char)-121)) + (2147483647))) << (((var_8) - (7345837019537528995LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 |= ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */int) (short)-8161)), (672143653)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (var_0))), (((/* implicit */long long int) var_12))));
}
