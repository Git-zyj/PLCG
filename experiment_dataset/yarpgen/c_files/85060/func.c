/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85060
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))) % (8111402798676550861ULL)));
                                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned char)13] [i_3] [i_4])) == (((/* implicit */int) (unsigned short)65524))))), (arr_5 [i_1 + 2]))));
                                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)54111))) ? (max((var_3), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2] [(unsigned short)0])))) : (((/* implicit */long long int) var_9))));
                                var_20 = ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [(unsigned short)3]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1] [i_1]);
                var_21 = ((/* implicit */int) min((((unsigned int) 747962101U)), (((/* implicit */unsigned int) max((3), (arr_7 [1] [1] [i_1 + 2] [i_1]))))));
                var_22 += ((/* implicit */unsigned char) (signed char)-40);
            }
        } 
    } 
    var_23 *= ((/* implicit */signed char) max((var_1), (((/* implicit */short) ((((/* implicit */int) (unsigned short)16)) <= (min((var_9), (var_9))))))));
    var_24 -= ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned long long int) var_16))));
    var_25 = ((long long int) (signed char)-40);
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_5] [i_6]))))) ? (((/* implicit */int) ((signed char) arr_19 [(signed char)3] [i_5] [i_5]))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)65294))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -71836929)) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) ? (max((((/* implicit */unsigned int) -1)), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_5])))))) : (arr_19 [18LL] [i_5] [18LL]));
                arr_20 [i_5] = ((/* implicit */short) var_10);
                var_27 = ((/* implicit */long long int) min((var_27), (max((var_3), (((/* implicit */long long int) arr_18 [i_5] [i_5] [i_5]))))));
            }
        } 
    } 
}
