/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76651
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) (~(max((var_12), (((/* implicit */long long int) min((var_7), (((/* implicit */int) arr_1 [i_0])))))))));
                                var_15 ^= ((/* implicit */signed char) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) arr_10 [i_2] [6U]))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max(((+(((/* implicit */int) (_Bool)1)))), (max((var_7), (((/* implicit */int) arr_1 [i_3])))))))));
                            }
                            var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2] [(unsigned short)10] [17] [(unsigned short)10] [i_0]))) & (max((var_2), (((/* implicit */unsigned int) arr_2 [i_0 + 3] [i_3]))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_13 [i_0 + 3] [i_0] [i_0] [i_1]))))) > (((/* implicit */int) ((557173690602491544LL) >= (((/* implicit */long long int) -226718826)))))))), ((+(max((((/* implicit */long long int) arr_0 [i_0])), (var_13)))))));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) var_7);
                                arr_23 [i_0] [(unsigned char)5] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_6 [i_7 - 2] [i_6] [i_1])))) & (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) max((arr_22 [i_0] [16ULL] [19ULL] [i_5] [15] [i_7 + 1]), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_9)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)115)), ((short)-21029)))) | ((+(((((/* implicit */int) (unsigned char)32)) * (((/* implicit */int) (signed char)-123))))))));
}
