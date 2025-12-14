/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6163
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0 - 2] [i_0] [i_0 + 1])), (arr_5 [i_0 - 2] [i_0 - 1] [i_0 + 1])))), (((min((((/* implicit */int) var_2)), (1394172960))) * (((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((/* implicit */int) var_2)) : (arr_4 [i_0 - 2]))))))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0 - 3] [(_Bool)1]), (arr_0 [i_0 - 3] [i_0 + 1]))))) > (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3604))) * (0U)))) ? (((unsigned int) arr_5 [i_0] [i_1] [(unsigned short)2])) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)147)))))))));
                        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_1 [i_0 + 1] [i_2 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))))))));
                        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 2) 
                    {
                        arr_11 [i_0 - 4] [i_1] [i_2] [i_4 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((-9177310940144557480LL) <= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)185)) | (((/* implicit */int) (unsigned short)27305))))))))));
                        var_20 += ((/* implicit */unsigned char) ((max((3513390564U), (min((arr_6 [i_0 - 1] [i_0 - 3] [i_0]), (((/* implicit */unsigned int) var_6)))))) | (0U)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */int) min((max((((arr_8 [i_0 - 3] [i_0 - 3] [i_2] [i_5] [i_5] [i_5]) << (((4095474094U) - (4095474094U))))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)177)), (var_5)))))), (((/* implicit */long long int) max((arr_9 [i_0] [i_0 + 1] [0] [i_0 + 1]), (arr_9 [i_0] [i_0 - 2] [i_0] [i_0 - 2]))))));
                        var_22 = ((/* implicit */short) var_0);
                        var_23 = ((/* implicit */int) min((max((min((arr_2 [i_0 + 1] [i_1] [i_2 + 1]), (((/* implicit */unsigned int) (unsigned char)144)))), (min((((/* implicit */unsigned int) -1511622066)), (4294967293U))))), (min((min((((/* implicit */unsigned int) (_Bool)1)), (8U))), (((/* implicit */unsigned int) max(((short)32767), (((/* implicit */short) var_2)))))))));
                        arr_16 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) 9U);
                        var_24 ^= ((/* implicit */int) ((_Bool) ((_Bool) ((((/* implicit */int) arr_0 [i_2] [i_2])) <= (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 - 1]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1527280090025567283LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1])) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_2 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8492488005699105046LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_3 [(unsigned short)6] [6ULL] [i_6])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)60962))))))));
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)84)) || (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2 - 2] [i_6])))) ? (var_0) : (((/* implicit */int) min((arr_0 [i_6] [i_2 - 1]), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0 - 4] [i_0])))))));
                    }
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((((_Bool) arr_1 [i_2] [i_0])) ? ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2 - 2])))) : (((((/* implicit */_Bool) 8700434540241951791LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_0 - 4])))))) | (((/* implicit */int) ((((arr_19 [i_0] [i_0] [10U] [i_0 - 2]) << (((((/* implicit */int) (short)27816)) - (27789))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766)))))))))));
                    var_28 = ((/* implicit */int) (-(((unsigned int) (_Bool)0))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) ((var_12) || (var_14)))) == (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (_Bool)0)))))))), (var_4))))));
    var_30 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((var_2) ? (min((98614061), (((/* implicit */int) var_13)))) : (((/* implicit */int) (short)2504))))), (((((/* implicit */long long int) var_5)) ^ (min((5988902300359750303LL), (((/* implicit */long long int) var_15))))))));
}
