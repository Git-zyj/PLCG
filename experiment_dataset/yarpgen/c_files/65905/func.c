/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65905
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_0]);
                var_12 -= ((/* implicit */unsigned char) -1394872820);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) -1394872820);
                /* LoopSeq 3 */
                for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) var_0);
                    var_15 = ((/* implicit */unsigned long long int) (signed char)-22);
                    arr_13 [i_2] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(4126468385425034660ULL)))))))));
                    var_16 = ((/* implicit */unsigned char) 1021885214U);
                    var_17 = ((/* implicit */short) (-(((((/* implicit */int) min(((signed char)48), (((/* implicit */signed char) (_Bool)1))))) % ((~(((/* implicit */int) var_0))))))));
                }
                for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) | (1862410434U)))));
                    var_19 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)0))))));
                    var_20 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? ((-(arr_6 [i_2 - 1]))) : (max((((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5])), (arr_6 [i_2]))))));
                }
                for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) (+(arr_16 [i_3])));
                    var_22 = ((/* implicit */int) var_5);
                }
            }
        } 
    } 
}
