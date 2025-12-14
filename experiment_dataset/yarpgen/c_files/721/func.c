/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/721
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
    var_17 = ((/* implicit */unsigned char) min((max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18421))) != (var_12)))), (((short) 3862648993U)))), (((/* implicit */short) var_1))));
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) var_8))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) arr_8 [16U] [i_2] [i_2]);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2] [i_2 + 1] [(unsigned char)4])) == (((/* implicit */int) (unsigned char)16))));
                        var_21 = ((/* implicit */unsigned short) ((long long int) (~(arr_3 [i_0]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            arr_14 [13LL] [i_4] |= ((/* implicit */unsigned short) (~(arr_3 [(_Bool)1])));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_9 [i_0] [0ULL] [i_0] [i_4] [i_0]))))));
                arr_17 [i_4] [(unsigned char)6] [2U] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_4] [(unsigned char)8])) || (arr_12 [i_0])))) % (((/* implicit */int) var_13))));
            }
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                arr_22 [(unsigned short)17] [i_4] [i_6] [i_4] &= ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [10])) == (((/* implicit */int) arr_4 [(unsigned char)8] [11LL]))));
                arr_23 [i_0] [(signed char)15] [(_Bool)1] [(unsigned short)16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 12871437318010391896ULL))));
                arr_24 [i_0] [i_0] [i_0] [19U] = ((/* implicit */unsigned short) ((unsigned int) arr_15 [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)42437)) == (((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_4] [i_4] [i_4] [i_4]))))))));
                            arr_30 [i_0] [i_0] [i_8] [i_7] [(signed char)7] = ((/* implicit */_Bool) (+(3U)));
                            arr_31 [i_4] [i_4] [i_8] [i_6] [i_8] [i_4] [17U] = ((/* implicit */long long int) (~(arr_3 [i_0])));
                            var_24 = ((/* implicit */unsigned long long int) ((arr_13 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0])))));
                        }
                    } 
                } 
            }
            arr_32 [i_4] [i_4] = ((((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned long long int) 2330317844U)) : (arr_29 [i_4] [i_4] [i_4] [i_4] [i_4]))) < (((/* implicit */unsigned long long int) arr_10 [i_0] [i_4] [i_0] [i_0] [i_0])));
            arr_33 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) * (arr_27 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] [(_Bool)1] [i_0])));
        }
    }
}
