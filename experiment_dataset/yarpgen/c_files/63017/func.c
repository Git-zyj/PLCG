/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63017
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */short) ((long long int) 15982364918928959953ULL));
                var_12 = ((/* implicit */_Bool) var_2);
                var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_6 [12ULL] [(short)7])) + (arr_5 [i_1] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_4 [7] [i_0] [i_1 - 3]))));
                arr_8 [i_0 + 1] [9ULL] = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_14 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-2147483647 - 1))) - (14344307399903711019ULL))) == (var_7)));
                    arr_18 [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_9 [i_2] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2])))))), (min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_4])))));
                }
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    arr_22 [i_5] [i_5] [i_2] = ((/* implicit */unsigned char) (+(((max((((/* implicit */unsigned long long int) var_8)), (arr_10 [i_3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))))));
                    arr_23 [i_5] [i_5] [(unsigned char)18] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 14344307399903711033ULL)) ? (((/* implicit */int) var_5)) : (max((((((/* implicit */_Bool) 2861413932U)) ? (((/* implicit */int) arr_21 [(unsigned short)9] [14ULL] [(unsigned short)9] [i_5])) : (((/* implicit */int) arr_15 [i_5])))), (((/* implicit */int) ((_Bool) 5000669998312049354ULL)))))));
                    var_15 = ((/* implicit */unsigned char) var_6);
                }
                arr_24 [i_2] = ((/* implicit */signed char) arr_16 [18ULL] [14U] [14U]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (signed char i_7 = 1; i_7 < 15; i_7 += 3) 
        {
            {
                arr_29 [i_6] [i_7] [i_6] = var_2;
                var_16 -= ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_13 [15] [i_6] [(unsigned char)18]))))));
            }
        } 
    } 
}
