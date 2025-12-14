/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55798
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_3] [i_1] [i_2] = ((/* implicit */short) arr_8 [i_0]);
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_11 [i_2 - 2] [21U] [i_2 - 1] [i_2 - 4]), (((signed char) arr_6 [i_0]))))), (min((min((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3])), (arr_3 [i_0]))), ((-(((/* implicit */int) (signed char)48))))))));
                            var_10 -= ((/* implicit */unsigned char) arr_10 [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 23; i_4 += 4) 
                {
                    var_11 = ((/* implicit */_Bool) arr_14 [11]);
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-49)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_4 - 3] [i_1] [i_0])) ? (arr_2 [13]) : (((/* implicit */long long int) ((/* implicit */int) min(((short)19543), (((/* implicit */short) (signed char)-49)))))))))));
                    arr_18 [(short)6] [i_1] = ((/* implicit */int) arr_0 [i_0]);
                    var_13 *= ((/* implicit */short) max((max((arr_7 [i_4 + 1] [i_4 - 1] [i_4 - 1]), (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_14 [(unsigned char)9]) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2888032528U)) ? (-1097161214) : (((/* implicit */int) (signed char)48))))) && (((/* implicit */_Bool) ((18446744073709551598ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [0] [6U])))))))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) (short)5722));
}
