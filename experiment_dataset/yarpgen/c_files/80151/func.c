/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80151
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
    var_12 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_2)))) ? (18305165801837436779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1997239571U)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 - 1])))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned char) arr_10 [i_2]);
                            arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 3])) ? (arr_1 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_2 + 1]))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned char) min((arr_10 [i_1 + 1]), (((/* implicit */long long int) arr_1 [i_1 - 1]))))))));
                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18305165801837436779ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (1017556577U)))) ? (-861639775) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))) - (((max((((/* implicit */int) (_Bool)0)), (-1590605366))) + (((((/* implicit */_Bool) (short)2764)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65526))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            {
                arr_17 [i_5] = ((/* implicit */long long int) ((arr_15 [i_5 + 2] [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_5 - 1] [i_5]))))));
                var_17 += max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) : (arr_16 [i_4 + 3] [i_5])))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_5]))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (unsigned short)65535))))))), (((/* implicit */int) var_11)));
            }
        } 
    } 
}
