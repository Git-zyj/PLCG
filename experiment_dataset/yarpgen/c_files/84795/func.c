/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84795
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 15206222407971200031ULL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((146608000U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (((/* implicit */int) ((unsigned short) max(((unsigned short)55288), ((unsigned short)10235)))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned short) var_4)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((signed char) var_13));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= ((-(var_1)))));
                    var_20 = ((/* implicit */unsigned long long int) ((arr_3 [i_0 - 3] [i_0]) ? (582653009522726007LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned int) ((signed char) (unsigned short)10260))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                                arr_17 [(unsigned char)5] [(unsigned char)5] [i_3] [i_4] [i_4] [i_5] [i_0] = ((unsigned short) ((var_12) ? (12112907133005242766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))) : (arr_15 [i_0] [i_0])));
                                var_25 = ((/* implicit */unsigned char) ((unsigned short) var_11));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((arr_1 [i_0] [i_0 + 2]) < (20ULL)));
                }
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) (!(((/* implicit */_Bool) var_5)))))));
                var_27 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)0));
                var_28 = ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)100))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) var_15);
}
