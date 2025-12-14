/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71141
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
    var_18 |= ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)85))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_2])), (((unsigned long long int) arr_9 [i_0] [i_1] [i_2]))))) || (((/* implicit */_Bool) min(((short)-1234), (((/* implicit */short) (signed char)-74)))))));
                    var_21 = ((/* implicit */signed char) max((((short) var_7)), ((short)-1234)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_2] [i_2] [i_3] [i_4] = min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-51))))))), ((+(((/* implicit */int) (unsigned char)255)))));
                                arr_18 [i_0] [i_0] [10] [i_2] [(signed char)12] [i_3] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) % (arr_10 [1ULL] [i_1] [(short)9] [i_3] [(short)10])))) ? (((/* implicit */int) var_0)) : (var_15))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1051226568)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)0))))))));
                                var_22 = ((/* implicit */unsigned char) max((3702106488495190917LL), (((/* implicit */long long int) (signed char)125))));
                                var_23 -= ((/* implicit */unsigned char) min((max((arr_13 [i_4 + 1]), (arr_13 [i_0]))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_32 [i_5] [i_7] [i_7] [i_7] [(signed char)8] [i_5] [i_5] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1234))) : (var_6))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_6 - 1] [i_9] [i_6 - 1])) <= (((/* implicit */int) arr_12 [i_6 + 1] [i_9] [i_9] [i_9] [i_9] [i_6 + 1]))))))));
                                arr_33 [i_9] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_27 [i_6] [i_8 + 1] [8ULL] [i_6 - 1])), ((unsigned char)213)))) - (((/* implicit */int) ((((/* implicit */int) arr_27 [(signed char)5] [i_8 - 1] [9LL] [i_6 - 1])) != (((/* implicit */int) arr_27 [i_5] [i_8 + 1] [i_7] [i_6 + 1])))))));
                                var_24 -= ((/* implicit */short) min((((((/* implicit */int) arr_22 [i_6 - 1])) + (((/* implicit */int) (short)-32752)))), (((/* implicit */int) arr_6 [i_5] [i_6] [i_7] [i_9]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (22LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512)))));
                    var_26 -= ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)65521)) ? (arr_10 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1]) : (arr_10 [i_7] [i_7] [i_6 + 1] [i_6 - 1] [i_6 + 1]))), (((long long int) (signed char)-27))));
                    arr_34 [2] [i_7] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65519)), (arr_29 [i_6] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62445)) << (((max((((/* implicit */unsigned long long int) (signed char)33)), (9000486608352358256ULL))) - (9000486608352358252ULL)))))) : (-3273886054932375558LL)));
                }
            } 
        } 
    } 
    var_27 += (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3702106488495190940LL)), (12282690988494986079ULL))))))));
}
