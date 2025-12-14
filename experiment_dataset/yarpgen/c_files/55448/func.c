/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55448
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
    var_15 *= ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) var_8);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? ((+(arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) -95091227)) : (arr_1 [i_0] [i_0])))));
        var_18 = ((/* implicit */unsigned char) (_Bool)0);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) 2064921007);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) -2064921008))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-2064921008)))) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)16] [i_1] [i_2 + 2] [i_3])) : ((-(2064921007)))))) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_3 [i_2]))));
                        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(var_3)))))) || (((/* implicit */_Bool) max((-2064921008), (((/* implicit */int) ((_Bool) 1317331314U))))))));
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_22 [i_0] [i_4] [i_7])) ? (((var_0) | (((/* implicit */unsigned long long int) 48)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_0] [i_0] [i_0]))))))) == (max((15849258869062326274ULL), (((/* implicit */unsigned long long int) ((17877895595673945302ULL) < (((/* implicit */unsigned long long int) var_3)))))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_22 [i_4] [i_0] [i_4]))));
                            arr_23 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_24 [i_0] [i_4] [i_4] = ((/* implicit */int) ((unsigned short) arr_19 [i_0]));
                    }
                } 
            } 
            var_24 = max((((/* implicit */int) var_14)), (max(((-(((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)127))))))));
        }
    }
    var_25 = ((/* implicit */unsigned short) ((var_1) | (((/* implicit */int) var_14))));
}
