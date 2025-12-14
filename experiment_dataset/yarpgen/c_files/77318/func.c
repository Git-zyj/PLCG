/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77318
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (-2004913384) : (arr_1 [i_0])))) > (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -87275876)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (short)(-32767 - 1)))))), (arr_3 [i_0])))));
            arr_4 [i_0] [(signed char)5] = ((/* implicit */unsigned short) (+(((unsigned int) 87275875))));
            var_16 &= ((/* implicit */unsigned char) var_8);
        }
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (unsigned short)15339)) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_3])))));
                        arr_13 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_6 [i_2] [i_2] [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((_Bool) var_4))))) : ((~((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32746)))))))));
                        var_18 += ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) max((arr_9 [i_0] [i_0] [i_0] [i_0]), ((_Bool)1)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) (-(18446744073709551615ULL)));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_5 - 1])) : (((/* implicit */int) arr_15 [i_5 + 1]))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91)))))) : (arr_18 [i_5])));
                    arr_20 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */int) arr_17 [i_5] [i_6] [i_6]);
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 87275881)) : (arr_19 [i_5] [i_7] [i_7])));
                    arr_21 [i_6] [12U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6 - 1] [i_7])) ? (arr_14 [i_5 + 1] [i_6 - 1]) : (arr_14 [i_5] [i_5 + 1])));
                    arr_22 [i_6] [i_6] [i_6] = ((/* implicit */int) arr_16 [i_5]);
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_13))));
}
