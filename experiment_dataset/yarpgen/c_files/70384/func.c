/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70384
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((short) ((unsigned int) ((((/* implicit */int) (signed char)14)) > (((/* implicit */int) (short)8128)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_20 |= (signed char)-119;
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((signed char) arr_0 [i_0 + 1])))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        arr_8 [i_0] [i_2] [i_1 + 2] [i_0] = ((/* implicit */signed char) (short)32767);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3040914446U)) ? (((/* implicit */long long int) 1254052849U)) : (-7739331062707263616LL)))) ? ((-(((/* implicit */int) (signed char)-64)))) : (((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (-119523575)))));
                        var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)16476)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])))))));
                        var_24 |= ((/* implicit */int) arr_3 [i_2] [i_2] [i_2]);
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        arr_11 [i_4] [(signed char)2] [(signed char)2] [8LL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1 - 1])) | (((/* implicit */int) arr_3 [i_0] [7] [i_0 - 2]))))) ? (arr_2 [i_2 - 2] [(signed char)9] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_0] [i_0])) && (((/* implicit */_Bool) 16232504835645461359ULL))))))));
                        var_25 ^= ((/* implicit */signed char) (((~(var_18))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7132506170133803446LL)) || (((/* implicit */_Bool) (signed char)-119))))))));
                    }
                    arr_12 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)74))))) ? (((arr_7 [i_2] [i_2 + 1] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_3 [(signed char)8] [(signed char)8] [(signed char)8])) : (-1436375493))) : (((/* implicit */int) (signed char)-110))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-((~(8388604))))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
}
