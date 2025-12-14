/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66277
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = max((var_1), (min((((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))), (((/* implicit */long long int) (unsigned short)41857)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                            var_12 = ((/* implicit */long long int) var_7);
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max(((-(arr_8 [i_3] [i_2] [i_0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) var_7)))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] &= ((/* implicit */unsigned char) max((((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) == (9223372036854775807LL))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), (var_5)))) : ((~(((/* implicit */int) (unsigned short)41852)))))), (((/* implicit */int) var_9))));
                var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(var_3)))))) ? ((-(((/* implicit */int) (signed char)-112)))) : (((int) (_Bool)1))));
                arr_11 [i_1] = min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)41857)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)233)), ((unsigned short)14218)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (3604114612391921564ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((min((((long long int) -4042791781653838873LL)), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_5] [i_6]))))))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_6] [i_6] [7ULL]))))))));
                    var_16 = ((/* implicit */short) ((long long int) var_5));
                    var_17 -= ((/* implicit */short) max((var_5), ((unsigned short)12956)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (-(min((min((-1793446876), (((/* implicit */int) var_0)))), (((/* implicit */int) var_6))))));
}
