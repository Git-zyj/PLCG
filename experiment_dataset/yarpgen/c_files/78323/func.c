/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78323
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
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (unsigned short)54182)), (5606965164003351944LL)))));
                arr_8 [i_0] [i_0 + 3] = ((/* implicit */unsigned short) ((((unsigned int) (-(((/* implicit */int) (unsigned char)42))))) < (arr_1 [i_0])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) min((((/* implicit */long long int) -1465904447)), (5606965164003351932LL)));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */signed char) (~(((((/* implicit */int) (!((_Bool)0)))) / (((/* implicit */int) ((((/* implicit */_Bool) -874371924162013963LL)) || (((/* implicit */_Bool) (unsigned char)127)))))))));
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1761167228)) <= (4294967295U))))) == (arr_10 [i_2])))) % (((/* implicit */int) min((((/* implicit */unsigned char) ((arr_14 [i_2]) != (((/* implicit */int) arr_12 [i_2] [i_3]))))), ((unsigned char)197))))));
                    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) arr_14 [i_3]))))) % (((arr_10 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4] [i_4 + 1])) && (((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))), (min((((/* implicit */unsigned int) var_2)), (arr_9 [i_3])))));
                }
            } 
        } 
    }
}
