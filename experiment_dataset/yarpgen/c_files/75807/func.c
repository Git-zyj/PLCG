/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75807
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (signed char)127))))), (min((((/* implicit */unsigned long long int) (unsigned char)123)), (13978117939435498456ULL)))))));
    var_21 -= ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 12528757528495230273ULL);
                    var_22 = ((/* implicit */signed char) 8471721543981616407LL);
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_16 [i_5] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))) >= (((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_14 [i_5] [i_4] [i_3] [i_1 - 1] [i_1] [i_0] [i_0]) : (arr_7 [i_1])))));
                                arr_17 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)120))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_3] [i_3 - 2] [i_0] [i_0] [i_1] [i_1 - 2])) : (((/* implicit */int) (signed char)83))));
                    var_24 = ((/* implicit */long long int) 17256140708140173218ULL);
                    var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))) : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] [i_3 - 2])))));
                }
                var_26 = ((/* implicit */unsigned char) ((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_1]) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)80)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_8);
}
