/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83288
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
    var_16 = ((/* implicit */short) max((((long long int) (signed char)127)), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1 + 2] [i_1 + 2] [i_0]))) ? (((16ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) & (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_0]))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)9))))) ? (((arr_1 [i_0]) % (((/* implicit */int) var_14)))) : ((~(((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned long long int) var_1);
                                var_19 = ((/* implicit */short) ((((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_0]))))) & (var_3)));
                                var_20 = ((/* implicit */unsigned int) ((int) (~(var_6))));
                                arr_13 [i_0] = ((/* implicit */long long int) min((18446744073709551599ULL), (max((((/* implicit */unsigned long long int) (unsigned char)9)), (((((/* implicit */_Bool) 32ULL)) ? (18446744073709551583ULL) : (38ULL)))))));
                                arr_14 [i_4] [i_4] [10] [i_4] [6ULL] &= ((/* implicit */unsigned int) (unsigned char)9);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 7; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)16)))) ? (((arr_11 [i_6] [i_5 + 1] [i_1] [i_0]) % (var_3))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)5))))))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-122))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17210)) << (((var_13) + (566341999)))))) : (min((2144943023681203994LL), (((/* implicit */long long int) (signed char)123))))))) : (min((((/* implicit */unsigned long long int) (unsigned char)246)), (((((/* implicit */_Bool) (unsigned char)10)) ? (18446744073709551583ULL) : (((/* implicit */unsigned long long int) -10340420))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
