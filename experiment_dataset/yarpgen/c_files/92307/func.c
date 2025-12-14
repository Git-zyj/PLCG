/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92307
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
    var_14 = ((/* implicit */unsigned char) 255ULL);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = arr_0 [i_0] [i_1];
                    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) (-(arr_5 [i_0]))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_2 - 1]) | (arr_4 [i_0] [i_1] [i_2 - 4])))) ? (arr_4 [i_0] [i_0] [i_0]) : (((arr_4 [i_0] [9LL] [9LL]) << (((arr_4 [i_0] [(signed char)8] [12ULL]) - (3713371586U)))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [5U] [i_2 - 3])) ? (((/* implicit */int) ((((((/* implicit */int) arr_1 [13])) + (((/* implicit */int) arr_0 [i_1] [i_0])))) >= (((/* implicit */int) var_10))))) : ((+(((/* implicit */int) arr_1 [i_1])))))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [10ULL])) : (-7758672428614733499LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) -1765565043)) & (1598640779U)))))) | (((/* implicit */long long int) arr_5 [i_0]))));
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0]) || (arr_6 [i_0] [i_0] [i_0]))))));
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)8191)))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) (~(min((arr_5 [i_3]), (((/* implicit */int) arr_3 [i_3]))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_3])), (var_10)))) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((((/* implicit */_Bool) arr_4 [i_3] [i_3] [16LL])) ? (arr_7 [i_3]) : (((/* implicit */int) var_1)))))) / (((/* implicit */int) arr_3 [i_3])))))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (-2063440375) : (arr_7 [i_3]))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (arr_1 [i_3]))))))) ? (((/* implicit */long long int) 2505819140U)) : (((arr_0 [i_3] [i_3]) ? (min((var_4), (((/* implicit */long long int) (short)14613)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3])) || (((/* implicit */_Bool) var_5))))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    arr_25 [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (1789148156U) : (((/* implicit */unsigned int) arr_21 [8U])))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_4] [i_6])) % (arr_5 [6ULL]))))))) / (((((/* implicit */long long int) ((/* implicit */int) (!(arr_6 [i_4] [i_4] [i_4]))))) | (max((((/* implicit */long long int) arr_18 [i_4] [i_5] [i_4])), (arr_24 [i_4] [i_4] [i_5] [(unsigned short)4])))))));
                    arr_26 [i_6] [i_6] [i_6] [i_4] = ((/* implicit */unsigned int) (-(((arr_5 [i_5]) - (((/* implicit */int) arr_1 [i_4]))))));
                    arr_27 [i_6] [i_6] [i_4] = ((/* implicit */signed char) (short)-10201);
                    arr_28 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((-335539662), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [2ULL] [2ULL]))) : (min((((/* implicit */unsigned int) arr_3 [i_5])), (2505819140U)))))));
                }
            } 
        } 
    } 
    var_19 = var_3;
}
