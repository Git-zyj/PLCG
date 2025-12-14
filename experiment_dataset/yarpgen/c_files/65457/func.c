/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65457
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 1217441206U)), (5690685786336604035ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_3))), (((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (((/* implicit */unsigned long long int) ((arr_4 [i_1 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 7401930661636998595LL)))) : (var_6))))));
                var_16 &= var_4;
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 2408161246U)), (12756058287372947570ULL))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_12)) && (var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((arr_3 [i_2] [(unsigned short)0]), (var_7)))));
                    arr_7 [i_1] [i_1 + 2] [i_1] = 56277021966363215LL;
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned int) var_11);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_4);
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_20 &= ((/* implicit */short) min((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) arr_4 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_5 [i_0] [i_1 + 2] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned int) arr_1 [i_3] [i_3])) : (((((/* implicit */_Bool) 2408161246U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) : (1217441206U))))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_10 [i_0] [i_3]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                arr_18 [i_3] [i_0] [i_0] |= ((/* implicit */signed char) ((short) arr_0 [i_0]));
                                var_22 = (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)33453)) : (((/* implicit */int) (unsigned short)65510))))));
                                var_23 = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [14LL] [i_7] [i_7] [14LL] |= ((/* implicit */_Bool) ((unsigned int) var_2));
                    arr_29 [i_6] [i_7 - 1] [(unsigned char)4] [i_7] = ((/* implicit */unsigned short) arr_24 [i_6] [i_7] [i_8]);
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (8170076575726471896ULL)));
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
}
