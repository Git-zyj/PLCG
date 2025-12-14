/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78341
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (-((-(min((arr_4 [i_1]), (arr_4 [i_0 - 2])))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((int) min((((/* implicit */unsigned short) var_6)), (var_9)))), (((/* implicit */int) ((unsigned short) min((618573670), (((/* implicit */int) (signed char)4))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) (-(((int) (short)-32746)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (6506316164936639177LL)))))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2])))))))), (((((/* implicit */_Bool) max((arr_13 [i_3]), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? (min((((/* implicit */unsigned long long int) var_0)), (arr_14 [i_3]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535)))))))));
            var_14 = (-(((((/* implicit */_Bool) min((arr_14 [i_3]), (((/* implicit */unsigned long long int) arr_10 [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) arr_11 [i_3]))))) : (-8402901964894051158LL))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_4 = 4; i_4 < 18; i_4 += 1) 
        {
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (8402901964894051158LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))), ((-(arr_14 [i_2]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-12)))))));
            arr_18 [i_4] = ((/* implicit */unsigned int) ((unsigned short) (~((-(var_7))))));
        }
    }
    var_15 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) min((((/* implicit */unsigned short) (short)13)), (var_9)))), (max((2147483647), (((/* implicit */int) (short)-19777))))))));
}
