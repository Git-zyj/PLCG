/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58732
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ (arr_7 [i_1] [i_1] [i_2] [i_0])));
                    arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-52))));
                }
                var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)24))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((arr_9 [i_0] [i_1] [i_1] [i_1]) - (((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)180)) ? (var_15) : (((/* implicit */int) arr_2 [i_3] [i_3]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 707275843U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? ((((_Bool)1) ? (17330556884107264754ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned short)0)))))))));
        /* LoopSeq 2 */
        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)20183)), (((((/* implicit */_Bool) (-(arr_14 [i_4])))) ? (((/* implicit */int) (unsigned short)65512)) : (min((var_15), (((/* implicit */int) var_10))))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                arr_21 [i_5] [(unsigned char)6] [i_3] [(signed char)10] = ((/* implicit */unsigned short) 2058317639U);
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 3; i_7 < 17; i_7 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_6 - 1] [i_4 + 2])) ? (((/* implicit */int) arr_20 [i_7 + 2] [i_6 - 1] [i_4 + 2])) : (((/* implicit */int) var_4))))), ((+(max((((/* implicit */unsigned int) 992)), (1392936306U)))))));
                            var_24 = ((/* implicit */short) (((~(((/* implicit */int) arr_25 [5LL] [i_7 - 3] [i_7] [i_7] [i_7] [i_7 - 2] [i_6])))) + (((arr_14 [i_4 - 2]) % (((/* implicit */int) var_18))))));
                            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((arr_23 [i_6]) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_22 [i_3]))))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_4 + 1] [i_7 + 2]))) : (((arr_17 [i_6 - 1] [i_7 - 1]) ? (((/* implicit */int) arr_17 [i_6 - 1] [i_7 + 1])) : (((/* implicit */int) arr_17 [i_6 - 1] [i_7 + 3]))))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) max(((signed char)52), (arr_4 [17U])))), (arr_19 [i_4 - 2] [i_4]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_8 = 2; i_8 < 18; i_8 += 4) 
        {
            arr_31 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) & (-1173126423)))) ? (((((/* implicit */_Bool) (unsigned char)62)) ? (arr_19 [i_8 + 2] [i_8 + 1]) : (((/* implicit */unsigned int) arr_7 [i_8 + 2] [i_8] [i_8] [i_8])))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_26 [i_3])) : (((/* implicit */int) arr_29 [i_3])))), (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) arr_4 [i_8])) : (((/* implicit */int) var_11)))))))));
            var_27 = ((/* implicit */signed char) ((max((arr_24 [1] [i_8 + 2] [1] [i_3] [i_3]), (arr_27 [i_3] [i_8 - 1] [i_8 + 2] [i_3] [i_8] [i_3] [i_3]))) & (((((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_8] [i_3])) ? (arr_6 [i_3] [i_3] [14U] [i_3]) : (arr_6 [i_8] [i_3] [i_3] [i_3])))));
        }
        var_28 |= ((/* implicit */unsigned long long int) var_16);
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (5471709634797213162LL)))))) ? (((((/* implicit */_Bool) 1173126432)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_19)))))) : ((-(((/* implicit */int) var_9))))));
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)233)) | (((/* implicit */int) var_0))));
    var_31 = ((/* implicit */unsigned int) var_8);
}
