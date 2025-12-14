/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88052
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (unsigned char)2);
                var_11 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1])) <= (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 3]))) : (arr_1 [i_1 + 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 3]))) & (2607055823U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_4 [i_1 - 3]), (arr_0 [i_1])))))))));
                var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1 - 3] [i_1 + 2]))))) ? (min((((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 1])), (arr_3 [i_1 - 1] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-14124)), (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (-1897726390))))));
                var_13 ^= var_3;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -1447241406))) ? (((/* implicit */int) max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2]))))));
        arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) 1073733632)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (signed char)-42)));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_15 = ((/* implicit */int) (~(((((/* implicit */_Bool) 4346917086362890771LL)) ? (arr_11 [i_3]) : (arr_11 [i_3])))));
        arr_13 [i_3] [i_3] |= ((/* implicit */int) min((arr_11 [i_3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_8 [i_3]) > (((/* implicit */int) var_6))))))))));
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) arr_10 [i_3] [i_3]);
        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (arr_8 [i_3]))), (min((-1271378137), (((/* implicit */int) (short)-16852))))));
        arr_15 [i_3] [(signed char)17] = ((/* implicit */int) ((((/* implicit */int) ((((unsigned int) 4294967288U)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) && (((/* implicit */_Bool) var_0))))))))) < (((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_3]))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 4; i_6 < 18; i_6 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) min(((unsigned short)50595), (((/* implicit */unsigned short) (signed char)12))))) : ((+(((/* implicit */int) (unsigned short)65099))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (short i_8 = 4; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_29 [i_8 - 4] [i_8 - 2] [i_8] [i_8] [i_8] [i_8] = (+(((/* implicit */int) arr_25 [i_4] [i_6 - 3] [(signed char)14] [i_8])));
                                arr_30 [i_6] |= ((/* implicit */int) arr_22 [12] [i_5] [i_7] [8ULL]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
