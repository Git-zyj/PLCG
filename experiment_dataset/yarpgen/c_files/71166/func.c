/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71166
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((_Bool) (unsigned char)158)) ? (((/* implicit */int) max((arr_1 [i_0 + 4] [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)51)) || (((/* implicit */_Bool) 0ULL)))))))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_0 - 2])) ? (((/* implicit */int) max(((unsigned char)98), ((unsigned char)97)))) : (((/* implicit */int) ((short) var_8)))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) 5959483287484824116LL);
                        var_19 = ((/* implicit */unsigned short) (unsigned char)157);
                        arr_10 [i_0] [i_3] [13LL] [2U] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [i_1])), (11091716758922428807ULL)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(((((int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
                        arr_13 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(var_0)))) < (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)36), (var_5))))) : (((arr_6 [i_1] [(unsigned char)18] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))))))));
                        arr_14 [i_0] [19U] [i_1] [i_4] = ((/* implicit */unsigned int) (short)-8100);
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_2 [i_0 + 1] [i_0 + 4])))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (11374529365861054788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)104)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */int) ((short) var_6))) << (((((/* implicit */int) var_5)) - (24)))));
    var_24 = ((/* implicit */signed char) var_8);
    var_25 = ((/* implicit */signed char) (-(14ULL)));
}
