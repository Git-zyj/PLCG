/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87961
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
    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_15))) + (2147483647))) << ((((+(((/* implicit */int) var_13)))) - (5941)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))))) : (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [(unsigned char)8] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_8 [(short)1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_4 [i_0]))))))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) arr_11 [(signed char)2] [(signed char)2] [i_2] [(unsigned char)7])) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [(short)9] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)2] [i_3] [i_3]))))))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((unsigned int) arr_9 [i_2] [i_2] [i_0] [i_0])))))))));
                                var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_4] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [(short)8] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_1] [(short)15] [i_3] [i_4])))) + (((((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_2] [i_3] [(_Bool)1])))) << (((((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned short)0] [i_3] [i_3] [i_4])) - (15014)))))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned char)4] [i_0])) ? (((/* implicit */int) arr_13 [(unsigned char)16] [i_1] [i_1] [i_2] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [16U] [(_Bool)1])))) <= (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [(unsigned short)0] [i_2]))));
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_13 [(short)16] [(short)10] [(unsigned char)6] [(unsigned char)6] [(_Bool)0] [i_2])) : (((/* implicit */int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [16U] [i_1] [(_Bool)1] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [3U] [i_1] [i_0])) : (((/* implicit */int) arr_14 [6U] [i_1] [i_1] [(short)10] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)8])))))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [(signed char)17])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_2] [(unsigned short)4] [i_2])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_0] [(unsigned char)10])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_3 [i_2] [i_1] [5U])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_13 [i_1] [(unsigned char)2] [i_1] [i_1] [(unsigned char)2] [i_0])) : (((((/* implicit */_Bool) arr_13 [i_2] [(unsigned char)2] [(unsigned short)8] [(unsigned short)8] [(unsigned char)2] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)3])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1]))))))));
                    var_25 |= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))))) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [4ULL] [i_0] [(signed char)6] [i_1] [i_2])))));
                    var_26 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0]))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_2]))) : (((/* implicit */int) arr_13 [i_2] [6U] [i_0] [i_0] [6U] [i_0])))) > (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [i_2] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                var_27 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_5] [i_6])) ? (((/* implicit */int) ((unsigned char) arr_20 [i_5] [i_6]))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [20U] [i_6])) != (((/* implicit */int) arr_20 [i_5] [i_5])))))));
                arr_21 [i_5] [i_6] &= ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [i_5]))))) ? (((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_5])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_18 [i_6] [i_6] [i_6])))) : (((/* implicit */int) arr_16 [i_5]))));
                var_28 &= ((/* implicit */unsigned char) arr_20 [i_5] [i_5]);
                var_29 ^= ((/* implicit */short) arr_16 [i_5]);
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((_Bool) arr_25 [i_5] [i_6] [i_7] [i_7] [i_5] [(unsigned char)8])))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_24 [(unsigned short)15] [i_7] [(unsigned char)5]))) ? (((/* implicit */int) arr_17 [i_7])) : (((/* implicit */int) ((unsigned short) arr_20 [i_8] [(unsigned short)15])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
