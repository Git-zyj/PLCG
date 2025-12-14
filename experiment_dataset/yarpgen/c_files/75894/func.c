/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75894
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) ((_Bool) var_11))) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_1 + 1])), (arr_3 [i_0] [i_0] [(_Bool)0])))) - (8393))))) | (((/* implicit */int) var_8))));
                var_18 *= ((/* implicit */signed char) ((((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-125))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [13LL]), (((/* implicit */unsigned int) var_0))))) && (((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */short) arr_2 [i_0] [(_Bool)1] [i_0])))))))) : (((/* implicit */int) ((min((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)-124)))) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [2] [(unsigned short)6]))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [(unsigned short)6] [i_1 + 2] [i_1 - 1])))) >= (((((/* implicit */int) (unsigned char)201)) >> (0U))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (((/* implicit */int) max(((signed char)-125), ((signed char)119))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % ((~(((/* implicit */int) (signed char)-98))))))) ? (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_3 [i_2 + 3] [i_2 + 3] [i_2])))), (((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 2] [i_2]))))) : (arr_1 [i_2]))))));
        arr_8 [(_Bool)0] = ((/* implicit */unsigned char) arr_6 [i_2] [i_2]);
        arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((long long int) arr_7 [i_2 + 3])))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [14U])) < (((/* implicit */int) ((_Bool) arr_6 [i_2] [i_2 + 3]))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(_Bool)1])) << (((((/* implicit */int) arr_10 [i_3])) - (162)))));
        var_22 += ((/* implicit */signed char) var_16);
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3])) | (((/* implicit */int) arr_11 [(unsigned short)15]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_3]))));
        arr_12 [i_3] = ((/* implicit */signed char) var_9);
    }
}
