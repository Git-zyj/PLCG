/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64499
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
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) min((var_0), (var_15)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        var_18 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-114)) + (((((/* implicit */_Bool) (unsigned short)51551)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-115))))))));
        arr_2 [(unsigned short)16] = ((/* implicit */unsigned int) ((((var_10) + (((/* implicit */unsigned long long int) var_5)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_19 = ((/* implicit */int) ((signed char) var_0));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (unsigned int i_3 = 4; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_20 = var_1;
                        var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (signed char)106)), (0U))) << ((((~(16U))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((var_3), (max((var_3), (max((var_15), (4294967289U))))))))));
                    }
                } 
            } 
            var_23 *= ((/* implicit */short) ((5441045532048960200ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106)))));
            var_24 = ((/* implicit */_Bool) ((((max((4294967292U), (var_15))) << (((var_15) - (1389847813U))))) / ((~(var_8)))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_25 -= ((/* implicit */_Bool) min((((max((13005698541660591436ULL), (5441045532048960200ULL))) * (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)84))))) | (((/* implicit */int) (signed char)-51)))))));
                        var_26 = ((/* implicit */short) 0U);
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned short) (unsigned char)84);
    }
}
