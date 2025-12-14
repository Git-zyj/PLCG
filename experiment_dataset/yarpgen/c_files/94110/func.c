/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94110
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
    var_18 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) (signed char)33))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) ((short) (signed char)-8))) : (((/* implicit */int) max(((unsigned short)50016), (((/* implicit */unsigned short) (signed char)-11)))))));
        var_20 = ((/* implicit */int) ((576460751766552576LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-11)))));
    }
    for (unsigned int i_1 = 4; i_1 < 19; i_1 += 3) 
    {
        var_21 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1017581213)) ? (var_14) : (((/* implicit */long long int) 2944846692U))))) ? (((/* implicit */int) ((signed char) (unsigned short)63216))) : (((((/* implicit */_Bool) arr_5 [2LL])) ? (arr_5 [10U]) : (((/* implicit */int) (unsigned char)252)))))));
        var_22 |= ((/* implicit */unsigned int) ((_Bool) ((unsigned short) -1)));
        arr_6 [i_1] [i_1 - 3] = ((/* implicit */unsigned short) 6);
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) ((unsigned short) ((_Bool) arr_8 [i_2])));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_14) >= (((/* implicit */long long int) (-(arr_5 [0]))))))) * (arr_4 [i_2] [i_2])));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_13 [i_4]), (arr_13 [i_4])))) ? (((/* implicit */int) arr_13 [i_4])) : ((-(((/* implicit */int) arr_13 [i_4]))))));
                    var_25 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((((/* implicit */int) arr_13 [i_4])) >= (arr_7 [i_2] [i_3]))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            {
                arr_20 [(signed char)6] [(signed char)6] |= ((/* implicit */_Bool) ((signed char) arr_10 [(short)19] [(short)19] [(short)19]));
                var_26 ^= ((/* implicit */unsigned short) arr_13 [8]);
            }
        } 
    } 
    var_27 += ((/* implicit */short) min((4105536010934759334ULL), (((/* implicit */unsigned long long int) (short)25037))));
}
