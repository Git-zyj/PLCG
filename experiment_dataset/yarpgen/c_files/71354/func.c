/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71354
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
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) + (((/* implicit */int) (short)-30073)))) - (min((((((/* implicit */int) (short)-30081)) - (((/* implicit */int) var_6)))), (((/* implicit */int) (short)-30073))))));
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) (short)-30081));
    var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(arr_9 [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_3] [i_2 - 3])))), (((var_3) / (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2 - 2] [i_1] [i_4]))))));
                                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) min((arr_1 [i_0]), (var_8))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (min((2068689195U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [(unsigned short)6] [i_4])) ? (0) : (((/* implicit */int) (short)30081)))))))));
                                var_20 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (short)-30096)) ? (((((/* implicit */int) arr_2 [i_0] [19])) >> (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_1])))) : (((/* implicit */int) (short)30096)))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) min(((+((+(var_0))))), (((/* implicit */unsigned long long int) min((((0) * (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)253)) * (((/* implicit */int) (unsigned short)12955))))) * (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_8 [i_0] [i_1] [i_2] [19] [i_3] [(unsigned char)18])))))) ? (var_12) : (min((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]) | (((/* implicit */unsigned long long int) 1222696718)))), (((/* implicit */unsigned long long int) (short)-30050)))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [7ULL] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((min((max((var_2), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 2226278111U)) >= (var_4)))))) << (((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_2 - 1]) - (1736469084)))))) : (((/* implicit */_Bool) ((min((max((var_2), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 2226278111U)) >= (var_4)))))) << (((((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_2 - 1]) - (1736469084))) + (358530552))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)30080))))))));
        var_23 = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) arr_5 [i_0] [10LL] [i_0])) ? (((/* implicit */unsigned long long int) 255U)) : (arr_8 [i_0] [i_0] [i_0] [i_0] [(signed char)16] [i_0]))))), (((/* implicit */unsigned long long int) (unsigned short)33609))));
    }
}
