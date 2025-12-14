/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85436
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
    var_14 = ((/* implicit */_Bool) 2305834213120671744ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                var_15 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-20))))) ? (max((2984584299U), (3047530679U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 4; i_4 < 8; i_4 += 1) 
                            {
                                var_16 = (~(2984584274U));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4 - 3]))) ? (((((/* implicit */int) (unsigned char)165)) | (((/* implicit */int) (unsigned char)90)))) : ((+(((/* implicit */int) (unsigned char)165))))));
                                var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (unsigned short)20985)))));
                                var_19 = ((/* implicit */unsigned long long int) max(((-(2984584301U))), ((-(2984584305U)))));
                                var_20 = ((/* implicit */int) (~(1310382979U)));
                            }
                            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 828023173U))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((((((long long int) 1310382995U)) & (((/* implicit */long long int) ((((/* implicit */_Bool) 11938020506604574320ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (828023173U)))))) << (((((/* implicit */int) ((unsigned char) (unsigned char)98))) - (98)))))));
                            }
                            for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 3) 
                            {
                                arr_20 [i_0] [(unsigned char)2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)18))));
                                var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) (-(1310382987U)))) ? (min((11938020506604574325ULL), (((/* implicit */unsigned long long int) -124875460)))) : ((~(6508723567104977294ULL))))) : (((/* implicit */unsigned long long int) ((int) (unsigned char)4)))));
                                var_24 = ((/* implicit */unsigned int) arr_9 [i_0]);
                            }
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(max((1349793305U), (((828023144U) + (3466944152U))))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)19888)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-62)), ((unsigned char)66)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1310382996U))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -1116625473)) != (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47191))) : (26LL))))))) % (4294967295U)));
}
