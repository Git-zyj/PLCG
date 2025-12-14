/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69987
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
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((var_14) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) max((arr_1 [(short)11]), (arr_1 [i_0])))) : (((((/* implicit */_Bool) 15775591584154908003ULL)) ? (789618999) : (((/* implicit */int) (short)(-32767 - 1)))))))) : ((~(arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [2ULL])) & (arr_11 [i_0] [i_0] [(signed char)0] [i_0] [i_0])))) ? (((/* implicit */int) min((arr_1 [i_0]), (var_8)))) : (((/* implicit */int) (short)4080))))) < (((unsigned long long int) arr_5 [i_3] [i_3] [i_2] [i_2 + 1]))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (short)-4080)), (15775591584154908003ULL))) ^ (((4333965031253917139ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)4080)) : (((/* implicit */int) (signed char)-91))))) ? (arr_11 [(unsigned short)5] [i_1] [i_2] [i_3] [i_4]) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-25756)))))) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3] [i_3] [i_3] [i_3]))));
                                arr_13 [i_0] [i_1] [i_3 - 1] = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */unsigned short) ((4333965031253917139ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((short) (short)-4080))))))));
                    arr_15 [i_0] [9LL] [i_2] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [(signed char)4] [i_1] [i_2])))) : (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))))), ((+(min((arr_4 [(_Bool)1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])))))));
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((arr_11 [15U] [i_1] [i_2 - 3] [i_2] [i_2]) - (((((/* implicit */_Bool) -1751843635)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0])), (arr_5 [i_0] [i_1] [i_1] [i_2])))) : (((((/* implicit */int) (short)-4080)) | (((/* implicit */int) var_14))))))));
                }
            } 
        } 
    }
    for (signed char i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            arr_25 [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((-1751843630) < (((arr_11 [i_5] [i_5] [i_5] [i_6] [i_6]) - (((/* implicit */int) arr_1 [8U]))))))) == ((+(((/* implicit */int) (!(((/* implicit */_Bool) 11366964832025953151ULL)))))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [i_6] [i_6] [3])) ? (((/* implicit */int) arr_3 [i_5 + 3] [i_5 + 2] [i_6])) : (((/* implicit */int) arr_3 [i_5 + 4] [i_5 + 2] [i_5 + 4])))))))));
            arr_26 [(unsigned short)1] = ((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_6] [i_6] [i_6]);
            arr_27 [i_5] [i_6] [i_5 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_17 [i_5 - 3]), (((/* implicit */short) arr_22 [i_5] [i_5] [i_5 + 1]))))), (27171197)));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(max((((int) (unsigned short)40258)), (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(short)0] [i_6] [i_6])) || (((/* implicit */_Bool) var_2))))))))))));
        }
        arr_28 [i_5 - 1] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_2 [i_5 + 4] [i_5 + 4] [i_5 - 1])) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 14112779042455634477ULL)) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) (signed char)-1))))))));
    }
}
